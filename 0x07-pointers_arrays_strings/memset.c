#include <stdio.h>
#include "main.h"

/**
 * _memset - fill mem
 * @s: stredd
 * @b: val
 * @n: num bytes
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
