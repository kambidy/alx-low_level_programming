#include "main.h"
#include <string.h>

/**
 * _strchr - check
 * Description: function that locates
 * @s:string
 * @c:character
 * Return: 0
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if  (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
