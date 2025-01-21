//Question 1
#include <iostream>
#include <string>
using namespace std;
string identifyTemperature(int Fahrenheit);
int conversionFahrenheit(int Celcius);
int main(){
	int Celcius;
	cout<<"Enter temperature or -999 to stop: ";
	cin>>Celcius;
	while(Celcius!=-999){
		int Fahrenheit=conversionFahrenheit(Celcius);
		string temperature=identifyTemperature(Fahrenheit);
		cout<<"Temperature in Fahrenheit: "<<Fahrenheit<<endl;
		cout<<"Catogery: "<<temperature<<endl;
		cout<<"Enter temperature or -999 to stop: ";
		cin>>Celcius;		
	}
cout<<"Program terminated.";	
return 0;
}
string identifyTemperature(int Fahrenheit){
	string temperature;
	if(Fahrenheit<50)
		temperature= "Cold";
	else if(Fahrenheit>77)
		temperature="Hot";
	else
		temperature="Moderate";
return temperature;		
}

int conversionFahrenheit(int Celcius){
	int Fahrenheit;
	Fahrenheit=Celcius*9/5+32;
	return Fahrenheit;
}*/

//Question 2 
#include <iostream>
#include <string>
using namespace std;

void displayBooksBorrowedByStudent(string books [][3], int studentID, int numBooks[], int numStudent){
	if(studentID < 1 || studentID > numStudents){
		cout<<"Invalid student ID."<<endl;;
		return;
	}
	cout<<"Books borrowed by student "<<studentID<<":"<<endl;
	
	for(int i=0; i<numBooks[studentID-1]; i++){
		cout<<"-"<<books[studentID-1][i];
	}
}

void calculateBorrowingStats (int numBooks[], int numStudents[], int &totalBooks, int &mostBooksStudent){
	int total=0;
	int max=0;
	for(int i=0; i< numStudents; i++){
		totalBooks=+numBooks[i];
		if(numBooks[i]> max){
			max=numBooks[i];
			mostBooksStudent= i+1;
		}
	}	
	
}

int main(){
	int numStudents, studentID, totalBooks = 0, mostBooksStudent = 0;
	const int maxStudents= 10;
	const int maxBooks= 3;
	
	cout<<"Enter the number of students (max 10):";
	cin>>numStudents;
	
	for (int i = 0; i<numStudents; i++) {
        cout << "Enter the number of books borrowed by Student " << i + 1 << " (max " << maxBooks << "): ";
        cin >> numBooks[i];

        while (numBooks[i]<0 || numBooks[i]>maxBooks) {
            cout << "Invalid number of books. Please re-enter (0 to " << maxBooks << "): ";
            cin >> numBooks[i];
        }

        for (int i = 0; i < numBooks[i]; i++) {
            cout << "Enter the title of book " << i+ 1 << ": ";
            getline(cin, books[i][i]);
        }
    }
    cout << "\nEnter a student ID to view their borrowed books: ";
    cin >> studentID;
    displayBooksBorrowedByStudent(books, studentID, numBooks, numStudents);

    calculateBorrowingStats(numBooks, numStudents, totalBooks, mostBooksStudent);

    cout << "\nTotal books borrowed by all students: " << totalBooks << endl;
    cout << "Student who borrowed the most books: Student " << mostBooksStudent << endl;

    return 0;
	
}
