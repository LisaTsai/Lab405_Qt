#include <iostream>
using namespace std;

void main()
{
	double total = 20.5;    // declare an initialize total
	double& sum = total;    // declare another name for total 

	cout << "sum = " << sum << endl;
	sum = 18.6;             // this changes the value in total
	cout << "total = " << total << endl;

	system("pause");
}