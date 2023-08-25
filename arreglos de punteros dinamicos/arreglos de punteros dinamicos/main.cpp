#include <iostream>
#include "Signatures.h"
using namespace std;

//NOTE: Move this values inside of main and send as params
const int static ROWS = 3;
const int static COLUMNS = 4;

int main() {

	float** studentsSignatures;

	Signatures* studentRegister = new Signatures();
	studentRegister->initMatrixRegister(studentsSignatures);
	studentRegister->getSignaturesData(studentsSignatures);
	studentRegister->getStudentAnnualAverage(studentsSignatures);
	studentRegister->printMatrixRegister(studentsSignatures);
	return 0;
}

//use .gitignore to delete x64 directories 