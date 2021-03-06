/* Terry Ellison
   October 16, 2017 ©
   Chapter 9 Programming Challenge: ArrayExpander*/

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int* ArrayExpander(int [], int);


int main()
{	
	const int SIZE = 5;

	int iArr[SIZE];

	srand((unsigned int)time(NULL));

	// Populates the array with random integers
	for (int f = 0; f < SIZE; f++) {
		*(iArr + f) = rand();
	}

	int *intArr2 = nullptr;
	
	intArr2 = ArrayExpander(iArr, SIZE);


	for (int b = 0; b < (SIZE * 2); b++) {
		cout << *(intArr2 + b) << " ";
	}
	cout << "\n";
	system("Pause");

    return 0;
}

int* ArrayExpander(int nums[], int SIZE) {
	int *intArr = nullptr;

	intArr = new int[SIZE * 2];

	for (int i = 0; i < SIZE; i++) {
		intArr[i] = *(nums + i);
	}

	for (int z = SIZE; z < (SIZE * 2); z++) {
		*(intArr + z) = 0;
	}

	return intArr;
}

