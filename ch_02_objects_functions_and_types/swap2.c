#include <stdio.h>

void swap(int *pa, int *pb) { // pa => a:7 pb => b:21
	int t = *pa; // t:7	
	*pa = *pb; // pa => a:21 pb => b:21 
	*pb = t; // pa => a:21 pb=> b:7
	return;
}

int main(void) {

	int a = 7; // a:7
	int b = 21; // b:21

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b); // a:21 b:7
	
}

/* To correct the behaviour of our swap function
 * we now use the indirection (*) operator
 * to both, declare our pointers
 * and dereference them
 * When used in a function definition, * acts as 
 * part of a pointer declarator, indicating the parameter is 
 * a pointer to an object or function of a certain type.
 * In our swap function, both parameters are integer pointers.
 * When used in an expression within the function, the * operator
 * dereferences the pointer to the object.
 * When we call the swap function we must use the & operator, 
 * so as to pass the adress of our integers, and not their value
 * */

/* Upon entering the main block, a and b are initialized to 7 and 21
 * respectively. The program then takes the adresses of these objects
 * and passes the, to the swap function as arguments.
 * Within swap the parameter pa and pb declared as pointers to int contain
 * copies of the arguments passed to swap from calling the funtion (main)
 * These adress copies refer to the same objets, so when they're swapped
 * the contents of the original objects are also swapped
 * This simulates pass by reference
 * by generating object adresses, 
 * passing those by value and then dereferencing the copied adresses
 * to access the original objects
 * */
