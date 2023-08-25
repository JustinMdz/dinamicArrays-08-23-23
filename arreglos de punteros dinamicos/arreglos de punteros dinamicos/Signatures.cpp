#include "Signatures.h"
//NOTE: Classes are always named as singular form
//NOTE: If you use Signature, don´t use grade for clarify terms
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
//NOTE: Dont add the name of the class in the function
void Signatures::getSignaturesData(float**& registerGradesOfStudent)
{
	for (int index1 = 0; index1 < ROWS; index1++) {
		for (int index2 = 0; index2 < COLUMNS; index2++) {
			cout << "Enter the grade for the quarter : " << index1 << ", and the subject: " << index2<<", :";
			cin >> registerGradesOfStudent[index1][index2];
		}
	}
}

void Signatures::getStudentAnnualAverage(float**& registerGradesOfStudent)
{
	float studentAnnualAverage=0.0;
	
	for (int index2 = 0; index2 < COLUMNS; index2++) {
		//NOTE:Format your code
		//NOTE:index1 and index2  could get name quarter and grade 
	for (int index1 = 0; index1 < ROWS; index1++) {
		studentAnnualAverage += registerGradesOfStudent[index1][index2];
		}
	studentAnnualAverage /= ROWS;
	cout <<"\nThe annual average of the student in the subject : " << index2
		<<", was :" << studentAnnualAverage<<endl<<endl;
	studentAnnualAverage = 0.0;
	}
}
//NOTE:A better name for this function is printRegisterGrades, matrix is redundant
void Signatures::printMatrixRegister(float**& registerGradesOfStudent)
{
	cout << "\n\nThe grades of the student this year was: " << endl;
	for (int index1 = 0; index1 < ROWS; index1++) {
		cout << "\n\nQuarter: " << index1<<endl;
		for (int index2 = 0; index2 < COLUMNS; index2++) {
			cout << "Subject: " << index2<<", Grade: "
			<<registerGradesOfStudent[index1][index2]<<endl;
		}
	}
}
