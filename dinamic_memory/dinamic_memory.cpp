// dinamic_memory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void FillRand(int* arr, int n);
void PrintArr(int* arr, int n);


int main()
{
    setlocale(LC_ALL,"rus");
    srand(time(NULL));
    int n;
    cout << "Введите размер массива: "; cin >> n;
    int* arr = new int[n];
    FillRand(arr, n);
    PrintArr(arr, n);
    int value;
    cout << "Введите значение добавляемого элемента: "; cin >> value;
    int* arr1 = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    delete[]arr;
    arr = arr1;
    arr1 = nullptr;
    arr[n] = value;
    n++;
    PrintArr(arr, n);

    delete[]arr;

}

void FillRand(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = rand() % 100;

    }

}

void PrintArr(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

    }
}
