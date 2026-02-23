#pragma once
#include <iostream>
#include <string>

#define DEFAULT_SIZE 100

using namespace std;

bool search_linear(int array[DEFAULT_SIZE], int length, int value);
int get_first_element(int array[DEFAULT_SIZE], int length, int value);
int get_last_element(int array[DEFAULT_SIZE], int length, int value);