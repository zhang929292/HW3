#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(SizeShould, ReturnSize) {
  SinglyLinkedList lst;
  lst.push_front(8);
	lst.push_back(12);
	lst.push_back(13);
	lst.push_back(15);
  int actual = lst.size();
  EXPECT_EQ(4, actual);
}

TEST(BackShould, ReturnBack) {
  SinglyLinkedList lst;
	lst.push_front(8);
	lst.push_back(12);
	lst.push_back(13);
	lst.push_back(15);
  int actual = lst.back();
  EXPECT_EQ(15, actual);
}
TEST(FrontShould, ReturnFront) {
  SinglyLinkedList lst;
	lst.push_front(8);
	lst.push_back(12);
	lst.push_front(13);
	lst.push_back(15);
  int actual = lst.front();
  EXPECT_EQ(13, actual);
}
