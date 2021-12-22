#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>
#include <wchar.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	////////////////
	// Booleans
	///////////////
	
	printf("Booleans were introduced in C99 and store only 0 and 1\n");
	printf("You get declare booleans using the _Bool keyword.\n");
	printf("Including the stdbool header furhter allows you to declare booleans using te bool keyword and assign the values true and false.\n");

	_Bool boolean = 0;
	bool boolean2 = false;

	if(boolean == boolean2) {
		printf("The _Bool = %d and bool = %d are equal\n", boolean, boolean2);
	}

	//////////////
	// Characters
	//////////////

	printf("There are three character types:\n");
	printf("char, signed char and unsigned char.\n");
	char c = 'c';
	unsigned char nosign = '1';
	signed char withsign =  '1';
	printf("char,under the hood, is no more than an integer value, this is why there is char, %c, unsigned char, %d, and signed char %d\n", c, withsign, nosign);
	printf("Even tough they're integers, chars are used to represent character data, each char implementation must represent a minimum set of characters known as basic execution character set. As this is not enough to almost any other language that is not english, we can add wchar.h in order to acess the wide character type\n");	
	
	wchar_t *s;
	s = (wchar_t *) malloc(sizeof(wchar_t)*2);
	s[0] = 0x00e9;
	s[1] = 0;

	// setting local to UTF-8 for the wide char example	
	setlocale(LC_ALL, "");

	printf("%ls, não é fácil utilizar um wide char\n", s);
	free(s);

	//////////////
	// Integers
	/////////////
	
	printf("There are six signed integer types:\n");

	signed char sc = - 2;
	short small = - 1;
	int integer = - 1000;
	long big = - 100000;
	long long bigger = - 100000000;

	printf("%d, %d, %d, %ld, %lld\n", sc, small, integer, big, bigger);
	
	printf("And there are the correspondent unsigned types:\n");
	unsigned char us = 2;
	unsigned short us_small = 1;
	unsigned int uns_integer = 1000;
	unsigned long uns_big = 100000;
	unsigned long long uns_long_long = 100000000;

	printf("%u, %u, %u, %lu, %llu\n", us, us_small, uns_integer, uns_big, uns_long_long);

	return 0;
}
