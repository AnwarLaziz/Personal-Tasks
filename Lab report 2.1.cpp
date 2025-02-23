#include <iostream>

using namespace std;

int main()
{
	string address, name;
	int age;
	
	cout << "Enter your name: ";
	cin >> name;
	
	cout << "Enter age: ";
	cin >> age;
	
	cout << "Enter address: ";
	cin >> address;
	
	cout << endl << "Your details: " <<endl;
    cout << endl <<"Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
}
