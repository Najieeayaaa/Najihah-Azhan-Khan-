//chapter 8

/*#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE= 25;

struct PayRoll{
	int empNumber;
	char name[SIZE];
	double hours;
	double payRate;
	double grossPay;	
};

int main(){
	PayRoll employee;
	
	cout<<"Enter the employee number: ";
	cin>>employee.empNumber;
	
	cout<<"Enter the employee's name: ";
	cin.ignore();
	cin.getline(employee.name, SIZE);
	
	cout<<"How many hours did the employee work? ";
	cin>> employee.hours;
	
	cout<<"What is the employee's hourly payrate? ";
	cin>> employee.payRate;
	
	employee.grossPay= employee.hours*employee.payRate;
	
	cout<<"Here is the employee's payroll data:\n";
	cout<<"name:"<<employee.name<<endl;
	cout<<"Number: "<<employee.payRate<<endl;
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"Gross pay: $"<<employee.grossPay<<endl;
	
	return 0;
}*/

#include <iostream>
using namespace std;
