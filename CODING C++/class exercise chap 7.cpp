/*#include <iostream>
using namespace std;
int main(){
	int a= 5, b=9;
	int *ptr= &a;
	*ptr= b;
	
	cout<< a<<endl;
	cout<<b;
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int a=1, b=2, *ptr= &b;
	a=*ptr;
	cout<<*ptr;
	
	return 0; 
}

#include <iostream>
using namespace std;
int main(){
	int a=1, b=2, c=5, *ptr= &c;
	b=*ptr;
	*ptr=a;
	cout<<a<<endl<<b<<endl<<c;
	
	return 0; 
}

#include <iostream>
using namespace std;
int main(){
	int a=1, b=2, c=5;
	int *ptr= &c;
	c=b;
	a= *ptr;
	cout<<a<<endl<<b<<endl<<c<<endl<<*ptr;
	
	return 0; 
}

#include <iostream>
using namespace std;
int main(){
	short vals []= {10, 20, 30, 40, 50};
	cout<<"The first element of the array is ";
	cout<<*(vals + 2)<<endl;
	
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main(){
	const int SIZE= 8;
	int set[SIZE]={5, 10, 15, 20, 25, 30, 35, 40};
	int *numPtr;
	int count;
	
	numPtr= set;
	
	cout<<"The numbers in the set are:\n";
	for(count=0; count<SIZE; count++){
		cout<<*numPtr<<" ";
		numPtr++;
	}
	cout<<"\nThe numbers in set backward are:\n";
	for(count=0; count<SIZE; count++){
		numPtr--;
		cout<<*numPtr<<" ";
	}
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	double x=15.6, y=10.2, *ptr_1=&y, *ptr_2=&x;
	
	*ptr_1= *ptr_2 + x;
	cout<<x<<endl<<y<<endl<<*ptr_1<<endl<<*ptr_2;
	
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int w=10, x=2, *ptr_2=&x;
	*ptr_2-=w;
	cout<<w<<endl<<x<<endl<<*ptr_2;
	
	return 0;
}

#include <iostream>
using namespace std;
void swap(int *x, int *y){
	int temp;
	temp= *x; 
	*x= *y;
	*y= temp;
}
	
int main(){
	int num1=2, num2= -3;
	cout<<"Initial value for num1 and num2 "<<num1<<" "<<num2<<endl;
	swap(&num1, &num2);
	cout<<"New value for num1 and num2 "<<num1<<" "<<num2;
	return 0;
}

#include <iostream>
using namespace std;
void getNumber(int *);
void doubleValue(int *);

int main(){
	int number;
	
	getNumber(&number);
	
	doubleValue(&number);
	cout<<"That value doubled is "<<number<<endl;
	
	return 0;
}

void getNumber(int *input){
	cout<<"Enter an integer number: ";
	cin>>*input;
}

void doubleValue(int *val){
	*val *=2;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double *sales,
	total= 0.0,
	average;
	int numDays,
	count;
	
	cout<<"How many days of sales figures do you wish";
	cout<<" to process";
	cin>>numDays;
	
	sales=new double[numDays];
	
	cout<<"Enter the sales figures below\n";
	for(count=0; count< numDays; count++){
		cout<<"Day"<<(count+1)<<":";
		cin>> sales[count];
	}
	for(count= 0; count< numDays; count++){
		total+= sales[count];	
		}
	average= total/ numDays;
	
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"\n\nTotal Sales: $"<<total<<endl;
	cout<<"Average Sales: $"<<average<<endl;
	
	delete[] sales;
	sales=0;
	
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	const int SIZE= 25;
	int *arrayptr;
	arrayptr= new int [SIZE];
	
	for(int i=0; i< SIZE; i++)
		arrayptr[i]=i *i;
	
	for( int i=0; i< SIZE; i++)
		cout<<*arrayptr + i<<endl;
		
	return 0;
}*/



