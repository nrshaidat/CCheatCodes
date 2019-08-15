/*
 ============================================================================
 Filename: StructuresWithC.c
 Exercise: 
 Programmer: Natalie Rshaidat
 Date: Jul 25, 2019
 Input Arguments:
 Output Arguments:
 Description: Shows what a structure is and how to use it.
 ============================================================================
 */

/* preprocessor directive */
#include <stdio.h>
#define MAXTITL 20
#define MAXAUTL 20
#define SIZE 10
char * s_gets(char * st, int n);//function prototype
/* function prototype here: returnType function_name(argumentType VariableName); */
/* structure declaraction here: struct name{ members;}*/
/* A structure declaration is the master plan that describes how a structure is put together.*/

/* ============================================================================
 * Structure declaration:
 * ============================================================================
 */

struct structName{ /* structure template: tag is structName */
	char member1[SIZE];
	float memberName;
	double memberValue;
	_Bool memberVariableName;
};//notice the semi colon ends the structure declaration

struct book { //struct declaration /* structure template: tag is book */
char title[MAXTITL];
char author[MAXAUTL];
float value;
};//notice the semi colon ends the structure declaration


int main(void) {
	//struct initialization
	struct book library; /* declare library as a book variable */
	/* to access the member value or set it use the dot operator: person.name="Nats"*/
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL); /* access to the title portion */
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n",library.title,
	library.author, library.value);
	printf("%s: \"%s\" ($%.2f)\n", library.author,
	library.title, library.value);
	printf("Done.\n");
	getchar(); /* option 1 to keep from the window from closing*/
	return 0; // indicates success to OS
}

/* function definition: */

char * s_gets(char * st, int n) {
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if (ret_val){
		find = strchr(st, '\n'); // look for newline
	}
	if (find){ // if the address is not NULL,
	*find = '\0'; // place a null character there
	}else{
		while (getchar() != '\n'){
			continue; // dispose of rest of line
		}
	}
	return ret_val;
}
