#include "src/lib/solution.h"

int main(){
	vector<int> input = {8, 12, 13, 15};
    SinglyLinkedList lst(input, 4);
    
    lst.print();
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