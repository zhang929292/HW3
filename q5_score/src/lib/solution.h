#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


class AcademicRecord{
public:
	int maths;
	int science;
	int physics;
	AcademicRecord();
	AcademicRecord(int _maths, int _science, int _physics);
	AcademicRecord(const AcademicRecord& T);
	AcademicRecord& operator ++ ();
	const AcademicRecord operator ++ (int);
	AcademicRecord& operator -- ();
	const AcademicRecord operator -- (int);
	AcademicRecord operator += (int v);
	AcademicRecord operator -= (int v);
	bool operator == (const AcademicRecord& T);

	void formulation();
	string Print();
	
};

#endif