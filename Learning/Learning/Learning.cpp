#include <iostream>
#include <ctime>

using namespace std;

int foo1(int a){

	a = 1;

	return a;
}

void foo2(int &a) {

	a = 2;
}

void foo3(int *a) {

	*a = 3;
}


void main() {

	int value = 5;

	cout << "value before = " << value << endl << endl;

	cout << "foo1   " << endl;
	cout << "value: " << foo1(value) << endl << endl;

	cout << "foo2   " << endl;
	foo2(value);
	cout << "value: " << value << endl << endl;

	cout << "foo3   " << endl;
	foo3(&value);
	cout << "value: " << value << endl << endl;
}