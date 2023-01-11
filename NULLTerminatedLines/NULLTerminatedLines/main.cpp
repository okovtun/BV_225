//NULLTerminatedLines - строки, заканчивающиеся нулем.
//NULL Terminator
#include<iostream>
#include<Windows.h>
using namespace std;

int string_length(const char str[]);
void to_upper(char str[]);
void to_lower(char str[]);
void shrink(char str[]);
bool is_palindrome(char str[]);

void main()
{
	setlocale(LC_ALL, "Rus");
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	/*char str[] = "Hello";
	cout << str << endl;
	cout << sizeof(str) << endl;*/

	cout << (int)'a' << endl;
	cout << (int)'A' << endl;
	cout << 'A' - 'a' << endl;

	const int n = 256;
	//char str[n] = "Хорошо        живет     на    свете     Винни    Пух";
	char str[n] = "Аргентина манит негра";
	cout << "Введите строку: ";
	SetConsoleCP(1251);
	//cin >> str;
	//cin.getline(str, n);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "Размер строки: " << strlen(str) << " символов\n";
	//to_lower(str);
	shrink(str);
	cout << str << endl;

	cout << "Строка " << (is_palindrome(str) ? "" : "НЕ ") << "палиндром" << endl;
}

int string_length(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		//if (str[i] >= 'a' && str[i] <= 'z')str[i] -= ' ';
		//if (str[i] >= 'а' && str[i] <= 'я')str[i] -= ' ';
		str[i] = toupper(str[i]);
	}
}
void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]);
	}
	//Функция tolower(char symbol) принимает символ, 
	//и если он является большой буквой, то возвращает такую же маленькую букву
}
void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i; str[j]; j++)str[j] = str[j + 1];
		}
	}
}
void remove_symbol(char str[], char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)str[j] = str[j + 1];
		}
	}
}
bool is_palindrome(char str[])
{
	to_lower(str);
	remove_symbol(str, ' ');
	int n = strlen(str);
	for (int i = 0; i < n / 2; i++)
	{
		if (str[i] != str[n - 1 - i])return false;
	}
	return true;
}