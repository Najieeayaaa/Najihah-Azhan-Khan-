#include <iostream>
using namespace std;
int main(){
	bool isSunny= true;
	bool hasUmbrella= false;
	
	cout<<"Weather check: ";
	cout<<"\nIs it sunny: "<<( isSunny ? "Yes" : "No");
	cout<<"\n Do you have an umbrella: "<<(hasUmbrella ? "Yes" : "No");
	
	if(isSunny)
		cout<<"\nIt's a sunny day. Enjoy the outdoor!";
		
	else
		cout<<"\nIt's not sunny. Maybe stay indoor.";
		
	bool goOutside = isSunny || hasUmbrella;
	cout<<"\nDecision to go outside: "<<(goOutside ? "Yes" : "No");
	
	bool stayInside = !goOutside;
	cout<<"\nDecision to stay inside: "<<(stayInside ? "Yes" : "No");
	
	bool isEqual= (isSunny ==hasUmbrella);
	cout<<"\nIs it sunny and do you have umbrella both the same? ";
	cout<< (isEqual ? "Yes" : "No");
	
	return 0;
	}

	

