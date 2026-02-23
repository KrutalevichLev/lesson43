#include "util.h"

bool search_linear(int array[DEFAULT_SIZE], int length, int value) {
	for (int index = 0; index < length; index++)
	{
		if (array[index] == value) {
			return true;
		}
	}

	return false;
}

int get_first_element(int array[DEFAULT_SIZE], int length, int value) {
	for (int index = 0; index < length; index++)
	{
		if (array[index] == value) {
			return index;
		}
	}

	return -1;
}

int get_last_element(int array[DEFAULT_SIZE], int length, int value) {
	for (int index = length - 1; index >= length; index--)
	{
		if (array[index] == value) {
			return index;
		}
	}

	return -1;
}