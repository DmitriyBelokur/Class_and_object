#include "stack.hpp"

Pair Stack::push(int value) {
  Pair res {false, ""};
  if (current_position == SIZE_STACK) {
    res.msg = "Satck is full";
    return res;
  }
  array[++current_position] = value;
  res.status = true;
  res.msg = "Success add to stack";
  return res;
}

Pair Stack::pop() {
  Pair res {false, "Stack empty"};
  if (current_position == -1) {
    return res;
  }
  --current_position;
  res = {true, "Success"};
  return res;
}

Value Stack::top() const {
  Value res {false, 0};
  if (current_position == -1) {
    return res;
  }
  res = {true, array[current_position]};
  return res;
}

unsigned Stack::GetMaxStackSize() {
  return SIZE_STACK;
}