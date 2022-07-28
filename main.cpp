/*
* CSCI 115 - Term Project - Part 2
* 
* A program build to test a brute force approach and a more efficient approach to finding if two
* elements can equal a given sum.
*
* Main Program
* Created by: Jonathan Wheeler
*
* Date Created: 7/1/22
*/

#include <iostream>
using namespace std;

bool bruteFindSum(int A[], int size, int sum); // A function that uses a brute force approach and takes an array and a given value and finds that the sum of two elements in the array can equal the given value
bool efficientMergeFindSum(int A[], int size, int sum); // A function that takes an array and a given value and finds that the sum of two elements in the array can equal the given value. This function uses merge sort.
bool efficientCountFindSum(int A[], int size, int sum); // A function that takes an array and a given value and finds that the sum of two elements in the array can equal the given value. This function uses count sort.
void merge(int arr[], int left, int middle, int right); // A function to merge two arrays in sorted order
void merge_sort(int arr[], int left, int right); // A recursive function to divide an array to a single element and merge individual elements to a sorted array
void count_sort(int Arr[], int size); // A method that utilizes the Counting Sort strategy to sort an array in ascending order
void zeroFill(int A[], int size); // A function that takes an array and fills each element with a value of 0
int getMax(int A[], int size); // A function that takes an array and returns the maximum value within that array
int random(int low, int high); // A function that generates a random number and returns it
void generateTestData(int Arr[], int size = 100, int low = 0, int high = 1000); // A function that generates an array based on size, type, and range

int main()
{
	int* data;

	// Data array size
	int size = 100000;

	// Data array range
	int low = 0;
	int high = 9;

	// The target sum
	int sum = 19;

	// Timer variables
	double start, end, time;

	// Sum found variable
	bool found = false;

	// Create new test data array and generate data
	data = new int[size];
	generateTestData(data, size, low, high);

	// Start brute force example
	cout << "Brute Force Algorithm:" << endl;
	start = clock();
	found = bruteFindSum(data, size, sum);
	end = clock();
	if (found)
		cout << "Sum has been found!" << endl;
	else
		cout << "Sum NOT found!" << endl;
	time = end - start;
	found = false;
	cout << "Running Time: " << time << " Milliseconds\n" << endl;

	// Reset timer variables
	start = 0; end = 0; time = 0;

	// Start efficient algorithm example
	cout << "Efficient Algorithm w/ Merge Sort:" << endl;
	start = clock();
	found = efficientMergeFindSum(data, size, sum);
	end = clock();
	if (found)
		cout << "Sum has been found!" << endl;
	else
		cout << "Sum NOT found!" << endl;
	time = end - start;
	found = false;
	cout << "Running Time: " << time << " Milliseconds\n" << endl;

	// Reset timer variables
	start = 0; end = 0; time = 0;

	// Start efficient algorithm example
	cout << "Efficient Algorithm w/ Count Sort:" << endl;
	start = clock();
	found = efficientCountFindSum(data, size, sum);
	end = clock();
	if (found)
		cout << "Sum has been found!" << endl;
	else
		cout << "Sum NOT found!" << endl;
	time = end - start;
	found = false;
	cout << "Running Time: " << time << " Milliseconds\n" << endl;

	return 0;
}

/* 
* A function that uses a brute force approach and takes an array and a given value and finds
*  that the sum of two elements in the array can equal the given value
*
* @param int A[]					- The given array of values
* @param int size					- The size of the given array
* @param int sum					- The given value of the sum to find.
*
* @returns bool sum_found			- A true or false value that shows if the sum was found
*/
bool bruteFindSum(int A[], int size, int sum)
{
	for (int i = 0; i < size-1; i++) {
		for (int j = i+1; j < size; j++) {
			if (A[i] + A[j] == sum) 
				return true;
		}
	}

	return false;
}

/* 
* A function that takes an array and a given value and finds that the sum of two elements
* in the array can equal the given value. This function uses merge sort.
* 
* @param int A[]					- The given array of values
* @param int size					- The size of the given array
* @param int sum					- The given value of the sum to find.
* 
* @returns bool sum_found			- A true or false value that shows if the sum was found
*/
bool efficientMergeFindSum(int A[], int size, int sum)
{
	// Perform a merge sort to sort the data
	merge_sort(A, 0, size-1);
	
	// Set two variables - One at the first(left) index and one at the last(right) index
	int left = 0;
	int right = size - 1;

	// While the left index is smaller than the right, continue to run
	while (left < right) {
		
		// If A[left] and A[right] produce correct sum, return true
		if (A[left] + A[right] == sum)
			return true;
		// Else if the sum between A[left] and A[right] is less than sum, increment left
		else if (A[left] + A[right] < sum)
			left++;
		// Else if the sum between A[left] and A[right] is greater than sum, decrement right
		else if (A[left] + A[right] > sum)
			right--;
	}

	// Return false if no solution is found
	return false;
}


/*
* A function that takes an array and a given value and finds that the sum of two elements
* in the array can equal the given value. This function uses count sort.
*
* @param int A[]					- The given array of values
* @param int size					- The size of the given array
* @param int sum					- The given value of the sum to find.
*
* @returns bool sum_found			- A true or false value that shows if the sum was found
*/
bool efficientCountFindSum(int A[], int size, int sum)
{
	// Perform a count sort to sort the data
	count_sort(A, size);

	// Set two variables - One at the first(left) index and one at the last(right) index
	int left = 0;
	int right = size - 1;

	// While the left index is smaller than the right, continue to run
	while (left < right) {

		// If A[left] and A[right] produce correct sum, return true
		if (A[left] + A[right] == sum)
			return true;
		// Else if the sum between A[left] and A[right] is less than sum, increment left
		else if (A[left] + A[right] < sum)
			left++;
		// Else if the sum between A[left] and A[right] is greater than sum, decrement right
		else if (A[left] + A[right] > sum)
			right--;
	}

	// Return false if no solution is found
	return false;
}


/* 
* A function to merge two arrays in sorted order
* 
* @param int A[]			- The intial array provided
* @param int left			- The starting or lowest index
* @param int middle			- The middle point index
* @param int right			- The ending or highest index
* 
* @returns void
*/
void merge(int A[], int left, int middle, int right)
{
	// Get the array size for the left and right array
	int leftSize = middle - left + 1;
	int rightSize = right - middle;

	// Create two temp arrays; one left and one right
	int* leftArray = new int[leftSize];
	int* rightArray = new int[rightSize];

	// Copy data into the left and right temp arrays
	for (int i = 0; i < leftSize; i++)
		leftArray[i] = A[i + left];

	for (int i = 0; i < rightSize; i++)
		rightArray[i] = A[i + middle + 1];

	// Set an index for each array
	int leftArrayIndex = 0, rightArrayIndex = 0, mergedArrayIndex = left;

	// Merge the arrays
	while (leftArrayIndex < leftSize && rightArrayIndex < rightSize) {
		// Check if the left array element is smaller than the right
		if (leftArray[leftArrayIndex] < rightArray[rightArrayIndex]) {
			// Add the left array element to the merge array and increment the left index
			A[mergedArrayIndex] = leftArray[leftArrayIndex];
			leftArrayIndex++;
		}
		else {
			// Add the right array element to the merge array and increment the right index
			A[mergedArrayIndex] = rightArray[rightArrayIndex];
			rightArrayIndex++;
		}
		// Increment the merge array index
		mergedArrayIndex++;
	}

	// If the left array is not empty
	while (leftArrayIndex < leftSize) {
		// Add the left array element to the merge array and increment the left index
		A[mergedArrayIndex] = leftArray[leftArrayIndex];
		leftArrayIndex++;
		// Increment the merge array index
		mergedArrayIndex++;
	}

	// If the right array is not empty
	while (rightArrayIndex < rightSize) {
		// Add the right array element to the merge array and increment the right index
		A[mergedArrayIndex] = rightArray[rightArrayIndex];
		rightArrayIndex++;
		// Increment the merge array index
		mergedArrayIndex++;
	}
}

/* 
* A recursive function to divide an array to a single element and merge individual elements to a sorted array
* 
* @param int A[]			- The array to be sorted
* @param int left			- The starting or lowest index
* @param int right			- The ending or highest index
* 
* @return void
*/
void merge_sort(int A[], int left, int right)
{
	if (left < right)
	{
		// Set the middle point
		int middle = (left + right) / 2;

		// Recursively divide array to one element
		merge_sort(A, left, middle);
		merge_sort(A, middle + 1, right);

		// Put the data back together
		merge(A, left, middle, right);
	}

}

/*
* A method that utilizes the Counting Sort strategy to sort an array in ascending order
*
* @returns void
*/
void count_sort(int Arr[], int size)
{
	int max = getMax(Arr, size);
	int* Count = new int [max+1];
	int* Output = new int[size];

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

/*
* A function that takes an array and fills each element with a value of 0
*
* @param int arr[]      - The array to find the maximum value from
* @param int size       - The size of the given array
*
* @returns void
*/
void zeroFill(int A[], int size)
{
	for (int i = 0; i < size; i++) {
		A[i] = 0;
	}
}

/*
* A function that takes an array and returns the maximum value within that array
*
* @param int arr[]      - The array to find the maximum value from
* @param int size       - The size of the given array
*
* @returns int max      - The maximum value from the given array
*/
int getMax(int A[], int size)
{
	int max = 0;

	for (int i = 0; i < size; i++) {
		if (max < A[i])
			max = A[i];
	}

	return max;
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
* @param int low				- The low value of the range
* @param int high				- The high value of the range
*
* @returns void
*/
void generateTestData(int Arr[], int size, int low, int high)
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		Arr[i] = random(low, high);
	}
}