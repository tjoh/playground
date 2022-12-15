#include "incrementer.h"
#include <iostream>

int main() {
  mylib::Incrementer inc;

  std::cout << inc.getValue() << std::endl;
  inc.increment();

  std::cout << inc.getValue() << std::endl;
  inc.increment();

  std::cout << inc.getValue() << std::endl;
  inc.increment();

  std::cout << inc.getValue() << std::endl;

  return 0;
}
