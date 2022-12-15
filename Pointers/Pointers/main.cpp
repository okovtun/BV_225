#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;		//Pointer to 'a'
	cout << a << endl;	//значение переменной 'a'
	cout << &a << endl;	//взятие адреас переменной 'a' прямо при выводе
	cout << pa << endl;	//вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//разыменование указателя 'pa' и вывод на экран значения по адресу (переменной 'a')

	int* pb;	//просто объявление укзателя (без инициализации)
	int b = 3;
	pb = &b;	//инициализируем указатель после объявления

	//int - int
	//int* - указатель на int
	//double - double
	//double* - указатель на double  
#endif // POINTERS_BASICS

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

/*
----------------------------------------------------
& - Address-of operator  (Оператор взятия адреса)
* - Dereference operator (Оператор разыменования)
----------------------------------------------------
*/

/*
----------------------------------------------------
			Pointers arithmetic:
+
-
++
--

char*  + 1B = 1B;
short* + 1B = 2B;
int*   + 1B = 4B;
double*+ 1B = 8B;
----------------------------------------------------
*/