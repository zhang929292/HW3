#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(StackShould, ReturnStack) {
  Solution solution;
  string str = "q{a+b";
  bool actual =  solution.mystack(str);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}

TEST(Stack1Should, ReturnStack1) {
  Solution solution;
  string str = "{[(ab)k]}";
  bool actual =  solution.mystack(str);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}