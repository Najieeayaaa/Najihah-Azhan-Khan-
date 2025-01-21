#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int SIZE=20;
void getInput(string uniName[], int intake[], int enrolment[], int output[], int &count){
	ifstream inputFile("input.txt");
	if(!inputFile){
		cout<<"Error opening input file!"<<endl;
		exit(0);
}

	for(count=0; count<SIZE; count++){
		inputFile>> uniName[count]>> intake[count]>> enrolment[count]>> output[count];
		if(count>SIZE)
		break;
	}
	inputFile.close();	
}

int calcTotal(int array[], int SIZE){
	int total= 0;
	for (int i=0; i<SIZE; i++){
		total+=array[i];
	}
return total;
}

int getLowest(int array[], int SIZE){
	int min=0;
	for( int i=1; i<SIZE; i++){
		if(array[i]<array[min])
		min=i;
	}
	return min;
}

int getHighest(int array[], int SIZE){
	int max=0;
	for(int i=1; i<SIZE; i++){
		if(array[i]>array[max])
		max=i;
	}
	return max;
}

int main(){
	string uniName[SIZE];
	int count;
	int intake[SIZE], enrolment[SIZE], output[SIZE];
	int totalIntake, totalEnrolment, totalOutput;
	double averageIntake, averageEnrolment, averageOutput;
	int lowestIntake, lowestEnrolment, lowestOutput;
	int highestIntake, highestEnrolment, highestOutput;
	int rangeIntake, rangeEnrolment, rangeOutput;
	
	getInput(uniName, intake, enrolment, output, count);
	
	totalIntake= calcTotal(intake, count);
	totalEnrolment= calcTotal(enrolment, count);
	totalOutput= calcTotal(output, count);
	
	averageIntake= totalIntake/static_cast<double>(count);
	averageEnrolment=totalEnrolment/static_cast<double>(count);
	averageOutput= totalOutput/static_cast<double>(count);
	
	lowestIntake= getLowest(intake, count);
	lowestEnrolment= getLowest(enrolment, count);
	lowestOutput= getLowest(output, count);
	
	highestIntake= getHighest(intake, count);
	highestEnrolment= getHighest(enrolment, count);
	highestOutput= getHighest(output, count);
	
	rangeIntake= intake[highestIntake]- intake[lowestIntake];
	rangeEnrolment= enrolment[highestEnrolment]- enrolment[lowestEnrolment];
	rangeOutput= output[highestOutput]- output[lowestOutput];
	
	ofstream outputFile("output.txt");
	if(!outputFile)
		cout<<"Error opening output file!"<<endl;

	outputFile<<"\tNUMBER OF STUDENTS' INTAKE, ENROLMENT AND OUTPUT"<<endl<<"\tIN PUBLIC UNIVERSITIES (2024)"<<endl;
	outputFile<<"-------------------------------------------------------------------------"<<endl;
	outputFile<<"University\tIntake\t\tEnrolment\tOutput"<<endl;
	outputFile<<"-------------------------------------------------------------------------"<<endl;
	
	for(int i=0; i<count; i++){
		outputFile<< uniName[i]<<"\t\t"<<intake[i]<<"\t\t"<<enrolment[i]<<"\t\t"<<output[i]<<endl;
	}
	outputFile<<"-------------------------------------------------------------------------"<<endl;
	outputFile<<"TOTAL\t\t"<<totalIntake<<"\t\t"<<totalEnrolment<<"\t\t"<<totalOutput<<endl;
	outputFile<<"AVERAGE\t\t"<<averageIntake<<"\t\t"<<averageEnrolment<<"\t\t"<<averageOutput<<endl;
	outputFile<<"-------------------------------------------------------------------------"	<<endl;

	outputFile<<"THE LOWEST NUMBER OF STUDENTS' INTAKE = "<<intake[lowestIntake]<<"("<<uniName[lowestIntake]<<")"<<endl;
	outputFile<<"THE HIGHEST NUMBER OF STUDENTS' INTAKE = "<<intake[highestIntake]<<"("<<uniName[highestIntake]<<")"<<endl<<endl;
	
	outputFile<<"THE LOWEST NUMBER OF STUDENTS' ENROLMENT = "<<enrolment[lowestEnrolment]<<"("<<uniName[lowestEnrolment]<<")"<<endl;
	outputFile<<"THE HIGHEST NUMBER OF STUDENTS' ENROLMENT = "<<enrolment[highestEnrolment]<<"("<<uniName[highestEnrolment]<<")"<<endl<<endl;
	
	outputFile<<"THE LOWEST NUMBER OF STUDENTS' OUTPUT = "<<output[lowestOutput]<<"("<<uniName[lowestOutput]<<")"<<endl;
	outputFile<<"THE HIGHEST NUMBER OF STUDENTS' OUTPUT = "<<output[highestOutput]<<"("<<uniName[highestOutput]<<")"<<endl<<endl;
	
	outputFile<<"Range of intake = "<<rangeIntake<<endl;
	outputFile<<"Range of enrolment = "<<rangeEnrolment<<endl;
	outputFile<<"Range of output = "<<rangeOutput<<endl;
	
	outputFile<<"-------------------------------------------------------------------------"<<endl;
	
	outputFile.close();
	system("notepad output.txt");

	return 0;	
}	
