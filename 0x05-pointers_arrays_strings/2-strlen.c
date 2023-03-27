#include <stdio.h>
#include "main.h"
/**
 * _strlen - counts the chars
 * @s: the pointer
 * Return: returns len
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
