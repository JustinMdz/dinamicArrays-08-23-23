#pragma once
#include <iostream>
using namespace std;

class Signatures {
	//NOTE:This code was redundant
	const int static ROWS = 3;
	const int static COLUMNS = 4;
private:
	
	float** studentGrades;
	
public:
	Signatures();
	void initMatrixRegister(float**& registerGradesOfStudent);
	void getSignaturesData(float**& registerGradesOfStudent);
	void getStudentAnnualAverage(float**& registerGradesOfStudent);
	void printMatrixRegister(float**& registerGradesOfStudent);
};
