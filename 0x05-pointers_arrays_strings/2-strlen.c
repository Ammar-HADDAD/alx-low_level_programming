#include "main.h"

/**
 * _strlen - returning the length of a str
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
