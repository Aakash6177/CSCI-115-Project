/*
* Selection Sort
* Created by: Aakash Sharma
* Date Created: 6/16/22
*/
#pragma once
#include <iostream>
using namespace std;

class SelectionSort
{
	int* Arr;
	int size;

public:

	SelectionSort(int A[], int n)
	{
		Arr = new int[n];
		size = n;
		copy(A, A + n, Arr);
	}

	void sort()
	{
		for (int i = 0; i < size; i++) {
			int min_index = i;
			for (int j = i + 1; j < size; j++) {
				if (Arr[j] < Arr[min_index]) {
					swap(Arr[min_index], Arr[j]);
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