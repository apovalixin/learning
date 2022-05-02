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

int main(){

	setlocale(LC_ALL, "ru");

	int size = 5;
	int addval;
	int *arr = new int[size];

	FillArr(arr, size);

	ShowArr(arr, size);

	cout << "Adding value: ";
	cin >> addval;
	

	push_back(arr, size, addval);

	ShowArr(arr, size);

	delete[] arr;

	return 0;
}