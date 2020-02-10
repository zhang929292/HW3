#include "src/lib/solution.h"

int main(){
	SinglyLinkedList lst;
	lst.push_front(8);
	lst.push_back(12);
	lst.push_back(13);
	lst.push_back(15);
    
    lst.print();

	// lst.SinglyLinkedList(inputs, i);

    cout << lst.empty() << endl;
	cout << "Size is: " <<lst.size() << endl;
	cout << "When i = 0, the first element is: " << lst.GetIthPointer(0)->val << endl;
	cout << lst.empty() << endl;
	cout << lst.size() << endl;

	ListNode *p = lst.GetBackPointer();
	cout << p->val << endl;
	cout << lst.back() << endl;
	cout << lst.front() << endl;
	
	return 0;
}