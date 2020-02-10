#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Should, Return) {
  Solution solution;
  int num = 10;
  vector<int> ret = {3, 7, 11, 15};
  vector<int> actual = solution.sum(ret, num);
  vector<int> expected = {0, 1};
  EXPECT_EQ(expected, actual); 
}