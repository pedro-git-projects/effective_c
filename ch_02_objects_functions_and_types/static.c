#include <stdio.h>

void increment(void) {
	static unsigned int counter = 0;
	counter++;
	printf("%d ", counter);
}

void nonStaticIncrement(void) {
	unsigned int nonStaticCounter = 0;
	nonStaticCounter++;
	printf("%d ", nonStaticCounter);
}

int main(void) {
	for (int i = 0; i < 5; i++) {
		increment();
	}

	puts("\n");

	for (int i = 0; i < 5; i++) {
		nonStaticIncrement();
	}

	puts("\n");

	return 0;
}

/* We initialize the static variable counter to 0 once
 * at program startup, and increment it each time the
 * increment function is called.
 * The lifetime of counter is the entire execution of the program
 * and it will retain the last stored value during its lifetime.
 * Another way to achieve this same behaviour was to declare counter
 * into the file scope.
 * We should however try to limit scope whenever possible.
 * */

/* static objects must be initialized with
 * a constat value and not a variable.
 * That is, literal constants such as 1, 'a', 0xFF
 *  enum members
 *  and result of operators such as alignof and sizeof
 *  constant qualified objects don't make the cut
 *  ie:
 *  const int j = i; 
 *  static int k = j; 
 *  will error out
 * */
