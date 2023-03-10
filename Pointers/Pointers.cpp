// Pointers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#define POINTERS_BASICS

int main()
{
    setlocale(LC_ALL, "rus");
#ifdef POINTERS_BASICS
    int a = 2;
    int* ptr_a = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << ptr_a << endl;
    cout << *ptr_a << endl;
    int* ptr_b;
    int b = 3;
    ptr_b = &b;
#endif
    const int n = 5;
    int arr[n] = { 3,5,8,13,21 };
    cout << arr << endl;
    cout << *arr << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "\t";
    }
    cout << endl;
}

