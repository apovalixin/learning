#define _USE_MATH_DEFINES
#define M_PI

#include <iostream>
#include <cmath>



using namespace std;

int main(){

	setlocale(LC_ALL, "ru");

	double x, y, dx, dy;

	char arr[29][59];

	dx = M_PI / 10;

	for (int i = 0; i < 20; i++)
	{
		
		y = sin(i*dx);

		cout << y << " ";
	}

	cout << endl;

	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 59; j++)
		{

			arr[i][j] = ' ';
		}
	}

	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 59; j++)
		{
			arr[14][j] = '*';
			arr[i][0] = '*';

			if (sin(j * dx) ==dy)
			{
				arr[][j] = '*';
			}

			cout << arr[i][j];
		}
		cout << endl;
	}




	return 0;
}