#include <iostream>
using namespace std;

void main()
{
	int grade[5] = {0};
	cout << "The address of grade is: " << grade << endl
	     << "The address of grade[0] is : " << &grade[0] << endl;
	system("pause");
}