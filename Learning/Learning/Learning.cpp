#include <iostream>
#include <cmath>

using namespace std;

void change(int a, int* p) {

	for (int i = 0; i < a - 1; i++)
	{
		if (i % 2 == 0)
		{
			int b = p[i];
			p[i] = p[i + 1];
			p[i + 1] = b;
		}
		else {

			continue;
		}
	}
	cout << endl;
}

int main(){

	setlocale(LC_ALL, "ru");
	
	int a = 0;

	cout << "Введите длину массива ";
	cin >> a;

	// Giving data for array

	int* p = new int[a];

	// Filling array

	for (int i = 0; i < 12; i++)
	{
		p[i] = rand() % 10;
	}

	// Showing elements of array before changing

	for (int i = 0; i < a; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;

	// Changing elements

	change(a,p);

	// Showing elements of array after changing

	for (int i = 0; i < a; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;

	// Deleting giving data

	delete[] p;

	return 0;
}
