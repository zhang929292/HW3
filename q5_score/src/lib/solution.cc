#include "solution.h"

AcademicRecord::AcademicRecord(){
	maths = science = physics = 0;
}
AcademicRecord::AcademicRecord(int _maths, int _science, int _physics):maths(_maths), science(_science), physics(_physics){
} 

AcademicRecord::AcademicRecord(const AcademicRecord& T){
	*this = T;
}

void AcademicRecord::formulation(){
	if (maths > 100) maths = 100;
	if (maths < 0) maths = 0;

	if (science > 100) science = 100;
	if (science < 0) science = 0;

	if (physics > 100) physics = 100;
	if (physics < 0) physics = 0;
}

AcademicRecord& AcademicRecord::operator ++ (){
	*this += 10;
	return *this;
}

const AcademicRecord AcademicRecord::operator ++ (int){
	AcademicRecord ret(*this);
	*this += 10;
	return ret;
}

AcademicRecord& AcademicRecord::operator -- (){
	*this -= 20;
	return *this;
}

const AcademicRecord AcademicRecord::operator -- (int){
	AcademicRecord ret(*this);
	*this -= 20;
	return ret;
}


AcademicRecord AcademicRecord::operator += (int v){
	maths += v;
	science += v;
	physics += v;
	AcademicRecord::formulation();
	return *this;
}

AcademicRecord AcademicRecord::operator -= (int v){
	maths -= v;
	science -= v;
	physics -= v;
	AcademicRecord::formulation();
	return *this;
}
bool AcademicRecord::operator == (const AcademicRecord& T){
	return maths==T.maths && science == T.science && physics == T.physics;
}

string AcademicRecord::Print(){
	string ret;
	ret += "Maths:" + to_string(maths) + '\n';
	ret += "Science:" + to_string(science) + '\n';
	ret += "Physics:" + to_string(physics) + '\n';
	return ret;
}

