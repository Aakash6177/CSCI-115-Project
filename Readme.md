Term Project - Part 2
===============================================================================


Code Execution
-------------------------------------------------------------------------------

The program must be compiled after every change made to the variables. There
four variables that can be edited to provide a testing output for comparison.

The four variables are as follows:

	1. int size

	    This variable is the representation of the size of the data array. 
	    Adding more elements will increase the runtime.

	2. int low

	    This variable is the representation of the lowest value of the range of
	    values upon which to build the data array.

	3. int high

	    This variable is the representation of the highest value of the range 
	    of values upon which to build the data array.

	4. int sum

	    This variable is the representation of the target sum which two 
	    elements must equal.

After setting these variables you may compile the code and run it. There is a 
timer to keep track of runtime for both find functions. 

The first find function is the brute force method, which will check every pair 
comination until it finds the correct pair that equals the sum or runs out of 
elements.

The second find function is the more efficient method, which sorts the array
first using the merge sort method and then approaches each pair from both ends 
of the array until it finds the correct pair that equals the sum or runs out of 
elements.

Upon completion there will be a print out on screen to view the comparison of 
each run.