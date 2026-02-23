#include "util.h"

void init_random(int array[DEFAULT_SIZE], int length, int a, int b) {

	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}

	for (int index = 0; index < length; index++)
	{
		array[index] = rand() % (b - a + 1) + a;
	}

}

string convert(int array[DEFAULT_SIZE], int length) {
	string s = "";

	for (int index = 0; index < length; index++)
	{
		s += to_string(array[index]) + " ";
	}

	return s;
}

void pring(string msg) {
	cout << msg;
}