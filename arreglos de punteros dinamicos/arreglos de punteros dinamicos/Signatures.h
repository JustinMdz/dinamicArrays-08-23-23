#pragma once
#include <iostream>
using namespace std;

class Signatures {
	const int static ROWS = 3;
	const int static COLUMNS = 4;
private:
	
	float** studentGrades;
	
public:
	Signatures();
	void initMatrixRegister(float**& registerGradesOfStudent);
	void getSignaturesData(float**& registerGradesOfStudent);
	void getAnnualAverage(float**& registerGradesOfStudent);
	void printMatrixRegister();
};
