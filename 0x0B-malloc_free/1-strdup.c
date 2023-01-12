#include "main.h"

/**
<<<<<<< HEAD
 * _strdup - array for prints a string
 * @str: array of elements
=======
 * _strdup - copy
 * @str: pointer to string
>>>>>>> 789e69c8c055a1983678b19d87317ed9d4a13f40
 * Return: pointer
 */

char *_strdup(char *str)
{
<<<<<<< HEAD
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
=======
	char *s;
	int i = 0, j;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		s[j] == str[j];
	}
	return (s);
>>>>>>> 789e69c8c055a1983678b19d87317ed9d4a13f40
}
