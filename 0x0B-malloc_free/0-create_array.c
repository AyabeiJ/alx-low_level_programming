#include "main.h"

/**
 * create_array - array for prints a string
 * @size: number elements array
 * @c: char
 * Return: printer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
<<<<<<< HEAD
=======

>>>>>>> 789e69c8c055a1983678b19d87317ed9d4a13f40
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

<<<<<<< HEAD
	/*Define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
	return (NULL);
	}
	else
	{
		position = 0;
		while (position < size) /*whle for array*/
=======
	/*Defines values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /*while for array*/
>>>>>>> 789e69c8c055a1983678b19d87317ed9d4a13f40
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
<<<<<<< HEAD
=======

>>>>>>> 789e69c8c055a1983678b19d87317ed9d4a13f40
