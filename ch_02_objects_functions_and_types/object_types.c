#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>

int main(void) {
	printf("Booleans were introduced in C99 and store only 0 and 1\n");
	printf("You get declare booleans using the _Bool keyword.\n");
	printf("Including the stdbool header furhter allows you to declare booleans using te bool keyword and assign the values true and false.\n");

	_Bool boolean = 0;
	bool boolean2 = false;

	if(boolean == boolean2) {
		printf("%d, %d\n", boolean, boolean2);
	}

	return 0;
}
