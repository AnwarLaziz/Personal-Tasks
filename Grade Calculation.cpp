#include <iostream>
using namespace std;

int main()
{
	int marks;
	
	cout<<"Please enter your marks: ";
	cin>>marks;
	
	if (marks >= 73)
		cout<<"you got an A grade"<<endl;
	else if (marks >= 68)
		cout<<"you got an B+ grade"<<endl;
	else if (marks >= 63)
		cout<<"you got a B grade"<<endl;
	else if (marks >= 58)
		cout<<"you got a C+ grade"<<endl;
	else if (marks >= 52)
		cout<<"you got a C grade"<<endl;
	else if (marks >= 47)
		cout<<"you got a D+ grade"<<endl;
	else if (marks >= 41)
		cout<<"you got a D grade"<<endl;
	else
	    cout<<"you got an F"<<endl;
	
	
}

