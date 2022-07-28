/*
* Heap Sort
* Created by: Daniel Nunez III
* Date Created: 6/21/22
*/
#pragma once
#include <iostream>
using namespace std;

class HeapSort
{
	int* Arr;
	int size;

public:

	HeapSort(int A[], int n)
	{
		Arr = new int[n];
		size = n;
		copy(A, A + n, Arr);
	}

	void sortAscending()
	{
		AscendingHeapSort(Arr, size);
	}

	void sortDescending()
	{
		DescendingHeapSort(Arr, size);
	}

	void InsertMaxHeap(int A[], int val, int& n)
	{
		A[n++] = val;
		int i = n - 1;
		while (i > 0) {
			if (A[i / 2] < A[i]) {
				int temp = A[i / 2];
				A[i / 2] = A[i];
				A[i] = temp;
			}
			i = i / 2;
		}
	}

	void MaxHeapify(int A[], int i, int n)
	{
		if (i < n - 1) {
			int largest = i;
			int left = ((i + 1) * 2) - 1;
			int right = left + 1;
			if (left < n && A[left] > A[largest]) {
				largest = left;
			}
			if (right < n && A[right] > A[largest]) {
				largest = right;
			}
			if (largest != i) {
				int temp = A[largest];
				A[largest] = A[i];
				A[i] = temp;
				MaxHeapify(A, largest, n);
			}
		}
	}

	void BuildMaxHeap(int A[], int n)
	{
		for (int i = n / 2; i >= 0; i--) {
			MaxHeapify(A, i, n);
		}
	}

	void AscendingHeapSort(int A[], int n)
	{
		BuildMaxHeap(A, n);
		for (int i = n - 1; i >= 0; i--) {
			int temp = A[0];
			A[0] = A[i];
			A[i] = temp;
			MaxHeapify(A, 0, i);
		}
	}

	int ExtractMax(int A[], int& n)
	{
		BuildMaxHeap(A, n);
		int val = A[0];
		A[0] = A[--n];
		MaxHeapify(A, 0, n);
		return val;
	}

	void InsertMinHeap(int A[], int val, int& n)
	{
		A[n++] = val;
		int i = n - 1;
		while (i > 0) {
			if (A[i / 2] > A[i]) {
				int temp = A[i / 2];
				A[i / 2] = A[i];
				A[i] = temp;
			}
			i = i / 2;
		}
	}

	void MinHeapify(int A[], int i, int n)
	{
		if (i < n - 1) {
			int smallest = i;
			int left = ((i + 1) * 2) - 1;
			int right = left + 1;
			if (left < n && A[left] < A[smallest]) {
				smallest = left;
			}
			if (right < n && A[right] < A[smallest]) {
				smallest = right;
			}
			if (smallest != i) {
				int temp = A[smallest];
				A[smallest] = A[i];
				A[i] = temp;
				MinHeapify(A, smallest, n);
			}
		}
	}

	void BuildMinHeap(int A[], int n)
	{
		for (int i = n / 2; i >= 0; i--) {
			MinHeapify(A, i, n);
		}
	}

	void DescendingHeapSort(int A[], int n)
	{
		BuildMinHeap(A, n);
		for (int i = n - 1; i >= 0; i--) {
			int temp = A[0];
			A[0] = A[i];
			A[i] = temp;
			MinHeapify(A, 0, i);
		}
	}

	int ExtractMin(int A[], int& n)
	{
		BuildMinHeap(A, n);
		int val = A[0];
		A[0] = A[--n];
		MinHeapify(A, 0, n);
		return val;
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