#include "main.h"

/**
 * *_memset - filling memory area with a constant byte
 * @s: memory area
 * @b: character to copy
 * @n: n times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
