#include "main.h"


/**
 * get_bit - returns the bit in a decimal number
 * @n: number search
 * @index: index of bit
 *
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
