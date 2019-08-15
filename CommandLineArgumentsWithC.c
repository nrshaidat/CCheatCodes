/*
 ============================================================================
 Filename: CommandLineArgumentsWithC.c
 Programmer: Natalie Rshaidat
 Date: Aug 2, 2019
 Input Arguments: int argc, char const *argv[]
 Output Arguments: int
 Description: Shows Tips for command line arguments
 ============================================================================
 */

/* preprocessor directive */
#include <stdio.h>
#include <stdlib.h> // exit() prototype

int main(int argc, char const *argv[]) {
	//argc: number of arguments in argv plus 1 for the program name in index 0 and is done automatically so just provide argv arguments when executing
	//argv: an array of files or strings

	 /*
	 ============================================================================
	 To compile:
	 Step 1: open the src folder with the program_name.c in a terminal
	 Step 2: gcc program_name.c -o program_name

	 To Execute Program:
	 Step 1: ./program_name arguments1InARGV argument2InARGV
	 ============================================================================
	 */



     /*
	 ============================================================================
	 To Print What is in argc and argv:
	 ============================================================================
     */
	printf("Argc: %d",argc);//print argc
	int arg;
	for(arg=0;arg<argc;++arg){
		printf("Argv %d is %s\n",arg,argv[arg]);//print argv
	}
	//argv 0 is ./program_name
	//argv 1 is first command line argument
	return 0; // indicates success to OS
}

