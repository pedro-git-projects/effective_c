#include <stdio.h>

// funtion definition for the last example
// a function definition
int max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	printf("Function types are derived types. They are derived from the return type and the number of types from the parameters. A function can't return an array\n");

	printf("When declaring a function, the function declarator specifies the name of the function and the return type.\n The declarator includes a parameter type list and a definition.\n The declaration of each parameter must include an identifier, except parameter lists of lenght 1 of void type\n");

	int f(void); // has no parameters and returns an int
	int *fip(); // no specified parameters that returns a pointer to an int
	void g(int i, int j); // returns void takes two integers
	void h(int, int); // returns void takes two integers

	printf("Specifying parameters with identifiers can be problematic if the parameter is a macro. However, providing parameter names is good practice.");

	printf("Unlike in C++, where a function like *fip will accept no arguments, in C *fip will accept any number of arguments, thus one should awlays pass void onto functions that won't recieve paramters");

	printf("A function type with a parameter type list is called a function prototype. \n A function prototype informs the compiler about the number and types of parameters a function accepts.\n This information is used to check the correctness in a function definition\n The function definition contains the actual implementation of a function\n");

	printf("Remember you can't define functions inside main. Because c doesn't allow the declaration of functions inside other functions.\n");
}
