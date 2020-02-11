#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(EmptyShould, ReturnEmpty) {
  	SinglyLinkedList lst;
	lst.push_front(8);
  	int actual = lst.empty();
  	EXPECT_EQ(0, actual);
}

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

TEST(GetIthPointerShould, ReturnGetIthPointer) {
	SinglyLinkedList lst;
  	lst.push_front(8);
	lst.push_back(12);
	lst.push_back(15);
	ListNode *p = lst.GetIthPointer(0);
	int actual = p -> val;
  	EXPECT_EQ(8, actual);
}

TEST(PopBack, ReturnPopBack) {
  	SinglyLinkedList lst1;
	SinglyLinkedList lst2;
  	lst1.push_front(8);
	lst1.push_back(12);
	lst1.push_back(15);
	lst2.push_front(8);
	lst2.push_back(12);
  	lst1.pop_back();
  	int actual = lst1.back();
  	int expected = lst2.back();
  	EXPECT_EQ(expected, actual);
}

