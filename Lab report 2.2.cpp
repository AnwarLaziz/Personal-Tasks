#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x,y;
	
	cout << "Enter number 1: ";
	cin >> x;
	cout << "Enter number 2: ";
	cin >> y;
	
	cout << endl << "The sum is: " << x+y;
	cout << endl << "The difference is: " << x-y;
	cout << endl << "The product is: " << x*y;
	cout << endl << "The division is: " << x/y;
	cout << endl << "the modulus: is " << fmod(x,y);
}
