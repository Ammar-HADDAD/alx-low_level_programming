#include "main.h"

/**
 * _strpbrk - searching a string 
 *
 * @s: 1st occurrence in the string
 *
 * @accept: matches one of the bytes, @NULL if not
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
