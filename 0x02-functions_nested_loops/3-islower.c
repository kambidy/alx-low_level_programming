#include "main.h"

/**
 * _islower - Prints alphabets.
 *
 * @c: is the char to be checked
 * Return: returns 0 (Success)
 */

	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
