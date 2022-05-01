#include <iostream>
#include <ctime>
#include <string>

using namespace std;

template<typename T>

void Swap(T &a, T &b) {

	T temp = a;

	a = b;
	b = temp;

}

void main(){

	string a="rrr", b ="HHH";

	cout << "a= " << a << endl;
	cout << "b= " << b << endl << endl;

	Swap(a, b);

	cout << "a= " << a << endl;
	cout << "b= " << b << endl << endl;

}