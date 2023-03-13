// dinamic_memory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void FillRand(int* arr, int n);
void PrintArr(int* arr, int n);

int* push_back(int* arr, int& n, int value);
int* pop_back(int* arr, int& n);
int* push_front(int* arr, int& n, int value);
int* insert(int* arr, int& n, int value, int index);
int* pop_front(int* arr, int& n);
int* erase(int* arr, int& n, int index);


int main()
{
    setlocale(LC_ALL,"rus");
    srand(time(NULL));
    int n;
    int index = 0;
    cout << "Введите размер массива: "; cin >> n;
    int* arr = new int[n];
    FillRand(arr, n);
    PrintArr(arr, n);
    int value;
    cout << "Введите значение добавляемого элемента: "; cin >> value;
    arr = push_back(arr, n, value);
    PrintArr(arr, n);
    cout << endl;
    arr = pop_back(arr, n);
    PrintArr(arr, n);
    cout << endl;
    arr = push_front(arr, n, value);
    PrintArr(arr, n);
    cout << endl;
    arr = pop_front(arr, n);
    PrintArr(arr, n);
    cout << endl;
    cout << "Введите в какой элемент массива добавляем элемент: "; cin >> index;
    arr = insert(arr, n, value, index);
    PrintArr(arr, n);
    cout << endl;
    arr = erase(arr, n, index);
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

int* push_back(int* arr, int& n, int value)
{
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
    return arr;
}

int* pop_back(int* arr, int& n)
{
    int* arr1 = new int[--n];
    for (int i = 0; i < n; i++)arr1[i] = arr[i];
    delete[]arr;
    return arr1;
}

int* push_front(int* arr, int& n, int value)
{
    int* arr1 = new int[++n];
    for (int i = 1; i < n; i++)arr1[i] = arr[i-1];
    delete[]arr;
    arr1[0] = value;
    return arr1;
}

int* insert(int* arr, int& n, int value, int index)
{
    int* arr1 = new int[++n];
    for (int i = 0; i < n; i++)
    {
        if (i == index)arr1[i] = value;
        else if (i < index)arr1[i] = arr[i];
        else arr1[i] = arr[i - 1];
    }
    delete[]arr;
    return arr1;
}

int* pop_front(int* arr, int& n)
{
    int* arr1 = new int[--n];
    for (int i = 0; i < n; i++)arr1[i] = arr[i + 1];
    delete arr;
    return arr1;
}

int* erase(int* arr, int& n, int index)
{
    int* arr1 = new int[--n];
    for (int i = 0; i < n; i++)
    {
        if (i < index)arr1[i] = arr[i];
        else arr1[i] = arr[i + 1];
    }
    delete arr;
    return arr1;
}
