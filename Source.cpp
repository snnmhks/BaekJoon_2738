#include <iostream>

using namespace std;

int main()
{
	int row = 0;
	int col = 0;
	cin >> row;
	cin >> col;

	int** MatrixA = new int*[row];
	int** MatrixB = new int*[row];
	for (int i = 0; i < row; i++)
	{
		MatrixA[i] = new int[col];
		MatrixB[i] = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> MatrixA[i][j];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> MatrixB[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << MatrixA[i][j] + MatrixB[i][j] << " ";
		}
		cout << endl;
	}
}