#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: dest positions
 * @src: source positins
 * @n: size of byte
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
