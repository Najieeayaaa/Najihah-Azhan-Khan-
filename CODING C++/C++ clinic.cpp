/*#include <iostream>
#include <cmath>
using namespace std;

double getRadius(){
	double radius;
	cout<<"Enter the radius of the circle:";
	cin>>radius;
	while(radius<0){
		cout<<"\nPlease enter non-negative number: ";
		cin>>radius;
	}
	return radius;
}

double calculateArea(double radius){
	double area;
	area= 3.14159* pow(radius, 2.0);
	return area;
}

int main(){
	double area, radius;
	
	radius= getRadius();
	area= calculateArea(radius);
	
	cout<<"The area of the circle is "<<area<<endl;
	
	return 0;
}

#include <iostream>
using namespace std;

float yardToMile(int yards, int feet){
	float totalMiles;
	totalMiles= (yards*3.0 +feet)/5280.0;
	
	return totalMiles;
}

int main(){
	float totalMiles;
	int yards, feet;
	cout<<"Enter yards and feet:";
	cin>>yards>>feet;
	
	totalMiles= yardToMile(yards, feet);
	cout<<endl<<yards<<" yards and "<<feet<<" feet is equivalent to "<<totalMiles<<" miles";
}

#include <iostream>
using namespace std;
const int CUSTOMER=3;
double getPrice(int &quantity, double price, double &totalPrice){
	int priceApple, priceBrownies, priceCupcake, quantityApple, quantityBrownies, quantityCupcake;
		do{
			cout<<"Enter details for customer:"<<endl;
			cout<<"Enter quantity of Apple Pie: "<<endl;
			cin>>quantityApple;
			cout<<"Enter quantity for Brownies: "<<endl;
			cin>>quantityBrownies;
			cout<<"Enter quantity for Cupcake: "<<endl;
			cin>>quantityCupcake;
		}while(quantity>0);
		
		totalPrice=quantity*price;
		
		return totalPrice;
	}
	
double calcPrice(double &totalPrice){
	double total;
	totalPrice+=totalPrice;
	
	if(total>=50){
		findLeast(totalPrice);
	}
		
}

double findLeast(double &totalPrice){
	totalPrice-=totalPrice*0.25;
}

int main(){
	
}

#include <iostream>
#include <fstream>
using namespace std;
int main(){
	double rainfall, total;
	double average;
	ifstream inputFile("rainfall.txt");
	if(!inputFile){
		cout<<"There is an error opening input file."<<endl;
		exit(0);
	}
	for(int i=0; i<5; i++){
		inputFile>>rainfall;
		total+=rainfall;
	}
	inputFile.close();
	
	ofstream outputFile("rainfall_report.txt");
	average=total/5.0;
	
	outputFile<<"Total rainfall: "<<total<<endl<<"Average rainfall: "<<average<<endl;
	outputFile.close();
	system("notepad rainfall_report.txt");
	
	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string output;
	ofstream outputFile("example.txt");
	outputFile<<"Hello, this is a test file."<<endl;
	outputFile<<"We are writing some data to this file."<<endl;
	outputFile<<"File operations are really important in C++."<<endl;

	outputFile.close();
	ifstream inputFile("example.txt");
	
	while(!inputFile.eof()){
		getline(inputFile, output);
		cout<<output<<endl;
	}
	
	return 0;
}

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main(){
	char filename[50], name[50];
	
	cout<<"Enter file name and your name: ";
	cin>>filename;
	cin.ignore();
	cout<<endl<<"Enter your name: ";
	cin.getline(name, 50);
	
	strcat(filename, ".txt");
	
	ofstream outputFile(filename);
	if(!outputFile){
		cout<<"The file cannot be opened."<<endl;
		exit(0);
	}
	outputFile<<"Enter file name: "<<filename<<endl;
	outputFile<<"Enter your name: "<<name<<endl;
	outputFile<<"File "<<filename<<".txt created successfuly"<<endl;
	outputFile.close();
	
	return 0;
}*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
	string name;
	int quiz, assignment, midterm, lab, project, total=0, remaining;
	
	ifstream inputFile("inCarryMark.txt");
	if(!inputFile){
		cout<<"The input file cannot be opened."<<endl;
		exit(0);
	}
	ofstream outputFile("outCarryMark.txt");
	outputFile<<setw(20)<<"Name"<<setw(10)<<"Quiz"<<setw(10)<<"Assignment"<<setw(10)<<"Midterm"<<setw(10)<<"Lab"<<setw(10)<<"Project"<<setw(10)<<"Total"<<setw(10)<<"Remaining"<<endl;
	while(!inputFile.eof()){
		getline(inputFile, name, ',');
		inputFile.ignore(1,',');
		inputFile>>quiz;
		inputFile.ignore(1,',');
		inputFile>>assignment;
		inputFile.ignore(1,',');
		inputFile>>midterm;
		inputFile.ignore(1,',');
		inputFile>>lab;
		inputFile.ignore(1,',');
		inputFile>>project;
		inputFile.ignore(1,',');
		
		quiz=quiz/100.0*5.0;
		assignment=assignment/100.0*10.0;
		midterm=midterm/100.0*15.0;
		lab=lab/100.0*5.0;
		total=quiz+assignment+midterm+lab+project;
		remaining= 80-total;
		
		outputFile<<setw(20)<<name<<setw(10)<<quiz<<setw(10)<<assignment<<setw(10)<<midterm<<setw(10)<<lab<<setw(10)<<project<<setw(10)<<total<<setw(10)<<remaining<<endl;
	}
	inputFile.close();
	outputFile.close();
	
	system("notepad outCarryMark.txt");
	return 0;
}
