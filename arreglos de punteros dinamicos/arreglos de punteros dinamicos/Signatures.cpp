#include "Signatures.h"

Signatures::Signatures()
{
	
}

void Signatures::initMatrixRegister(float**& registerGradesOfStudent)
{ 
	registerGradesOfStudent = new float *[ROWS];
	for (int index = 0; index < ROWS; index++){
		registerGradesOfStudent[index] = new float[COLUMNS];
	}
}

void Signatures::getSignaturesData(float**& registerGradesOfStudent)
{
	for (int index1 = 0; index1 < ROWS; index1++) {
		for (int index2 = 0; index2 < COLUMNS; index2++) {
			cout << "Enter the grade for the quarter : " << index1 << ", and the subject: " << index2<<", :";
			cin >> registerGradesOfStudent[index1][index2];
		}
	}
}

void Signatures::getAnnualAverage(float**& registerGradesOfStudent)
{
	float studentAnnualAverage=0.0;
	
	for (int index2 = 0; index2 < COLUMNS; index2++) {
	for (int index1 = 0; index1 < ROWS; index1++) {
		studentAnnualAverage += registerGradesOfStudent[index1][index2];
		}
	studentAnnualAverage /= ROWS;
	cout <<"\nThe annual average of the student in the subject : " << index2
		<<", was :" << studentAnnualAverage<<endl<<endl;
	studentAnnualAverage = 0.0;
	}
}

void Signatures::printMatrixRegister()
{
}
