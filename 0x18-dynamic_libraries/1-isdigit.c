#include "main.h"
#include <unistd.h>

/**
 * _isdigit - check description
 * Description: checks for a digit
 * @c:input
 * Return: 1
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}

return (0);
}
