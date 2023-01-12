#include <unlistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdiout
 * @c: character to print
 * Return: on success 1.
 * on error, -1 is returned, and error is appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
