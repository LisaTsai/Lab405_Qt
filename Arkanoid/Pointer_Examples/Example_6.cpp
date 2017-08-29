#include <iostream>
#include <new>

using namespace std;

void main()
{
	int numgrades, i;

	cout << "Enter the number of grades to be processed: ";
	cin >> numgrades;

	int *grades = new int[numgrades];          // create the array

	for (i = 0; i < numgrades; i++)
	{
		cout << "  Enter a grade: ";
		cin >> grades[i];
	}
	cout << "\nAn array was created for " << numgrades << " integers\n";
	cout << " The value stored in the array are:";
	for (i = 0; i < numgrades; i++)
		cout << "\n   " << grades[i]; // *(grades + i) could also be used
	cout << endl;

	delete[] grades; // return the memory storage 
	
	system("pause");
}