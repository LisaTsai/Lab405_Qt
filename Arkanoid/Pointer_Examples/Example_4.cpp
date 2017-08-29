#include <iostream>
using namespace std;

void main()
{
	int grade[5] = { 0 };
	cout << "The address of grade[3] is: " << &grade[3] << endl
		<< "The address of grade + 3 is : " << grade + 3 << endl;
	system("pause");
}