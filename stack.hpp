#pragma once
#include "common_type.hpp"

class Stack {
 public:
  Pair push(int value);

  Pair push(unsigned int) = delete;
  Pair push(long) = delete;
  Pair push(long long) = delete;
  Pair push(float) = delete;
  Pair push(double) = delete;
  Pair push(long double) = delete;

  Pair pop();
  Value top() const;
  static unsigned GetMaxStackSize();
 private:

  constexpr static unsigned SIZE_STACK = 255;
  int array[SIZE_STACK];
  int current_position;
};

