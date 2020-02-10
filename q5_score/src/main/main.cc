#include <iostream>
#include "src/lib/solution.h"



int main(){
	AcademicRecord obj1, obj2; 
	// obj1.maths = 5;  
	// obj1.science = 10;  
	// obj1.physics = 95;  
    AcademicRecord (95, 100, 85);
	cout<< "Value before incrementation :\n"<< obj1.Print() << endl;
	obj1++;
	cout<< "Value after incrementation :\n"<< obj1.Print() << endl;
	obj1--;
	cout<< "Value after decrementation :\n"<< obj1.Print() << endl;
	obj2 = obj1;
	cout<< "Value of Object 2:\n" << obj2.Print() << endl;
	obj2+=50;
	cout<< "Value of Object 2 after increasing marks by 50 for each subject:\n" << obj2.Print() << endl; 
	obj2-=30; 
	cout<< "Value of Object 2 after decreasing marks by 30 for each subject:\n" << obj2.Print() << endl; 
	return 0;
}
