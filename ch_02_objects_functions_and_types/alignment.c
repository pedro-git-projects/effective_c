#include "stdio.h"

struct S {
	int i; double d; char c;
};

int main(void) {
	unsigned char bad_buff[sizeof(struct S)];
	_Alignas(struct S) unsigned char good_buff[sizeof(struct S)];

	struct S *bad_s_ptr = (struct S *)bad_buff; // wrong pointer alignment
	struct S *good_s_ptr = (struct S *)good_buff; //correct pointer alignment

	printf("%p\n", (void * ) &bad_s_ptr);
    printf("%p\n", (void * ) &good_s_ptr);
}

/* Object types have alignment requirements that place restrictions
 * on the adresses at which objects of that type may be allocated
 * An alignment represents the number of bytes between successive
 * adresses at which a given object can be allocated.
 * The alignment specifier _Alignas is used to to get an stricter alignment
 * */
