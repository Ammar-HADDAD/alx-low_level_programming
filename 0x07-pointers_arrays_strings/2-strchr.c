#include "main.h"

/**
 * _strchr - locating a character in a string
 *
 * @c: occurrence of the char
 *
 * @s: in the string
 *
 * Return: a pointer to the first time where the char appears
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
