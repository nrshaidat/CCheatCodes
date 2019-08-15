/*
 ============================================================================
 Filename: FilesWithC.c
 Programmer: Natalie Rshaidat
 Date: Aug 4, 2019
 Description:How to handle file input and output
 ============================================================================
 */

/* preprocessor directive */
#include <stdio.h>
#include <stdlib.h> // exit() prototype
struct threeNum  //used for fread()
{
   int n1, n2, n3;
};

int main(void) {
	 /*
	 ============================================================================
	 Steps to Handling Files:
	 Step 1: Opening/Creating a file: Text mode is the default file open mode.
     Step 2: Closing a file
     Step 3: Reading a file
     Step 4: Writing in a file
	 ============================================================================
	*/

	FILE *fp ;//declare a file pointer
	fp = fopen("test.c", "r");//have the pointer point to the return value of opening the file
	/*
	============================================================================
	Binary Files:
	-wb(write)
		-fp=fopen("data,dat","wb);
		-open a binary file in write mode
	-rb(read)
		-fp=fopen("data.dat","rb");
		-open a binary file in read mode
	-ab(append)
		-fp=fopen("data.dat","ab");
		-open a binary file in append mode
	-r+b(read+write)
		-fp=fopen("data.dat","r+b");
		-open a binary file for reading and writing operation
	-a+b(append+write)
		-fp=fopen("data.dat","a+b");
		-open a binary file in append mode that is data can be wqritten at the end of the file
	-w+b(read+write)
		-fp=fopen("data.dat","w+b");
		-creates a new file in read and write mode
	-int fwrite (void * ptr, size_t record_size, size_t num_records, FILE * fp);
	- int fread (void * ptr, size_t record_size, size_t num_records, FILE * fp);

	============================================================================
	*/

	/*
	============================================================================
	Text Files:

	============================================================================
	*/

	/*
	============================================================================
	Opening a File:
	============================================================================
	*/

	//BINARY MODE:
	FILE *inputFilePtr1;
	inputFilePtr1 = fopen("afile.txt", "rb");

	//TEXT MODE:
	FILE *inputFilePtr2;
	inputFilePtr2 = fopen("afile.txt", "r");


	/*
	============================================================================
	Reading a File:
	-Text File:
		-fscanf(): a field oriented function and is inappropriate for use in a robust, general-purpose text file reader.
    	-fgets():a line oriented function.
		-fgetc():is a character oriented function.
		-// Moves the cursor to the end of the file
         fseek(fptr, -sizeof(struct threeNum), SEEK_END);
	-Binary File:
		-fread(a memory adress:&structName, the number of bytes to read per block: sizeof(struct name),the number of blocks to read:1, the file variable:fp); -->use this to read text files
	============================================================================
	*/

	int num;

	//BINARY MODE:
	FILE *inputFilePtr3;
	inputFilePtr3 = fopen("afile.txt", "rb");
	fread(&num, sizeof(struct threeNum), 1, inputFilePtr3); //read from a file

	//TEXT MODE:
	FILE *inputFilePtr4;
	inputFilePtr4 = fopen("afile.txt", "r");
	fscanf(inputFilePtr4,"%d", &num);//reads the input


	/*
	============================================================================
	Writing a File:
	-Text file:
		-fprintf()
	-Binary File:
		-fwrite(address_data,size_data,numbers_data,pointer_to_file);

	============================================================================
	*/


	//BINARY MODE:
	FILE *inputFilePtr6;
	inputFilePtr6 = fopen("afile.txt", "rb");
	fwrite(&num, sizeof(struct threeNum), 1, inputFilePtr6);


	//TEXT MODE:
	FILE *inputFilePtr5;
	inputFilePtr5 = fopen("afile.txt", "w");
	printf("Value of n=%d", num);//writes the input to a file

	/*
	============================================================================
	Closing a File: fclose()
	============================================================================
	*/

	int ch; //return of getc()
	FILE * fp;
	fp = fopen("wacky.txt", "r");
	while (( ch = getc(fp)) != EOF) {
		putchar(ch); // process input by diplaying it on the console
	}
	fclose(fp);
	getchar(); /* option 1 to keep from the window from closing*/
	return 0; // indicates success to OS
}

