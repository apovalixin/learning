#include <iostream>
#include <cmath>

using namespace std;

void new_matrix(int **arr,int rows,int cols) {

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

void deleting(int** arr, int rows) {

	for (int i = 0; i < rows; i++)
	{
		delete []arr;
	}
}

void showing(int **arr, int rows, int cols) {
	
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

int main(){

	setlocale(LC_ALL, "ru");
	
	int	rows1=0, cols1=0;
	int rows2=0, cols2=0;
	int rows3=0, cols3=0;

	cout << "Введите число строк первой матрицы ";	cin >> rows1;
	cout << "Введите число столбцов первой матрицы ";	cin >> cols1;
	cout << endl;

	cols2=rows1;
	rows2=cols1;
	rows3 = rows1;
	cols3 = cols2;
	
	int** arr1 = new int* [rows1];
	new_matrix(arr1, rows1,cols1);
	showing(arr1, rows1, cols1);

	int** arr2 = new int* [rows2];
	new_matrix(arr2, rows2, cols2);
	showing(arr2, rows2, cols2);

	int** arr3 = new int* [rows3];
	new_matrix(arr3, rows3, cols3);

	int sum=0;

	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols2+1; j++)
		{
				int a=arr1[i][j] * arr2[j][i];
				int b = b+a;
				arr3[i][0] = b;
		}
		for (int j = 1; j < cols2 + 1; j++)
		{
			int a = arr1[i][j-1] * arr2[j][i];
			int b = b + a;
			arr3[i][0] = b;
		}

	}


	showing(arr3, rows3, cols3);


	deleting(arr1, rows1);
	deleting(arr2, rows2);
	deleting(arr3, rows3);

	delete[]arr1;
	delete[]arr2;
	delete[]arr3;


	return 0;
}
