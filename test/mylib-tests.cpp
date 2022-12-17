#define BOOST_TEST_MODULE MyLib UnitTest

#include "incrementer.h"
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(INCREMENTER)

BOOST_AUTO_TEST_CASE(initializes_zero) {
  using namespace mylib;

  Incrementer incrementer;

  BOOST_TEST(incrementer.getValue() == 0);
}

BOOST_AUTO_TEST_CASE(increments_by_one) {
  using namespace mylib;

  Incrementer incrementer;

  BOOST_TEST(incrementer.getValue() == 0);
  incrementer.increment();
  BOOST_TEST(incrementer.getValue() == 1);
  incrementer.increment();
  BOOST_TEST(incrementer.getValue() == 2);
}

BOOST_AUTO_TEST_SUITE_END()
