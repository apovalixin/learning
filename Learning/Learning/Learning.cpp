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
}


int main(){

	setlocale(LC_ALL, "ru");

	int size = 10;
	int *arr1=new int[size];
	int *arr2 = new int[size];

	FillArr(arr1,size);
	FillArr(arr2, size);

	cout << "1 array: ";
	ShowArr(arr1, size);
	cout << endl;
	cout << "2 array: ";
	ShowArr(arr2,size);

	cout << endl;

	cout << "/////////////////////////////////////" << endl;

	arr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}

	cout << "1 array: ";
	ShowArr(arr1, size);
	cout << endl;
	cout << "2 array: ";
	ShowArr(arr2, size);


	delete[] arr1;
	delete[] arr2;

	return 0;
}