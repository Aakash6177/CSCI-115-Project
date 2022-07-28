/*
* Radix Sort
* Created by: Aakash Sharma
* Date Created: 6/22/22
*/
#pragma once
#include<iostream>
using namespace std;

class RadixSort
{
    int* Arr;
    int size;

public:
    RadixSort(int A[], int n)
    {
        Arr = new int[n];
        size = n;
        copy(A, A + n, Arr);
    }

    void sort()
    {
        radix_sort(Arr, size);
    }

    int getMax(int arr[], int n)
    {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > mx)
                mx = arr[i];
        return mx;
    }

    void countSort(int arr[], int n, int expo) {
        int* output;
        output = new int[n];
        int i, count[10] = { 0 };
        for (i = 0; i < n; i++)
            count[(arr[i] / expo) % 10]++;
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];
        for (i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / expo) % 10] - 1] = arr[i];
            count[(arr[i] / expo) % 10]--;
        }
        for (i = 0; i < n; i++)
            arr[i] = output[i];
    }

    void radix_sort(int arr[], int n) {
        int m = getMax(arr, n);
        for (int expo = 1; m / expo > 0; expo *= 10)
            countSort(arr, n, expo);
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