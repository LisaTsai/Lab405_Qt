#include <iostream>
using namespace std;

void main()
{
	int *numAddr;              // declare a pointer to an int
	int miles, dist;           // declare two integer variables

	dist = 158;                // store the number 158 in dist
	miles = 22;                // store the number 22 in miles
	numAddr = &miles;          // store the address of miles in numAddr

	cout << "The address stored in numAddr is " << numAddr << endl;
	cout << "The value being accessed is " << *numAddr << "\n\n";

	numAddr = &dist;
	cout << "The address stored in numAddr is " << numAddr << endl;
	cout << "The value being accessed is " << *numAddr << endl;

	system("pause");
}