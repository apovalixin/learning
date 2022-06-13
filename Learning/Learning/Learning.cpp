#include <iostream>
#include <cmath>

using namespace std;

void filling(int **arr,int rows,int cols) {

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
			if (arr[i][j]<10)
			{
				j--;
			}
		
		}
	}
}

void showing(int** arr, int rows, int cols) {

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void change(int** arr, int rows, int cols) {

	for (int i = 0; i < rows; i++)
	{
		int max, x, y;
		
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j]>=arr[i][0])
			{
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
		arr[x][y] = arr[i][0];
		arr[i][0] = max;
	}


}

int main(){

	setlocale(LC_ALL, "ru");
	
	int rows = 0, cols = 0;
	cout << "Введите число строк "; cin >> rows;
	cout << "Введите число столбцов "; cin >> cols;
	cout << endl;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	filling(arr, rows,cols);

	showing(arr, rows, cols);

	change(arr, rows, cols);

	showing(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}

	delete[] arr;

	return 0;
}
