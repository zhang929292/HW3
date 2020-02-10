#include "solution.h"

void Solution::Print(vector<int>& vct){
	cout << "**********************************************************************" << endl;;
	cout << "Vector: ";
	for (vector<int>::iterator it = vct.begin(); it != vct.end(); it++){
		cout << (*it);
		if (it+1 == vct.end())
			cout << endl;
		else 
			cout << ", ";
	}
	cout << "**********************************************************************" << endl;
	cout << "Please choose any of the following options:" << endl;
	cout << "\t1. What is the first element?" << endl;
	cout << "\t2. What is the last element?"<< endl;
	cout << "\t3. What is the current element?" << endl;
	cout << "\t4. What is the ith element from the current location?"<< endl;
	cout << "\t5. Exit."<< endl;
	cout << "**********************************************************************" << endl;
}

void Solution::function(vector<int>& vct){
	int input = -1;
	vector<int>::iterator it = vct.begin();

	do{
		Print(vct);
		cin >> input;
		switch(input){
			case 1:
				it = vct.begin();
				cout << "Output: " << (*it) << endl;
				break;
			case 2:
				it = vct.end()-1;
				cout << "Output: " << (*it) << endl;
				break;
			case 3:
				cout << "Output: " << *it << endl;
				break;
			case 4:
				cout << "Enter the value of i:" << endl;
				int tmp;
				cin >> tmp;
				if (tmp < 0){
					cout << "Value of i cannot be negative" << endl;
				}else if ( int(it - vct.begin()) + tmp> vct.size()){
					cout << "Value of i cannot be greater than the size of vector" << endl;
				}else {
					it = it + tmp;
					cout << "Output: " << *it << endl;
				}
				break;
		}
	}while(input != 5);
	cout << "Exit !" << endl;
}

