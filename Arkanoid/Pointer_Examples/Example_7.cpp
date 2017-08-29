#include <iostream>
#include <new>

using namespace std;

void main()
{
	int** a = new int*[2];
	for (int i = 0; i < 2; ++i)
	{
		a[i] = new int[3]; 
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			a[i][j] = 0;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 2; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
	system("pause");

}