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