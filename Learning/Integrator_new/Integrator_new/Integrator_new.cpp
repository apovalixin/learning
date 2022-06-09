#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int size_x = 5, size_y = 5;
	float S = 0, Sum = 0;

	int* x = new int[size_x] {};
	int* y = new int[size_y]{};

	for (int i = 0; i < 6; i++)
	{
		cin>>x[i];
		cin>>y[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cout << x[i];
		cout << y[i] << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		S = 1.0 * (x[i + 1] - x[i]) * (y[i] + y[i + 1])/2;
		cout << S << endl;
		Sum += S;
	}

	cout << Sum << endl;
}


