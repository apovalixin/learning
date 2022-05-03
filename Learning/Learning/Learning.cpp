#include <iostream>

using namespace std;

void FillArr(int* const arr, const int size) {
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArr(int* const arr, const int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int *& arr, int &size, const int value) {

	int *newArr = new int[size + 1];
	
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	newArr[size] = value;

	size++;

	delete[] arr;

	arr = newArr;
}

void pop_back(int *&arr, int &size) {

	size--;

	int *newArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	delete[] arr;

	arr = newArr;
}

void push_ahead(int *&arr, int &size, const int value) {

	int* newArr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		newArr[i+1] = arr[i];
	}

	newArr[0] = value;

	size++;

	delete[] arr;

	arr = newArr;
}

void push_middle(int*& arr, int& size, const int value) {

	int* newArr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		if (i < 5) {
		
			newArr[i] = arr[i];
		}

		if (i >= 5) {
			newArr[i+1] = arr[i];
		}
	}

	newArr[5] = value;

	size++;

	delete[] arr;

	arr = newArr;
}

int main(){

	setlocale(LC_ALL, "ru");

	int size = 10;
	int addback, addhead, addmiddle;
	int *arr = new int[size];

	FillArr(arr, size);
	ShowArr(arr, size);

	cout << "Adding value back: ";
	cin >> addback;

	push_back(arr, size, addback);
	ShowArr(arr, size);

	pop_back(arr, size);
	ShowArr(arr, size);

	cout << "Adding value ahead: ";
	cin >> addhead;

	push_ahead(arr, size, addhead);
	ShowArr(arr, size);

	cout << "Adding value middle (5-th element): ";
	cin >> addmiddle;

	push_middle(arr, size, addmiddle);
	ShowArr(arr, size);

	delete[] arr;

	return 0;
}