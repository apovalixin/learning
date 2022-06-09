#include <iostream>
#include <cmath>

using namespace std;

void memory(int& a) {

	double* p = new double[a];
};
void fill(int& a, double* p) {

	for (int i = 0; i < a; i++)
	{
		p[i] = rand() % 10;
	}
};
void show(int& a, double* p) {

	for (int i = 0; i < a; i++)
	{
		cout << p[i] << " ";
	}
};
void del(double* p) {

	delete[] p;
};

int main(){

	setlocale(LC_ALL, "ru");

	for (int i = 0; i < 10; i++)
	{
		int a = 0, Y = 0;
		cout << "Введите размерность массива ";
		cin >> a;
		double* p = new double[a];

		memory(a);
		fill(a, p);
		show(a, p);
		del(p);

		cout << endl << "Создадим новый массив? 1 or 0" << endl;;
		cin >> Y;

		if (Y)
		{
			continue;
		}
		else {

			break;
		}
	}


	return 0;
}