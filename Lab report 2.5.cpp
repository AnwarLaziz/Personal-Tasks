#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	
	cout << "Enter any 4 digit number: ";
	cin >> n;
	
	int n1 = n%10;
	n = n/10;
	
	int n2 = n%10;
	n = n/10;
	
	int n3 = n%10;
	n = n/10;
	
	int n4 = n%10;
	n = n/10;
	
	cout << "Reverse of number is: " <<n1 <<n2 <<n3 <<n4 ;
	
	return 0;
}
