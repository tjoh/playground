#include "incrementer.h"

mylib::Incrementer::Incrementer() : value(0) {}

void mylib::Incrementer::increment() { ++value; }

int mylib::Incrementer::getValue() const { return value; }
