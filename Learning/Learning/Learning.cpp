#include <iostream>

using namespace std;

void FillArr(int* const arr, int const size) {

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}

void ShowArr(int* const arr, int const size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}

void AddBack(int* &arr, int &size, int value) {

	int *NewArr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		NewArr[i] = arr[i];
	}

	NewArr[size] = value;
	
	size++;
	
	delete[] arr;
	
	arr=NewArr;
}

void AddHead(int*& arr, int& size, int value) {

	int* NewArr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		NewArr[i+1] = arr[i];
	}

	NewArr[0] = value;

	size++;

	delete[] arr;

	arr=NewArr;
}

void AddPlace(int*& arr, int& size, int place,  int value) {

	int* NewArr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		if (i < place)
		{
			NewArr[i] = arr[i];
		}

		if (i>=place)
		{
			NewArr[i + 1] = arr[i];
		}

	}

	NewArr[place] = value;

	size++;

	delete[] arr;

	arr=NewArr;
}

int main(){

	setlocale(LC_ALL, "ru");

	int size = 0,addback,addhead,addplace,place;

	cout << "Введите длину массива: ";
	cin >> size;

	int* arr = new int[size];

	FillArr(arr, size);
	ShowArr(arr, size);

	cout << "Введите значение, которое нужно добавить в конец массива: ";
	cin >> addback;

	AddBack(arr, size, addback);
	ShowArr(arr, size);

	cout << "Введите значение, которое нужно добавить в начало массива: ";
	cin >> addhead;

	AddHead(arr, size, addhead);
	ShowArr(arr, size);

	cout << "Введите значение, которое нужно добавить в массив: ";
	cin >> addplace;
	cout << "Введите порядковый номер элемента, куда добавить элемент: ";
	cin >> place;

	place--;

	AddPlace(arr, size, place, addplace);
	ShowArr(arr, size);

	delete[] arr;

	return 0;
}