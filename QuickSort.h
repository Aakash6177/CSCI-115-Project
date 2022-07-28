/*
* Quick Sort
* Created by: Daniel Nunez III
* Date Created: 6/21/22
*/
#pragma once
#include <iostream>
using namespace std;

class QuickSort
{
	int* Arr;
	int size;

public:

	QuickSort(int A[], int n)
	{
		Arr = new int[n];
		size = n;
		copy(A, A + n, Arr);
	}

	void sort()
	{
		quickSort(Arr, 0, size-1);
	}

	// Function that sorts the sub array around the middle element and returns the pivot 
	int partition(int A[], int s, int e) {
		int mid = A[(s + e) / 2];
		int i = s - 1;
		int j = e + 1;
		while (true) {
			do {
				i++;
			} while (A[i] < mid);
			do {
				j--;
			} while (A[j] > mid);
			if (i < j) {
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
			else {
				return j;
			}
		}
	}

	// Function used to quick sort an array
	void quickSort(int A[], int s, int e) {
		if (s < e) {
			int part = partition(A, s, e);
			quickSort(A, s, part);
			quickSort(A, part + 1, e);
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
