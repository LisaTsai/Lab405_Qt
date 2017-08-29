#include <iostream>

using namespace std;

void dispMat(int[], int);
// void dispMat(int*, int);

void main()
{
	const int NUMPTS = 5;
	int nums[NUMPTS] = { 2, 18, 1, 27, 16 };

	dispMat(nums, NUMPTS);

	system("Pause");
}

void dispMat(int vals[], int numels)
//void dispMat(int *vals, int numels)
{
	int i;
	for (i = 0; i < numels; i++)
	{
		cout << vals[i] << " ";
	}
}