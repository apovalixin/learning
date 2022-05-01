#include <iostream>
#include <ctime>

using namespace std;

void foo(int* pa, int* pb, int a, int b) {

	(*pa) = b;
	(*pb) = a;


}

void main() {

	int a = 5, b = 6;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	foo(&a, &b, a, b);

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	cout << "";
}