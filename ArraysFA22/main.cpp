#include <iostream>

using namespace std;

int main()
{
	int x[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			x[i][j] = i;
		}
	}

	x[3][5] = 1;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}