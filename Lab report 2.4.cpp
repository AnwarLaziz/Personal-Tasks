#include <iostream>

using namespace std;

int main() 
{
    int Total, H, M, S;

    cout << "Enter time in seconds: ";
    cin >> Total;

    H = Total / 3600;          
    M = (Total % 3600) / 60; 
    S = Total % 60;          

    cout << endl << "Time in HH:MM:SS format: ";
    cout << H << ":" << M << ":" << S << endl;

    return 0;
}

