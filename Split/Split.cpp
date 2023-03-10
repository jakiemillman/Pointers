//Split.cpp

#include <iostream>

using namespace std;

void PrintArray(int* Array, int size);
void SearchSize(int* array, int size, int& n, int& m);
void Split(int* array, int* arr1, int* arr2, int size);
void ComplitionArray(int* Array, int size);

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int const size = 10;
	int array[size];
	int n = 0, m = 0, j=0, k=0;
	ComplitionArray(array, size);
	SearchSize(array, size, n, m);
	PrintArray(array, size);
	int* arr1 = new int[n];
	int* arr2 = new int[m];
	Split(array, arr1, arr2, size);
	PrintArray(arr1, n);
	PrintArray(arr2, m);
	delete[]arr1;
	delete[]arr2;

}

void PrintArray(int* Array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<<Array[i]<<" ";

	}
	cout << endl;
}

void SearchSize(int* array, int size, int& n, int& m)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			n++;
		}
		else
		{
			m++;
		}
	}
}

void Split(int* array, int* arr1, int* arr2, int size)
{
	int j = 0, k = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			arr1[j] = array[i];
			j++;
		}
		else
		{
			arr2[k] = array[i];
			k++;
		}
	}
}

void ComplitionArray(int* Array, int size)
{
	for (int i = 0; i < size; i++)
	{
		Array[i] = rand() % 100;

	}
}
