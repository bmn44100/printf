#include "main.h"

/**
 * _strlen - gets the length of a string
 * @string: string
 * Return: length of the string (integer)
 */

int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}
