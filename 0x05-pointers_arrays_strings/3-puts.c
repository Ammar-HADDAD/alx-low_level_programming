#include "main.h"

/**
 * _puts - printing a str
 * @str: pointer to the str
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
