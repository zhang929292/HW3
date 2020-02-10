#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Score1Should, ReturnScore1) {

  AcademicRecord obj1(5, 10, 95); 
  obj1++;
  int actual1 = obj1.maths;
  int actual2 = obj1.science;
  int actual3 = obj1.physics;
  EXPECT_EQ(15, actual1);
  EXPECT_EQ(20, actual2);
  EXPECT_EQ(100, actual3);
}
TEST(Score1Should, ReturnScore2) {

  AcademicRecord obj1(50, 10, 95); 
  obj1--;
  int actual1 = obj1.maths;
  int actual2 = obj1.science;
  int actual3 = obj1.physics;
  EXPECT_EQ(30, actual1);
  EXPECT_EQ(0, actual2);
  EXPECT_EQ(75, actual3);
}
TEST(Score1Should, ReturnScore3) {

  AcademicRecord obj1(50, 10, 100); 
  obj1+=5;
  int actual1 = obj1.maths;
  int actual2 = obj1.science;
  int actual3 = obj1.physics;
  EXPECT_EQ(55, actual1);
  EXPECT_EQ(15, actual2);
  EXPECT_EQ(100, actual3);
}

