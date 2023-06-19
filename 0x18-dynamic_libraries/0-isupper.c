#include "main.h"
#include <unistd.h>

/**
 * _isupper - check description
 * Description: check
 * @c:input
 * Return: 1
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
