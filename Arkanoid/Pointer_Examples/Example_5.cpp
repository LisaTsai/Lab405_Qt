#include <iostream>

using namespace std;

void main()
{
	const int ARRAYSIZE = 5;

	int grade[ARRAYSIZE] = { 10, 20, 30, 40, 50 };

	for(int i = 0; i < ARRAYSIZE; i++)
	{
		cout << grade[i] << " " << *(grade + i) << endl;
	}
	system("pause");
}