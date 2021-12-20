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
}

/* Objects have a storage duration that determines their lifetime.
 * There are four storage durations:
 * automatic, static, thread and allocated.
 * Objects in file scope have static storage duration.
 * We can also declare a variable within block scope and use the
 * storage class specifier static to make it static.
 * A static variable will live trough the whole execution of the
 * program and will mantain its las stored value troughout its lifetime
 * */

/* Static objects must be initialized with a constant value, not a variable
 * constant values are such as literal constants, like 1, 'a' and 0xFF
 * enum members
 * and the results of operators like alignof sizeof
 * const qualified objects don't make the cut, so 
 *  const int j = i;
 *  static int k = j; 
 *  will error out
 * */

/* thread storage duration is outside the scope of this material
 *  allocated deals with dynamically allocated memory and 
 *  will be discussed later
 * */

