#include "main.h"


/**
 * set_bit - sets a bit index to 1
 * @n: pointer number to change
 * @index: index set 1
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
