#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a sting
 * @s: string to recieve a return
 * @c: character to recieve
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}

