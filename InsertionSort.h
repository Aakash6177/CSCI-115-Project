/*
* Insertion Sort
* Created by: Ulysses Ochoa
* Date Created: 6/23/22
*/
#pragma once
#include <iostream>
//#include <algorithm>
using namespace std;

class InsertionSort
{
	int* Arr;
    int size;

public:
    InsertionSort();
	InsertionSort(int A[], int n)
	{
		Arr = new int [n];
        size = n;
		copy(A, A + n, Arr);
	}

	void sort()
	{
        int i;
        int j = 0;
        int key = 0;
        for (i = 1; i < size; i++) {
            key = Arr[i];
            j = i;
            while (j > 0 && Arr[j - 1] > key) {
                Arr[j] = Arr[j - 1];
                j--;
            }
            Arr[j] = key;
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