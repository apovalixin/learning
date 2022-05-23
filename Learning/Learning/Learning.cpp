#include <iostream>

using namespace std;

int main(){

	setlocale(LC_ALL, "ru");

	char arr[29][59] = {};

		for (int i = 0; i < 29; i++)
		{
			for (int j = 0; j < 59; j++)
			{
				arr[i][j] = ' ';
			}
		}

		for (int i = 0; i < 14; i++)
		{
			for (int j = 0; j < 59; j++)
			{
				if (sin(j)==i)
				{
					arr[i][j] = '*';
				}

			}
		}

		for (int i = 0; i < 29; i++)
		{
			for (int j = 0; j < 59; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}



	return 0;
}