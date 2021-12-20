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
