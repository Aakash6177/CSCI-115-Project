/*
* Counting Sort
* Created by: Aakash Sharma
* Date Created: 6/22/22
*/
#pragma once
#include<iostream>
using namespace std;

class CountingSort
{
    int* Arr;
    int* Output;
    int* Count;
    int size, max;
public:

    CountingSort(int A[], int n)
    {
        Arr = new int[n];
        Output = new int[n];
        size = n;
        copy(A, A + n, Arr);
        max = getMax(A, n);
        Count = new int[max];

    }

    void sort()
    {
        for (int i = 0; i <= max; ++i) {
            Count[i] = 0;
        }
        for (int i = 0; i < size; i++) {
            Count[Arr[i]]++;
        }
        for (int i = 1; i <= max; i++) {
            Count[i] += Count[i - 1];
        }
        for (int i = size - 1; i >= 0; i--) {
            Output[Count[Arr[i]] - 1] = Arr[i];
            Count[Arr[i]]--;
        }
        for (int i = 0; i < size; i++) {
            Arr[i] = Output[i];
        }
    }


    int getMax(int arr[], int n)
    {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > mx)
                mx = arr[i];
        return mx;
    }

    void counting_sort(int array[], int size) {
        int output[101];
        int count[101];

        int max = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] > max)
                max = array[i];
        }
        for (int i = 0; i <= max; ++i) {
            count[i] = 0;
        }
        for (int i = 0; i < size; i++) {
            count[array[i]]++;
        }
        for (int i = 1; i <= max; i++) {
            count[i] += count[i - 1];
        }
        for (int i = size - 1; i >= 0; i--) {
            output[count[array[i]] - 1] = array[i];
            count[array[i]]--;
        }
        for (int i = 0; i < size; i++) {
            array[i] = output[i];
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