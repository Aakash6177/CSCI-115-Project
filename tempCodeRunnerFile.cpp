
#include <iostream>
#include <string>
#include "BubbleSort.h"
#include "CountingSort.h"
#include "Display.h"
#include "HeapSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RadixSort.h"
#include "SelectionSort.h"
using namespace std;

int selectValue(int input); // A function that returns the value of user input
int random(int low, int high); // A function that generates a random number and returns it
void generateTestData(int Arr[], int size = 100, int type = 0, int low = 0, int high = 1000); // A function that generates an array based on size, type, and range
void printArray(int Arr[], int size); // A function that prints out a given array.

int main()
{
	int* Arr;
	int select = -1, menu = 0, display = 2, arrSize = 1000, type = 2, low = 0, high = 1000, start = 0, end = 0, duration = 0;
	int dataOptions[6];
	char input = 'q';
	bool viewTestingData = false, viewData = false, invalidSelection = false, dataGenerated = false, dataSorted = false, displayChanged = false, testRerun = false;
	
	Arr = new int[arrSize];
	generateTestData(Arr, arrSize);
	
	// While loop to run program while user has not requested to quit
	while (select != 0) {

		// Welcome Menu Screen
		if (menu == 0)
		{
			Display::welcomeMenu(display);
			if (invalidSelection) {
				cout << "\n* ERROR: Invalid Selection - Try Again *" << endl;
				invalidSelection = false;
			}
			cout << "\nSelection: ";
			cin >> input;
			select = selectValue(int(tolower(input)));
			if (select < 0 || select > 3)
				invalidSelection = true;
			else
				menu = select;
		}

		// Sort Menu Screen
		else if (menu == 1)
		{
			Display::algorithmMenu(display, viewData);
			if (invalidSelection) {
				cout << "\n* ERROR: Invalid Selection - Try Again *" << endl;
				invalidSelection = false;
			}
			cout << "\nSelection: ";
			cin >> input;
			select = selectValue(int(tolower(input)));
			if (select < -1 || select > 9 && select != 100)
				invalidSelection = true;
			else if (select == -1)
				menu = 0;
			else if (select == 100 && viewData)
				viewData = false;
			else if (select == 100)
				viewData = true; 
			else if (select != -1 && select != 0)
			{	
				// Insertion Sort
				if (select == 1) {
					do {
						InsertionSort InsertionSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						InsertionSort.sort();
						dataSorted = true;
						end = clock();
						duration = end - start;
						Display::resultsMenu(display, arrSize, select, type, low, high, duration, viewData, testRerun);

						if (dataSorted) {
							cout << "\nSUCCESS: Data has been sorted!" << endl;
							dataSorted = false;
						}

						if (viewData) {
							cout << "\nUnsorted Data:";
							printArray(Arr, arrSize);
							cout << "\nSorted Data:";
							InsertionSort.print();
						}
						testRerun = false;
						cout << "\nSelection: ";
						cin >> input;
						select = selectValue(int(tolower(input)));
						if (select == -1)
							menu = 1;
						else if (select == 114)
							testRerun = true;
					} while (testRerun != false);
				}

				// Selection Sort
				else if (select == 2) {
					do {
						SelectionSort SelectionSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						SelectionSort.sort();
						dataSorted = true;
						end = clock();
						duration = end - start;
						Display::resultsMenu(display, arrSize, select, type, low, high, duration, viewData, testRerun);

						if (dataSorted) {
							cout << "\nSUCCESS: Data has been sorted!" << endl;
							dataSorted = false;
						}

						if (viewData) {
							cout << "\nUnsorted Data:";
							printArray(Arr, arrSize);
							cout << "\nSorted Data:";
							SelectionSort.print();
						}
						testRerun = false;
						cout << "\nSelection: ";
						cin >> input;
						select = selectValue(int(tolower(input)));
						if (select == -1)
							menu = 1;
						else if (select == 114)
							testRerun = true;
					} while (testRerun != false);
				}

				// Bubble Sort
				else if (select == 3) {
					do {
						BubbleSort BubbleSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						BubbleSort.sort();
						dataSorted = true;
						end = clock();
						duration = end - start;
						Display::resultsMenu(display, arrSize, select, type, low, high, duration, viewData, testRerun);

						if (dataSorted) {
							cout << "\nSUCCESS: Data has been sorted!" << endl;
							dataSorted = false;
						}

						if (viewData) {
							cout << "\nUnsorted Data:";
							printArray(Arr, arrSize);
							cout << "\nSorted Data:";
							BubbleSort.print();
						}
						testRerun = false;
						cout << "\nSelection: ";
						cin >> input;
						select = selectValue(int(tolower(input)));
						if (select == -1)
							menu = 1;
						else if (select == 114)
							testRerun = true;
					} while (testRerun != false);
				}

				// Merge Sort
				else if (select == 4) {
					do {
						MergeSort MergeSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						MergeSort.sort();
						dataSorted = true;
						end = clock();
						duration = end - start;
						Display::resultsMenu(display, arrSize, select, type, low, high, duration, viewData, testRerun);

						if (dataSorted) {
							cout << "\nSUCCESS: Data has been sorted!" << endl;
							dataSorted = false;
						}

						if (viewData) {
							cout << "\nUnsorted Data:";
							printArray(Arr, arrSize);
							cout << "\nSorted Data:";
							MergeSort.print();
						}
						testRerun = false;
						cout << "\nSelection: ";
						cin >> input;
						select = selectValue(int(tolower(input)));
						if (select == -1)
							menu = 1;
						else if (select == 114)
							testRerun = true;
					} while (testRerun != false);