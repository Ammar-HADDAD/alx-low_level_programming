#include "main.h"

/**
 * _islower - Checking if a character is lowercase.
 * @c: Is character to be checked.
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
