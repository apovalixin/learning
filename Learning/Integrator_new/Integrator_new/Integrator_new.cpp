#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int size_x = 5, size_y = 5;

	int* x = new int[size_x] {};
	int* y = new int[size_y]{};

	for (int i = 0; i < 5; i++)
	{
		cout << "Введите точку x" << endl;
		cin >> x[i];
		cout << "Введите точку y" << endl;
		cin >> y[i];
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << x[i];
		cout << y[i] << endl;
	}




}


