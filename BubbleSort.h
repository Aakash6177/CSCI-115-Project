/*
* Bubble Sort
* Created by: Ulysses Ochoa
* Date Created: 6/24/22
*/
#pragma once
#include <iostream>
using namespace std;

class BubbleSort
{
	int* Arr;
	int size;

public:

	BubbleSort(int A[], int n)
	{
		Arr = new int[n];
		size = n;
		copy(A, A + n, Arr);
	}

	void sort()
	{
		int i;
		int j;
		for (i = 0; i < size - 1; i++) {
			for (j = 0; j < size - 1; j++) {
				if (Arr[j] > Arr[j + 1]) {
					swap(Arr[j], Arr[j + 1]);
				}
			}
		}
	}

	void print() {
		cout << "\n[ ";
		for (int i = 0; i < size; i++) {
			if (i != size - 1)
				cout << Arr[i] << ", ";
			else
				cout << Arr[i];
		}
		cout << " ]" << endl;
	}
};