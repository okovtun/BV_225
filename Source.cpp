#include <iostream>
#include <string>
#include <math.h>
using namespace std;


const int ROWS = 10;
const int COLS = 5;

template<typename T>T array_sum(T arr[], int n);
template<typename T>T min_value(T arr[], int n);
template<typename T>T max_value(T arr[], int n);
template<typename T>void sort(T arr[], int n);
template<typename T>void unique_random(T arr[], int n, int predel);
template<typename T>void shift(T arr[], int n, int k, string w);
template<typename T>void print_array(T arr[], int n);;
template<typename T>void FillRand(T arr[], int n, int predel);
template<typename T>int search(T arr[], int n);

//matrix
template<typename T>T array_sum(T arr[ROWS][COLS], const int ROWS, const int COlS);
template<typename T>T min_value(T arr[ROWS][COLS], const int ROWS, const int COlS);
template<typename T>T max_value(T arr[ROWS][COLS], const int ROWS, const int COlS);
template<typename T>void sort(T arr[ROWS][COLS], const int ROWS, const int COlS);
template<typename T>void unique_random(T arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
template<typename T>void shift(T arr[ROWS][COLS], const int ROWS, const int COlS, int k, string w);
template<typename T>void print_array(T arr[ROWS][COLS], const int ROWS, const int COlS);;
template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
template<typename T>int search(T arr[ROWS][COLS], const int ROWS, const int COlS);




//#define INT
//#define DOUBLE
//#define INT_MATRIX
#define DOUBLE_MATRIX

void main() {
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
		arr[i] = rand() % 100 + (double)(rand() % 1000) / 10000;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //DOUBLE

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
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	cout << "Shift:         ";  shift(arr, ROWS, COLS, k, w); cout << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;
#endif //INT_MATRIX

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
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	cout << "Shift:         ";  shift(arr, ROWS, COLS, k, w); cout << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;
#endif //DOUBLE_MATRIX

}

template<typename T>T array_sum(T arr[], int n) {
	T amount = 0;
	for (int i = 0; i < n; i++)
		amount += arr[i];
	return amount;
}

template<typename T>T min_value(T arr[], int n) {
	T minn = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < minn) minn = arr[i];
	}
	return minn;
}

template<typename T>T max_value(T arr[], int n) {
	T maxx = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxx) maxx = arr[i];
	}
	return maxx;
}

template<typename T>void sort(T arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				T x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	print_array(arr, n);
}


template<typename T>void unique_random(T arr[], int n, int predel) {
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
}

template<typename T>void shift(T arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	T* new_array = new T[n];
	for (int i = 0; i < n; i++) {
		if (i + k != 0)
			new_array[i] = arr[(i + k) % n];
		else new_array[n - 1] = arr[0];
	}
	print_array(new_array, n);
	delete[] new_array;

}

template<typename T>void print_array(T arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

template<typename T>int search(T arr[], int n) {
	cout << "Repiats: ";
	T* povt = new T[n];
	bool flag = true;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		T a = arr[i];
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

template<typename T>void FillRand(T arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (predel + 1);
		cout << arr[i] << "\t";
	}
}

//matrix

template<typename T>T array_sum(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	T amount = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			amount += arr[i][j];
	}
	return amount;
}

template<typename T>T min_value(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	T minn = INT_MAX;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < minn) minn = arr[i][j];
	}
	return minn;
}

template<typename T>T  max_value(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	T maxx = INT_MIN;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > maxx) maxx = arr[i][j];
	}
	return maxx;
}

template<typename T>void sort(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	T temp;
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

}


template<typename T>void unique_random(T arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
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
				T random = rand() % predel;
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
}

template<typename T>void shift(T arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w) {
	T temp;
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

template<typename T>void print_array(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

template<typename T>int search(T arr[ROWS][COLS], const int ROWS, const int COLS) {
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

template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % (predel + 1);
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl; "Int worked;";
}