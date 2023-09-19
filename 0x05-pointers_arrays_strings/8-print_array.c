#include <stdio.h>
#include "main.h"

/**
 * print_array - printing n int of an array of integers
 * followed \n
 * @a: the array
 * @n: number of ints to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
