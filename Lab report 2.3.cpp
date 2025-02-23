#include <iostream>

using namespace std;

int main()
{
	double G = 6.674e-11; 
    double m1, m2, r, F;

    cout << "Mass of first object (kg): ";
    cin >> m1;

    cout << "Mass of second object (kg): ";
    cin >> m2;

    cout << "Distance between the objects (m): ";
    cin >> r;

    F = (G * m1 * m2) / (r * r);
    cout << endl << "Gravitational Force is: " << F << " N" << endl;

    return 0;
}
