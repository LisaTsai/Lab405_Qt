#include <iostream>

using namespace std;

void swap(double *, double *);
void swap(double&, double&);

void main()
{
	double firstnum = 20.5, secnum = 6.25;

	cout << "The value stored in firstnum is: " << firstnum << endl;
	cout << "The value stored in secnum is: " << secnum << "\n\n";

	swap(firstnum, secnum);

	cout << "The value stored in firstnum is now: " << firstnum << endl;
	cout << "The value stored in secnum is now: " << secnum << "endl";

	system("pause");
}

void swap(double *num1Addr, double *num2Addr)
{
	double temp;

	temp = *num1Addr;
	*num1Addr = *num2Addr;
	*num2Addr = temp;
}

void swap(double &num1Addr, double &num2Addr)
{
	double temp;

	temp = num1Addr;
	num1Addr = num2Addr;
	num2Addr = temp;
}