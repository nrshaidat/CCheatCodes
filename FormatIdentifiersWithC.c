/*
 ============================================================================
 Filename: FormatIdentifiersWithC.c
 Programmer: Natalie Rshaidat
 Date: Jul 31, 2019
 Description: format identifiers general info
 ============================================================================
 */

/* preprocessor directive */
#include <stdio.h>
/* function prototype here: returnType function_name(argumentType VariableName); */
int main(void) {
	//Newline: \n
	printf("\'Single quotes\'\n");// \' is single quote
	printf("\"Double quotes\"\n ");// \" is double quotes
	printf("\\Backslashes\\ \n");// \\ is backslashes
	printf("\t and uses a tab\n"); //\t is horizontal tab
	printf("\n");

	/*
	 ============================================================================
	 Data Type: Integer--> %d or %i
	 printf():
	 	 -A minus (-) sign tells left alignment
	 	 -A number after % specifies the minimum field width to be printed if the
	 	 characters are less than the size of width the remaining space is filled
	 	 with space and if it is greater than it printed as it is without truncation
	 	 -A period (.) symbol seperates field width with the precision
	 scanf():
	  	 -add a (&) symbol before the variable name: ex. scanf("%d",&varName);
	 ============================================================================
	 */
	int a;
	printf("Enter an integer:\n");
	scanf("%d",&a);
	printf("Your integer is %d\n\n",a);

	/*
	 ============================================================================
	 Data Type: Character--> %c
	 printf():"%c"
	 scanf(): scanf(" %c",&c);
	 	 -add a space before the % symbol: scanf(" %c",&c);
	  	 -add a (&) symbol before the variable name: ex. scanf("%c",&varName);
	 ============================================================================
	 */
	char c;
	printf("Enter one character:\n");
	scanf(" %c",&c);
	printf("Your character is %c\n\n",c);


	/*
	 ============================================================================
     Data Type: String-->
     printf(): "%s"
     scanf():" %[^\n]s"
     	 -add a space before the % symbol: scanf(" %[^\n]s",stringy);
     	 - %[^\n]s: [^\n] makes sure every word is read
	 ============================================================================
	 */
	char stringy[20];
	printf("Enter a string:\n");
	scanf(" %[^\n]s",stringy);
	printf("Your string is %s\n\n",stringy);

	/*
	 ============================================================================
	 Data Type: Double
	 printf():
	 	 -%f
	 	 -%g identifier to remove trailing zeroes if it is assigned doubles with
	 	  scanf identifier as %lf
	 scanf():
	 	 -%e: double
	 	 -%lf: long double (USUALLY USE THIS ONE)
	 	 -add a (&) symbol before the variable name: ex. scanf("%lf",&varName);

	 ============================================================================
	 */
	double doubly;
	printf("Enter a double value:\n");
	scanf(" %lf",&doubly);
	printf("Your double value is %.f\n",doubly);//removes all numbers to the right of the decimal point
	printf("Your double value is %g\n\n",doubly);

	/*
	 ============================================================================
	 Data Type: Float
	 printf():
	 	 -%f: float
	 	 -%e: exponential float ex. 1.267000e+01
	 	 -%g:automatically selects shorter of %f and %e
	 scanf():
	 	 -%f
	 	 -add a (&) symbol before the variable name: ex. scanf("%lf",&varName);
	 ============================================================================
	 */
	float floaty;
	printf("Enter a float value:\n");
	scanf(" %f",&floaty);
	printf("Your float value is %f\n",floaty);
	printf("Your float value is %g\n\n",floaty);


	getchar(); /* option 1 to keep from the window from closing*/
	return 0; // indicates success to OS
}

