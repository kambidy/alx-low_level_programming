#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps values betweeen variables
 * Description: swaps values
 * @a: value
 * @b: value
 * Return: reurns a and b
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
