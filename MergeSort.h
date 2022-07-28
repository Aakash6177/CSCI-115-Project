/*
* Merge Sort
* Created by: Aakash Sharma
* Date Created: 6/16/22
*/
#pragma once
#include <iostream>
using namespace std;

class MergeSort
{
	int* Arr;
	int size;

public:

	MergeSort(int A[], int n)
	{
		Arr = new int[n];
		size = n;
		copy(A, A + n, Arr);
	}

	void sort()
	{
		merge_sort(Arr, 0, size-1);
	}

	void merge_sort(int array[], int l, int r)
	{
		int m;
		if (l < r) {
			int m = l + (r - l) / 2;
			merge_sort(array, l, m);
			merge_sort(array, m + 1, r);
			merge(array, l, m, r);
		}
	}

	void merge(int array[], int l, int m, int r)
	{
		int i, j, k, nl, nr;
		nl = m - l + 1; nr = r - m;
		int* larr;
		int* rarr;
		larr = new int[nl];
		rarr = new int[nr];

		for (i = 0; i < nl; i++)
			larr[i] = array[l + i];
		for (j = 0; j < nr; j++)
			rarr[j] = array[m + 1 + j];
		i = 0; j = 0; k = l;
		while (i < nl && j < nr) {
			if (larr[i] <= rarr[j]) {
				array[k] = larr[i];
				i++;
			}
			else {
				array[k] = rarr[j];
				j++;
			}
			k++;
		}
		while (i < nl) {
			array[k] = larr[i];
			i++; k++;
		}
		while (j < nr) {
			array[k] = rarr[j];
			j++; k++;
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