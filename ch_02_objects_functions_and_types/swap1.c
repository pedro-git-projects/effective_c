#include <stdio.h>

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	printf("swap: a = %d, b = %d\n", a, b);
}

int main(void) {
	int a = 21;
	int b = 17;

	swap(a, b);
	printf("main: a = %d, b = %d\n", a, b);
	
	return 0;
}

/* C is a call by value
 * also known as pass-by-value
 * language. This means that
 * when we provide an argument to a function
 * the value of that argument is copied into 
 * a distinc variable for the use of the function
 * so, when we tried to swap the values of a and b 
 * using our function, it didn't work
 * because we swapped the value of distinct objects.
 * thus a and b retain their original values inside main
 * */
