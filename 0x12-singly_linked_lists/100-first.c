#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
<<<<<<< HEAD
}
=======
}
>>>>>>> 977db24706100f7d11bfd4efb11c8c47a328000f
