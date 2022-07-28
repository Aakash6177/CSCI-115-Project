/*
* CSCI 115 - Term Project 
* A program build to test different sorting algoritms for expirimental purposes.
* 
* Main Program
* Created by: Jonathan Wheeler
* 
* Insertion Sort & Bubble Sort
* Created by: Ulysses Ochoa
* 
* Heap Sort & Quick Sort
* Created by: Daniel Nunez III
* 
* Selection Sort, Merge Sort, Counting Sort, & Radix Sort
* Created by: Aakash Sharma
* 
* Date Created: 6/27/22
*/

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
				}

				// Heap Sort - Min
				else if (select == 5) {
					do {
						HeapSort HeapSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						HeapSort.sortDescending();
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
							HeapSort.print();
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

				// Heap Sort - Max
				else if (select == 6) {
					do {
						HeapSort HeapSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						HeapSort.sortAscending();
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
							HeapSort.print();
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

				// Quick Sort
				else if (select == 7) {
					do {
						QuickSort QuickSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						QuickSort.sort();
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
							QuickSort.print();
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

				// Counting Sort
				else if (select == 8) {
					do {
						CountingSort CountingSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						CountingSort.sort();
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
							CountingSort.print();
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

				// Radix Sort
				else if (select == 9) {
					do {
						RadixSort RadixSort(Arr, arrSize);
						start = clock();
						Display::loadingMenu(display);
						RadixSort.sort();
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
							RadixSort.print();
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
			}

		}

		// Data Menu Screen
		else if (menu == 2)
		{
			Display::dataMenu(display, viewTestingData);
			if (viewTestingData) {
				cout << "\nTesting Data:";
				printArray(Arr, arrSize);
			}

			if (invalidSelection) {
				cout << "\n* ERROR: Invalid Selection - Try Again *" << endl;
				invalidSelection = false;
			}

			if (dataGenerated) {
				cout << "\nSUCCESS: New data generated!" << endl;
				dataGenerated = false;
			}

			cout << "\nSelection: ";
			cin >> input;
			select = selectValue(int(tolower(input)));
			if (select < -1 || select > 2)
				invalidSelection = true;
			else
				if (select == 1) {
					cout << "\nHow many data elements:" << endl;
					cin >> arrSize;
					if (arrSize == 0)
						return 0;
					cout << "\n(1: Ascending 2: Random 3: Descending 4: Half-Sorted)";
					cout << "\nWhat type of data array:" << endl;
					cin >> type;
					if (type == 0)
						return 0;
					if (type == 2) {
						cout << "\nWhat number for the low of range:" << endl;
						cin >> low;
						if (low < 0)
							low = 0;
						cout << "\nWhat number for the high of range:" << endl;
						cin >> high;
						if (high < low)
							high = (low + 1) * 10;
					}
					if (!(arrSize > 2)) 
						arrSize = 100;
					
					if (!(type > 0 && type < 5))
						type = 2;
					
					Arr = new int[arrSize];
					generateTestData(Arr, arrSize, type, low, high);
					cout << "\nGenerating Data..." << endl;
					dataGenerated = true;
				}
				else if (select == 2 && viewTestingData)
					viewTestingData = false;
				else if (select == 2)
					viewTestingData = true;
				else if (select == -1)
					menu = 0;
		}

		// Display Menu Screen
		else if (menu == 3)
		{
			while (select != -1 && select != 0) {
				Display::displayMenu(display);
				if (invalidSelection) {
					cout << "\n* ERROR: Invalid Selection - Try Again *" << endl;
					invalidSelection = false;
				}

				if (displayChanged) {
					cout << "\n* SUCCESS: Display style changed! *" << endl;
					displayChanged = false;
				}
				cout << "\nSelection: ";
				cin >> input;
				select = selectValue(int(tolower(input)));
				if (select > 0 && select <= 3) {
					display = select;
					displayChanged = true;
				}
				else if (select == -1)
					menu = 0;
				else
					invalidSelection = true;
			}
		}
		// Welcome Menu Screen
		else
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
		
		// If select option is 0 exit program
		if (select == 0)
			cout << "\nExiting program!" << endl;
	}
	
	return 0;
}

/*
* A function that generates a number equivalent of a character and returns that number
*
* @param int input				- The int value of the input character from the user
* 
* @returns int select_int		- The int value adjusted for the options provided
*/
int selectValue(int input)
{
	if (input >= 49 && input <= 57)
		return input - 48;
	else if (input == 98)
		return -1;
	else if (input == 100)
		return 100;
	else if (input == 113)
		return 0;
	else if (input == 114)
		return 114;
	else
		return -2;
}


/*
* A function that generates a random number from a range and returns it
* 
* @param int low				- The low value for the range to randomize
* @param int high				- The high value for the range to randomize
* 
* @returns int random_int		- The int value of the random number generated
*/
int random(int low, int high)
{
	return  low + rand() % (high - low + 1);
}


/*
* A function that generates an array of test data based on user specifications of size, type, and range
* 
* @param int Arr[]				- A pointer to the main test data Array
* @param int size				- The size of the array
* @param int type				- The type of array - 1: Ascending, 2: Random, 3: Descending, 4: Half-Sorted
* @param int low				- The low value of the range
* @param int high				- The high value of the range
* 
* @returns void
*/
void generateTestData(int Arr[], int size, int type, int low, int high)
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		if (type == 1)
			Arr[i] = i + 1;
		else if (type == 2)
			Arr[i] = random(low, high);
		else if (type == 3)
			Arr[i] = size - i;
		else if (type == 4)
			if (i < size / 2) {
				Arr[i] = i + 1;
			}
			else {
				Arr[i] = random(i, size);
			}
		else
			Arr[i] = random(low, high);
	}
}

/*
* A function that prints out a given array
* 
* @param int Arr[]				- The array meant to be printed
* @param int size				- The size of the array to be printed
* 
* @returns void
*/
void printArray(int Arr[], int size)
{
	cout << "\n[ ";
	for (int i = 0; i < size; i++) {
		if (i != size - 1)
			cout << Arr[i] << ", ";
		else
			cout << Arr[i];
	}
	cout << " ]" << endl;
}