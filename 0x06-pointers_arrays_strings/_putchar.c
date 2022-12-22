#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printd
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (writed(1, &c, 1));
}
