#ifndef INCREMENTER_H
#define INCREMENTER_H

namespace mylib {

class Incrementer {
public:
  Incrementer();

  void increment();
  int getValue() const;

private:
  int value;
};

} // namespace mylib

#endif
