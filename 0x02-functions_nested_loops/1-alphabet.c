#include "main.h"

/**
 * print_alphabet - Printing all of the alphabets in lowercase with a new line at the end
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
