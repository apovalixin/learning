#include <iostream>
#include <cmath>

using namespace std;

void filling(int rows, int cols, int **arr) {

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int a = rand() % 50;
			if (a > 9)
			{
				arr[i][j] = a;
			}
			else
			{
				j--;
			}
		}
	}
}
void showing(int rows, int cols, int **arr) {

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){

	setlocale(LC_ALL, "ru");
	
	int rows=6, cols=8;
	cout << "Введите количество строк ";
	cin >> rows;
	cout << "Введите количество столбцов ";
	cin >> cols;

	int** arr = new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	filling(rows, cols, arr);
	showing(rows, cols, arr);

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}

	delete[] arr;

	return 0;
}
