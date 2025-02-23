#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	
	cout << "Enter value of X: ";
	cin >> x;
	cout << "Enter value of Y: ";
	cin >> y;
	
	z = x;
	x = y;
	y = z;
	
	cout <<endl << "Swapped value of X is: " << x <<endl;
	cout << "Swapped value of Y is: " << y;

	return 0;
}
