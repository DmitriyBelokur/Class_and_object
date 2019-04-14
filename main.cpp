#include <iostream>
#include "stack.hpp"

int main(int argc, char const *argv[]) {
  Stack st;
  st.push(90);
  st.push(100);
  std::cout << st.top().value << std::endl;

  st.push(1);
  std::cout << st.top().value << std::endl;
  st.pop();
  st.pop();
  std::cout << st.top().value << std::endl;
  st.pop();
  auto value = st.top();
  if (value.status) {
    std::cout << value.value << std::endl;
  } else {
    std::cout << "Stack is empty" << std::endl;
  }
  auto res = st.pop();
  std::cout << res.msg << std::endl;
  res = st.pop();
  std::cout << res.msg << std::endl; 
  st.push(100.20);
  return 0;
}
