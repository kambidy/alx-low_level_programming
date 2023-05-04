#include "main.h"


/**
 * clear_bit - sets the value bit to 0
 * @n: pointer number to change
 * @index: index bit to clear
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);


        *n = (~(1UL << index) & *n);
        return (1);
}
