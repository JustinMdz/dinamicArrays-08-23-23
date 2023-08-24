#include <iostream>
#include "Signatures.h"
using namespace std;
const int static ROWS = 3;
const int static COLUMNS = 4;

int main() {

	float** studentsSignatures;

	Signatures* studentRegister = new Signatures();
	studentRegister->initMatrixRegister(studentsSignatures);
	return 0;
}