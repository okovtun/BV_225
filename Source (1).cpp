#include <iostream>
#include <string>
#include <math.h>
using namespace std;


const int ROWS = 10;
const int COLS = 5;
//intenger
long long array_sum(int arr[], int n);
int min_value(int arr[], int n);
int max_value(int arr[], int n);
int sort(int arr[], int n);
int unique_random(int arr[], int n, int predel);
void shift(int arr[], int n, int k, string w);
void print_array(int arr[], int n);;
void FillRand(int arr[], int n, int predel);
int search(int arr[], int n);

//float
float array_sum(float arr[], int n);
float min_value(float arr[], int n);
float max_value(float arr[], int n);
int sort(float arr[], int n);
int unique_random(float arr[], int n, int predel);
void shift(float arr[], int n, int k, string w);
void print_array(float arr[], int n);
void FillRand(float arr[], int n, int predel);
int search(float arr[], int n);

//double
double array_sum(double arr[], int n);
double min_value(double arr[], int n);
double max_value(double arr[], int n);
int sort(double arr[], int n);
int unique_random(double arr[], int n, int predel);
void shift(double arr[], int n, int k, string w);
void print_array(double arr[], int n);
void FillRand(double arr[], int n, int predel);
int search(double arr[], int n);

//char
int array_sum(char arr[], int n);
int min_value(char arr[], int n);
int max_value(char arr[], int n);
int sort(char arr[], int n);
int unique_random(char arr[], int n, int predel);
void shift(char arr[], int n, int k, string w);
void print_array(char arr[], int n);;
void FillRand(char arr[], int n, int predel);
int search(char arr[], int n);

//int_matrix
long long array_sum(int arr[ROWS][COLS], const int ROWS, const int COlS);
int min_value(int arr[ROWS][COLS], const int ROWS, const int COlS);
int max_value(int arr[ROWS][COLS], const int ROWS, const int COlS);
int sort(int arr[ROWS][COLS], const int ROWS, const int COlS);
int unique_random(int arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
void shift(int arr[ROWS][COLS], const int ROWS, const int COlS, int k, string w);
void print_array(int arr[ROWS][COLS], const int ROWS, const int COlS);;
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
int search(int arr[ROWS][COLS], const int ROWS, const int COlS);

//float_matrix
double array_sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
float min_value(float arr[ROWS][COLS], const int ROWS, const int COLS);
float max_value(float arr[ROWS][COLS], const int ROWS, const int COLS);
int sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
int unique_random(float arr[ROWS][COLS], const int ROWS, const int COLS,int predel);
void shift(float arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w);
void print_array(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int predel);
int search(float arr[ROWS][COLS], const int ROWS, const int COLS);

//double_matrix
double array_sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
double min_value(double arr[ROWS][COLS], const int ROWS, const int COLS);
double max_value(double arr[ROWS][COLS], const int ROWS, const int COLS);
int sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
int unique_random(double arr[ROWS][COLS], const int ROWS, const int COLS, int predel);
void shift(double arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w);
void print_array(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int predel);
int search(double arr[ROWS][COLS], const int ROWS, const int COLS);

//char_matrix
long long array_sum(char arr[ROWS][COLS], const int ROWS, const int COlS);
int min_value(char arr[ROWS][COLS], const int ROWS, const int COlS);
int max_value(char arr[ROWS][COLS], const int ROWS, const int COlS);
int sort(char arr[ROWS][COLS], const int ROWS, const int COlS);
int unique_random(char arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
void shift(char arr[ROWS][COLS], const int ROWS, const int COlS, int k, string w);
void print_array(char arr[ROWS][COLS], const int ROWS, const int COlS);;
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
int search(char arr[ROWS][COLS], const int ROWS, const int COlS);


//#define INT
//#define FLOAT
//#define DOUBLE
//#define CHAR
//#define INT_MATRIX
//#define FLOAT_MATRIX
//#define DOUBLE_MATRIX
//#define CHAR_MATRIX

int main() {
	srand(time(NULL));
#ifdef INT
	cout << "---------------------------------------------------------------|INT|----------------------------------------------------------------------------------" << endl;
	const int n = 10;
	int arr[n];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + 1;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //INT

#ifdef DOUBLE
	cout << "--------------------------------------------------------------|Double|--------------------------------------------------------------------------------" << endl;
	const int n = 10;
	double arr[n] = {};
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + (double)(rand() % 1000)/10000;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //DOUBLE

#ifdef FLOAT
	cout << "--------------------------------------------------------------|Float|--------------------------------------------------------------------------------" << endl;
	const int n = 10;
	float arr[n] = {};
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + (float)(rand() % 1000) / 10000;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //FLOAT

#ifdef CHAR
	cout << "--------------------------------------------------------------|CHAR|----------------------------------------------------------------------------------" << endl;
	const int n = 10;
	char arr[n];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 256;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //CHAR

#ifdef INT_MATRIX
	cout << "------------------------------------------------------------|MATRIX INT|------------------------------------------------------------------------------" << endl;
	int arr[ROWS][COLS];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w;
	int k; cout << "Enter on how many move array: "; cin >> k;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			arr[i][j] = rand() % (limit + 1);
	}
	print_array(arr, ROWS, COLS); cout << endl;
	cout << "Array_sum = " << array_sum(arr, ROWS, COLS) << endl;
	cout << "Minimal value = " << min_value(arr, ROWS, COLS) << endl;
	cout << "Maximum value = " << max_value(arr, ROWS, COLS) << endl;
	int counter = search(arr, ROWS, COLS);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	cout << "Shift:         ";  shift(arr, ROWS, COLS, k, w); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;
#endif //INT_MATRIX

#ifdef FLOAT_MATRIX
	cout << "------------------------------------------------------------|MATRIX FLOAT|----------------------------------------------------------------------------" << endl;
	float arr[ROWS][COLS];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) 
			arr[i][j] = (float)(rand() % (limit + 1)) + (rand() % 10) / 100.0;
	}
	print_array(arr, ROWS, COLS); cout << endl;
	cout << "Array_sum = " << array_sum(arr, ROWS, COLS) << endl;
	cout << "Minimal value = " << min_value(arr, ROWS, COLS) << endl;
	cout << "Maximum value = " << max_value(arr, ROWS, COLS) << endl;
	int counter = search(arr, ROWS, COLS);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	//cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;
#endif //FLOAT_MATRIX

#ifdef DOUBLE_MATRIX
	cout << "-----------------------------------------------------------|MATRIX DOUBLE|----------------------------------------------------------------------------" << endl;
	double arr[ROWS][COLS];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			double random = rand() % limit;
			for (int k = 0; k < 50; k++)
				random += (rand() % 10) / pow(10, k);
			arr[i][j] = random;
		}	

	}
	print_array(arr, ROWS, COLS); cout << endl;
	cout << "Array_sum = " << array_sum(arr, ROWS, COLS) << endl;
	cout << "Minimal value = " << min_value(arr, ROWS, COLS) << endl;
	cout << "Maximum value = " << max_value(arr, ROWS, COLS) << endl;
	int counter = search(arr, ROWS, COLS);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	//cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;
#endif //DOUBLE_MATRIX

#ifdef CHAR_MATRIX
	cout << "------------------------------------------------------------|MATRIX CHAR|-----------------------------------------------------------------------------" << endl;
	char arr[ROWS][COLS];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			arr[i][j] = rand() % (limit + 1);
	}
	print_array(arr, ROWS, COLS); cout << endl;
	cout << "Array_sum = " << array_sum(arr, ROWS, COLS) << endl;
	cout << "Minimal value = " << min_value(arr, ROWS, COLS) << endl;
	cout << "Maximum value = " << max_value(arr, ROWS, COLS) << endl;
	int counter = search(arr, ROWS, COLS);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	//cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;

#endif //CHAR_MATRIX
}

//intenger-realisation
long long array_sum(int arr[], int n) {
	long long amount = 0;
	for (int i = 0; i < n; i++)
		amount += arr[i];
	return amount;
}

int min_value(int arr[], int n) {
	int minn = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < minn) minn = arr[i];
	}
	return minn;
}

int max_value(int arr[], int n) {
	int maxx = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxx) maxx = arr[i];
	}
	return maxx;
}

int sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	print_array(arr, n);
	return 0;
}


int unique_random(int arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = rand() % predel;
			flag = true;
			for (int j = 0; j < i; j++) {
				if (arr[i] == arr[j])
				{
					flag = false;
					break;
				}
			}
		} while (flag == false);
	}
	print_array(arr, n);
	return 0;
}

void shift(int arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	int* new_array = new int[n];
	for (int i = 0; i < n; i++) {
		if (i + k != 0)
			new_array[i] = arr[(i + k) % n];
		else new_array[n - 1] = arr[0];
	}
	print_array(new_array, n);
	delete[] new_array;

}

void print_array(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int search(int arr[], int n) {
	cout << "Repiats: ";
	int* povt = new int[n];
	bool flag = true;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		int a = arr[i];
		flag = true;
		for (int j = 0; j < n; j++) {
			if (a == povt[j]) {
				flag = false;
				counter += 1;
				cout << a << "\t";
				break;
			}
		}
		if (flag == true) povt[i] = a;
	}
	cout << endl;

	return counter;
}

void FillRand(int arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (predel + 1);
		cout << arr[i] << "\t";
	}
	cout << endl; "Int worked;";
}

//double-reliasation

double array_sum(double arr[], int n) {
	double amount = 0;
	for (int i = 0; i < n; i++)
		amount += arr[i];
	return amount;
}

double min_value(double arr[], int n) {
	double minn = ULLONG_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < minn) minn = arr[i];
	}
	return minn;
}

double max_value(double arr[], int n) {
	double maxx = LLONG_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxx) maxx = arr[i];
	}
	return maxx;
}

int sort(double arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				double x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	print_array(arr, n);
	return 0;
}

int unique_random(double arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = rand() % predel + (double)(rand() % 10000) /10000;
			flag = true;
			for (int j = 0; j < i; j++) {
				if (arr[i] == arr[j])
				{
					flag = false;
					break;
				}
			}
		} while (flag == false);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	return 0;
}

void shift(double arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	double* new_array = new double[n];
	for (int i = 0; i < n; i++) {
		if (i + k != 0)
			new_array[i] = arr[(i + k) % n];
		else new_array[n - 1] = arr[0];
	}
	for (int i = 0; i < n; i++) {
		cout << new_array[i] << "\t";
	}
	delete[] new_array;

}

void print_array(double arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int search(double arr[], int n) {
	cout << "Repiats: ";
	double* povt = new double[n];
	bool flag = true;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		double a = arr[i];
		flag = true;
		for (int j = 0; j < n; j++) {
			if (a == povt[j]) {
				flag = false;
				counter += 1;
				cout << a << "\t";
				break;
			}
		}
		if (flag == true) povt[i] = a;
	}
	cout << endl;

	return counter;
}

void FillRand(double arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		double result = rand() % predel;
		for (int j = 4; j < 100; j++)
			result += (double)(rand() % 10000) / pow(10, j);
		arr[i] = result;
		cout << arr[i] << "\t";
	}
	cout << endl << "Double worked;";
}


//float-reliasation

float array_sum(float arr[], int n) {
	float amount = 0;
	for (int i = 0; i < n; i++)
		amount += arr[i];
	return amount;
}

float min_value(float arr[], int n) {
	float minn = ULLONG_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < minn) minn = arr[i];
	}
	return minn;
}

float max_value(float arr[], int n) {
	float maxx = LLONG_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxx) maxx = arr[i];
	}
	return maxx;
}

int sort(float arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				float x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	return 0;
}

int unique_random(float arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = rand() % predel + (float)(rand() % 1000) / 1000;
			flag = true;
			for (int j = 0; j < i; j++) {
				if (arr[i] == arr[j])
				{
					flag = false;
					break;
				}
			}
		} while (flag == false);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	return 0;
}

void shift(float arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	float* new_array = new float[n];
	for (int i = 0; i < n; i++) {
		if (i + k != 0)
			new_array[i] = arr[(i + k) % n];
		else new_array[n - 1] = arr[0];
	}
	for (int i = 0; i < n; i++) {
		cout << new_array[i] << "\t";
	}
	delete[] new_array;

}

void print_array(float arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int search(float arr[], int n) {
	cout << "Repiats: ";
	float* povt = new float[n];
	bool flag = true;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		float a = arr[i];
		flag = true;
		for (int j = 0; j < n; j++) {
			if (a == povt[j]) {
				flag = false;
				counter += 1;
				cout << a << "\t";
				break;
			}
		}
		if (flag == true) povt[i] = a;
	}
	cout << endl;

	return counter;
}

void FillRand(float arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (predel + 1) + (float)(rand() % 10000) / 10000;
		cout << arr[i] << "\t";
	}
	cout << endl << "Float worked;";
}


//char-relesation
int array_sum(char arr[], int n) {
	int amount = 0;
	for (int i = 0; i < n; i++)
		amount += (int)arr[i];
	return amount;
}

int min_value(char arr[], int n) {
	float minn = ULLONG_MAX;
	for (int i = 0; i < n; i++) {
		if ((int)arr[i] < minn) minn = (int)arr[i];
	}
	return minn;
}

int max_value(char arr[], int n) {
	int maxx = LLONG_MIN;
	for (int i = 0; i < n; i++) {
		if ((int)arr[i] > maxx) maxx = (int)arr[i];
	}
	return maxx;
}

int sort(char arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				char x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	return 0;
}

int unique_random(char arr[], int n, int predel) {
	if (predel > 256) predel = 256;
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = (char)(rand() % predel);
			flag = true;
			for (int j = 0; j < i; j++) {
				if (arr[i] == arr[j])
				{
					flag = false;
					break;
				}
			}
		} while (flag == false);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	return 0;
}

void shift(char arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	char* new_array = new char[n];
	for (int i = 0; i < n; i++) {
		if (i + k != 0)
			new_array[i] = arr[(i + k) % n];
		else new_array[n - 1] = arr[0];
	}
	for (int i = 0; i < n; i++) {
		cout << new_array[i] << "\t";
	}
	delete[] new_array;

}

void print_array(char arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int search(char arr[], int n) {
	cout << "Repiats: ";
	char* povt = new char[n];
	bool flag = true;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		float a = arr[i];
		flag = true;
		for (int j = 0; j < n; j++) {
			if (a == povt[j]) {
				flag = false;
				counter += 1;
				cout << a << "\t";
				break;
			}
		}
		if (flag == true) povt[i] = a;
	}
	cout << endl;

	return counter;
}

void FillRand(char arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		arr[i] = char((rand() % predel) % 256);
		cout << arr[i] << "\t";
	}
	cout << endl << "Char worked;";
}


//int_matrix-realisation


long long array_sum(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	long long amount = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			amount += arr[i][j];
	}
	return amount;
}

int min_value(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int minn = INT_MAX;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < minn) minn = arr[i][j];
	}
	return minn;
}

int max_value(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int maxx = INT_MIN;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > maxx) maxx = arr[i][j];
	}
	return maxx;
}

int sort(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int temp; 
	for (int i = 0; i <ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int a = 0; a < ROWS; a++) {
				for (int b = 0; b < COLS; b++) {
					if (arr[a][b] > arr[i][j])
					{
						temp = arr[a][b];
						arr[a][b] = arr[i][j];
						arr[i][j] = temp;
					}
				}
			}
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;

}


int unique_random(int arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	bool flag;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			flag = true;
			int random = rand() % predel;
			for (int k = 0; k < ROWS; k++) {
				for (int x = 0; x < COLS; x++) {
					if (random == arr[k][x])
						flag = false;
				}
			}
			while (flag == false) {
				flag = true;
				int random = rand() % predel;
				for (int k = 0; k < ROWS; k++) {
					for (int x = 0; x < COLS; x++) {
						if (random == arr[k][x])
							flag = false;
					}
				}
			}
			arr[i][j] = random;
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;
}

void shift(int arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w) {
	int temp;
	for (int i = 0; i < k; i++) {
		temp = arr[0][0];
		for (int j = 0; j < ROWS; j++) {
			for (int a = 0; a < COLS; a++) {
				arr[j][a] = arr[j][a + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = temp;
	}
	cout << endl;
	print_array(arr, ROWS, COLS); 
}

void print_array(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

int search(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Repiats: ";
	int counter = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i + 1; k < ROWS; k++) {
				for (int x = j + 1; x < COLS; x++) {
					if (arr[k][x] == arr[i][j]) {
						counter += 1; 
						cout << arr[i][j] << "\t";
					}
				}
			}
		};
	}
	cout << endl;

	return counter;
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % (predel + 1);
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl; "Int worked;";
}

//float_matrix

double array_sum(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	double amount = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			amount += arr[i][j];
	}
	return amount;
}

float min_value(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	float minn = INT_MAX;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < minn) minn = arr[i][j];
	}
	return minn;
}

float max_value(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	float maxx = INT_MIN;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > maxx) maxx = arr[i][j];
	}
	return maxx;
}

int sort(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	float temp;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int a = 0; a < ROWS; a++) {
				for (int b = 0; b < COLS; b++) {
					if (arr[a][b] > arr[i][j])
					{
						temp = arr[a][b];
						arr[a][b] = arr[i][j];
						arr[i][j] = temp;
					}
				}
			}
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;

}


int unique_random(float arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	bool flag;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			flag = true;
			float random = rand() % predel + (rand() % 10) / 100.0;
			for (int k = 0; k < ROWS; k++) {
				for (int x = 0; x < COLS; x++) {
					if (random == arr[k][x])
						flag = false;
				}
			}
			while (flag == false) {
				flag = true;
				float random = rand() % predel + (rand() % 10) / 100.0;
				for (int k = 0; k < ROWS; k++) {
					for (int x = 0; x < COLS; x++) {
						if (random == arr[k][x])
							flag = false;
					}
				}
			}
			arr[i][j] = random;
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;
}

void shift(float arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w) {
	float temp;
	for (int i = 0; i < k; i++) {
		temp = arr[0][0];
		for (int j = 0; j < ROWS; j++) {
			for (int a = 0; a < COLS; a++) {
				arr[j][a] = arr[j][a + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = temp;
	}
	cout << endl;
	print_array(arr, ROWS, COLS);
}

void print_array(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

int search(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Repiats: ";
	int counter = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i + 1; k < ROWS; k++) {
				for (int x = j + 1; x < COLS; x++) {
					if (arr[k][x] == arr[i][j]) {
						counter += 1;
						cout << arr[i][j] << "\t";
					}
				}
			}
		};
	}
	cout << endl;

	return counter;
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % (predel + 1) + (rand() % 10) / 100.0;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << "Float worked;";
}

//double_matrix

double array_sum(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double amount = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			amount += arr[i][j];
	}
	return amount;
}

double min_value(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double minn = INT_MAX;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < minn) minn = arr[i][j];
	}
	return minn;
}

double max_value(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	float maxx = INT_MIN;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > maxx) maxx = arr[i][j];
	}
	return maxx;
}

int sort(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double temp;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int a = 0; a < ROWS; a++) {
				for (int b = 0; b < COLS; b++) {
					if (arr[a][b] > arr[i][j])
					{
						temp = arr[a][b];
						arr[a][b] = arr[i][j];
						arr[i][j] = temp;
					}
				}
			}
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;

}


int unique_random(double arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	bool flag;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			flag = true;
			double random = rand() % predel + (rand() % 10) / 100.0;
			for (int k = 0; k < ROWS; k++) {
				for (int x = 0; x < COLS; x++) {
					if (random == arr[k][x])
						flag = false;
				}
			}
			while (flag == false) {
				flag = true;
				random = rand() % predel + (rand() % 10) / 100.0;
				for (int k = 0; k < ROWS; k++) {
					for (int x = 0; x < COLS; x++) {
						if (random == arr[k][x])
							flag = false;
					}
				}
			}
			arr[i][j] = random;
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;
}

void shift(double arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w) {
	double temp;
	for (int i = 0; i < k; i++) {
		temp = arr[0][0];
		for (int j = 0; j < ROWS; j++) {
			for (int a = 0; a < COLS; a++) {
				arr[j][a] = arr[j][a + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = temp;
	}
	cout << endl;
	print_array(arr, ROWS, COLS);
}

void print_array(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

int search(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Repiats: ";
	int counter = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i + 1; k < ROWS; k++) {
				for (int x = j + 1; x < COLS; x++) {
					if (arr[k][x] == arr[i][j]) {
						counter += 1;
						cout << arr[i][j] << "\t";
					}
				}
			}
		};
	}
	cout << endl;

	return counter;
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % (predel + 1) + (rand() % 10) / 100.0;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << "Double worked;";
}

//char_matrix


long long array_sum(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	long long amount = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			amount += (int)arr[i][j];
	}
	return amount;
}

int min_value(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	int minn = INT_MAX;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if ((int)arr[i][j] < minn) minn = (int)arr[i][j];
	}
	return minn;
}

int max_value(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	int maxx = INT_MIN;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if ((int)arr[i][j] > maxx) maxx = (int)arr[i][j];
	}
	return maxx;
}

int sort(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	char temp;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int a = 0; a < ROWS; a++) {
				for (int b = 0; b < COLS; b++) {
					if ((int)arr[a][b] > (int)arr[i][j])
					{
						temp = arr[a][b];
						arr[a][b] = arr[i][j];
						arr[i][j] = temp;
					}
				}
			}
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;

}


int unique_random(char arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	bool flag;
	predel %= 256;
	if (predel < ROWS * COLS) predel = ROWS * COLS + 1;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			flag = true;
			int random = rand() % predel;
			for (int k = 0; k < ROWS; k++) {
				for (int x = 0; x < COLS; x++) {
					if (random == (int)arr[k][x])
						flag = false;
				}
			}
			while (flag == false) {
				flag = true;
				int random = rand() % predel;
				for (int k = 0; k < ROWS; k++) {
					for (int x = 0; x < COLS; x++) {
						if (random == (int)arr[k][x])
							flag = false;
					}
				}
			}
			arr[i][j] = (char)random;
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;
}

void shift(char arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w) {
	char temp;
	for (int i = 0; i < k; i++) {
		temp = arr[0][0];
		for (int j = 0; j < ROWS; j++) {
			for (int a = 0; a < COLS; a++) {
				arr[j][a] = arr[j][a + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = temp;
	}
	cout << endl;
	print_array(arr, ROWS, COLS);
}

void print_array(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

int search(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Repiats: ";
	int counter = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i + 1; k < ROWS; k++) {
				for (int x = j + 1; x < COLS; x++) {
					if (arr[k][x] == arr[i][j]) {
						counter += 1;
						cout << arr[i][j] << "\t";
					}
				}
			}
		};
	}
	cout << endl;

	return counter;
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	predel %= 256;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = (char)(rand() % (predel + 1));
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl; "Char worked;";
}