#include "main.h"
#include <unistd.h>

/**
 * _putcher - writes char c
 *
 * Return: returns 0
 */

int _putcher(char c)
{
	return (write(1, &c, 1));

}
