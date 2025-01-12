/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double area, radius;
	
	cout<<"This program calculates the area of a circle.\n";
	cout<<"What is the radius of the cicle? ";
	cin>>radius;
	
	area=3.14159* pow(radius,2.0);
	
	cout<<"The area is "<<area<<endl;
//	system("pause");
	
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num1, num2, result;
	
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
	if((num1<0) || (num2<0))
		cout<<"negative numbers/s";
	else
		result= sqrt(num1 +num2);
		cout<<"The square root of "<<num1+num2<<" is "<<result;
	
	return 0;	
}

#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char input;
	
	cout<<"Enter any character: ";
	cin.get(input);
	
	if(isalpha(input)){
		cout.put(input);
		cout<<"\nIt is an alphabet";
	}
	if (isdigit(input))
		cout<<"\nIt is a digit";
	if(islower(input))
		cout<<"\nThe letter is a lowercase";
	if (isupper(input))
		cout<<"\nThe letter entered is uppercase";

	return 0;
	}
	
#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char ch;
	
	cout<<"Enter any character: ";
	cin>>ch;
	
	if(isdigit(ch))
		cout<<"digit";
	else if(ispunct(ch))
		cout<<"special charater";
	else 
		cout<<"Letter";

	return 0;
}

#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char input[15];
	
	cout<<"Enter a name: ";
	cin>>input;
	
	for(int i=0; input[i]!= '\0';i++)
		input[i]= toupper(input[i]);
	cout<<"The name in uppercase: "<<input;
	
	return 0;
}

#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char input[15];
	
	cout<<"Enter a name: ";
	cin.getline(input, 15);
	
	for(int i=0; input[i]!= '\0';i++)
		input[i]= toupper(input[i]);
	cout<<"The name in uppercase: "<<input;
	
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char reply;
	char garment[]= "overcoat";
	cout<<"Is it raining outside?";
	cin>> reply;
	
	if(reply=='y')
		strcpy(garment, "raincoat");
		
	cout<<"before you go out today take your "<<garment;
	return 0;
	
}

#include <iostream>
using namespace std;
void displayMessage(){
	cout<<"Hello from the function message.\n";
}

int main(){
	cout<<"Hello from the main.\n";
	displayMessage();
	cout<<"Back int he function main again.\n";
	
	return 0;                                                                                                                                                                                                      
}

#include<iostream>
using namespace std;
void printhi(int);

int main(){
	int n;
	cout<<"Enter a value for n: ";
	cin>>n;
	printhi(n);
	cout<<"Tested\n";
	return 0;
	
}
void printhi(int n){
	int i;
	for(i=0; i<n; i++)
	cout<<"Hi\n";
}

#include <iostream>
using namespace std;
void showDouble(int);

int main(){
	int num;
	for(num=0; num<10; num++)
	showDouble(num);
	system("pause");
	return 0;
}
void showDouble(int value){
	cout<<value <<"\t";
	cout<< (value * 2)<<endl;
}

#include <iostream>
using namespace std;

void f (int n){
	cout<<"Inside f(int), the value of the parameter is "
	<<n <<endl;
	n+=37;
	cout<<"Inside f(int), the modified parameter is now "
	<<n << endl;}
	
	int main(){
		int m=612;
		
		cout<<"The integer m="<<m <<endl;
		cout<<"Calling f(m)...."<<endl;
		f(m);
		cout<<"The integer m= "<<m << endl;
		return 0;
	}
	
#include <iostream>
using namespace std;

bool isEven(int);

int main(){
	int val;
	
	cout<<"Enter an integer and i will tell u ";
	cout<<"if it is even or odd: ";
	cin>>val;
	
	if(isEven(val))
		cout<<val<<" is even.\n";
	else
		cout<<val<<" is odd.\n";
	return 0;
}

bool isEven(int number){
	bool status;
	
	if(number%2)
		status= false;
	else 
		status= true;
	return status;
}

#include <iostream>
using namespace std;
int main(){
	int code;
	
	cout<<"Enter code: ";
	cin>>code;
	
	switch(code){
		case 1: cout<<"Special"<<endl;
				break;
		case 2: 
		case 4: cout<<"Even";
				break;
		default:cout<<"Akward";
				break;
	}
return 0;
}*/

#include <iostream>
using namespace std;
int main(){
	double speed, hours, distance;
	
	cout<<"Enter speed: ";
	cin>> speed;
	
	while(speed<0){
		cout<<"\nPlease enter a non-negative number: ";
		cin>>speed;
	}
	cout<<"\nHow many hours does it travelled: ";
	cin>>distance;
}
	while(hours <1){
		cout<<"Please enter a number that is greater than 1: ";
		cin>>hours;
	}
	cout<<"Hour\t Distance travveled in km"<<endl;
	cout<<"------------------------------------------"<<endl;

	for(int i=1; i<=hour; i++){
		distance= speed*i;
		cout<<i<<"\t"<<distance;
}

return 0;
}
