#pragma once
#include <iostream>
using namespace std;

class Siganatures {

private:
	float** studentGrades;

public:

	void initMatrixRegistrer(float **registerGradesOfStudent);
	void fillMatrixRegistrer(float** registerGradesOfStudent);
	void getAnnualAverage(float** registerGradesOfStudent);
	void printMatrixRegister();

};
