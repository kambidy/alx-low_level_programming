#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatinates 2 strings
 * Description: above is the descript
 * @dest: does what it does
 * @src: does that
 * Return: returns s1 + s2
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
