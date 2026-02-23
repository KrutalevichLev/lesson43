#include "util.h"

int main() {
	int array[DEFAULT_SIZE];

	int length;
	int a = -20, b = 20;
	do {
		cout << "Enter size of array";
		cin >> length;
	} while (length <= 0);

	init_random(array, length, a, b);
	print(convert(array, length) + '\n');

	int value = 0;
	bool result = search_linear(array, length, value);

	print(to_string(result));

	return 0;
}