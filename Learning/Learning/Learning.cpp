#include <iostream>
#include <ctime>

using namespace std;

void Swap(int *pa, int *pb) {
	
	int temp = *pa;
	
	*pa = *pb;
	*pb = temp;


}

void main() {

	int a = 5, b = 6;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	Swap(&a, &b);

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	cout << "";
}