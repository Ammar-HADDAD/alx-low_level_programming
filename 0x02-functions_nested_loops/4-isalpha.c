#include "main.h"

/**
 * _isalpha - Checking if a character is alphabetic.
 * @c: Is The character to be checked.
 *
 * Return: 1 In case letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
