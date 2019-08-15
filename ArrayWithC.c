/*
 ============================================================================
 Filename: ArraysWithC.c
 Programmer: Natalie Rshaidat
 Date: Jul 15, 2019
 Description:Common things to do with arrays needed for reference
  -initializing an array with the same value as each element
  -copying one array to another
  -printing the array to the console
  -2D Arrays (Matrix)
  -Printing character arrays/strings
 ============================================================================
 */

/* preprocessor directive */
#include <stdio.h>
#define ARRAY_SIZE 10

/*
* ============================================================================
* DataType ArrayName[MAX ARRAY SIZE];
* int Array[5];
* int *pnt;//pointer to an int
* pnt=Array;//assign an address to a pointer so it is the address of Array[0] not the value stored there
* Array[5]= [___|___|___|___|___]
* Index Num=| 0 | 1 | 2 | 3 | 4 |
* Address=  |00D|00C|00F|00G|00H|
*            |^|->^
*           |pnt| --> pnt++;
*               | ^ |
*               |pnt|
* ============================================================================
*/

int main(void) {

	/* ============================================================================
	 * Initialize all array elements to zero
	 * ============================================================================
	 */

	int Same_Value=0;//the value we want every element to have
	int countArray[ARRAY_SIZE];//declare array with specified max value of elements
	for (int i=0; i<ARRAY_SIZE; i++){ //loop thru the array
	   countArray[i] = Same_Value;//declare each element in the array to this value
	}
	//countArray={0,0,0,0,0,0,0,0,0,0}


	/* ============================================================================
	 * Copy all array elements to another array
	 * ============================================================================
	 */

	int  originalArray[5] = {1,2,3,4,5};//declare the original array
	int  newArray[5];//empty array to recieve the values from the original

	/*  copy one array to another */
	for(int i=0; i<5; i++){ //for loop to copy all the array elements to the new one
		newArray[i]=originalArray[i];
	}


	/* ============================================================================
	 * Printing the Array to the Console:
	 * PRINTS:
	 * 	 New Array:
	 * 	 { 1, 2, 3, 4, 5 }
	 * ============================================================================
	 */

	printf("New Array:\n");//header title for the array

	for(int i=0; i<5;i++){//5 is the size of the array
		if (i==0){ //print the { and the first value
			printf("{ %d, ", newArray[i]);
		}else if (i==4){ //print the } and the last value
			printf("%d }", newArray[i]);
		}else{//print all the elements in the middle
			printf("%d, ", newArray[i]);
		}

	}
	/* ============================================================================
	 * 2D ARRAYS:
	 * ============================================================================
	 */


	    int matrix[6][8] = { 0 };		// or use {{ 0 }}

		int rows = sizeof(matrix)/sizeof(matrix[0]);
		int cols = sizeof(matrix[0])/sizeof(matrix[0][0]);

		// print the matrix
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}

	/* ============================================================================
	 * Printing character arrays/strings:
	 * scanf("%[^\n]s", characterArray)
	 * printf("%s",characterArray)
	 * ============================================================================
	 */
		char shiftMe[50];//decalre an array of 50 characters
		char *shiftMePntr=shiftMe;//declare a pointer for the arary of characters
		printf("What do you want to shift?\n");//ask the user what they want to shift
		scanf("%[^\n]s",shiftMe);//had to include [^\n] to get all the words inputted in the string and not just the first word

	/* ============================================================================
	 * Pointers:
	 *
	 * ============================================================================
	 */

		int *ptr;
		int a = 100;
		ptr = &a;
		ptr++;    // Pointer moves to the next int position (as if it was an array)
		++ptr;    // Pointer moves to the next int position (as if it was an array)
		++*ptr;   // The value of ptr is incremented
		++(*ptr); // The value of ptr is incremented
		++*(ptr); // The value of ptr is incremented
		*ptr++;   // Pointer moves to the next int position (as if it was an array). But returns the old content
		(*ptr)++; // The value of ptr is incremented
		*(ptr)++; // Pointer moves to the next int position (as if it was an array). But returns the old content
		*++ptr;   // Pointer moves to the next int position, and then get's accessed, with your code, segfault
		*(++ptr); // Pointer moves to the next int position, and then get's accessed, with your code, segfault

	return 0; // indicates success to OS
}


