#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except for the letters :  q, e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
