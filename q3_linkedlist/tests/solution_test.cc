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

TEST(PrintPushShould, ReturnPrintPush) {
  SinglyLinkedList lst;
	lst.push_front(8);
	lst.push_back(12);
	lst.push_back(13);
	lst.push_back(15);
  string a;
  a = lst.print();
  EXPECT_EQ("print: { 8 12 13 15 }", actual);
}

// TEST(IthptrShould, ReturnIthptr) {
//   SinglyLinkedList lst;
//   lst.push_front(8);
// 	lst.push_back(12);
// 	lst.push_back(13);
// 	lst.push_back(15);
  
//   ListNode* actual = lst.GetIthPointer(3);
//   EXPECT_EQ(15, actual);
// }