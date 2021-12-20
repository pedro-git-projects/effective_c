#include <stdio.h>
#include <stdlib.h>

// void indicates that the program will not recieve arguments
int main(void) {

	// puts returns a the macro EOF, a negative integer 
	// if an error occurs, and a non negative integer
	// otherwise
	if(puts("Hello, world!") == EOF) {
		// EXIT_FAILURE is a portable way of 
		// indicating the failiure of a program
		return EXIT_FAILURE;
	} 
	
	// the printf function returns the number of characters on the string
	// in case of sucess, and a negative number otherwise
	if(printf("%s\n", "Hello again!") == 13) {
		puts("sucess!");
		// EXIT_SUCCESS will also terminate the program
		// we commented it out so the next boolean condition
		// can be evaluated
		// return EXIT_SUCCESS;
	}  else {
		puts("failiure!");
	 	return EXIT_FAILURE;
 	}

	// here EOF can be used to check failiure, for the printf procedure
	// returns a negative value in case of failiure and EOF is defined
	// as a negative integer
	if(printf("%s\n", "Hello once more") == EOF) {
		puts("failiure");
		return EXIT_FAILURE;
	} else {
		puts("sucess");
		return EXIT_SUCCESS;
	} 
	
}
