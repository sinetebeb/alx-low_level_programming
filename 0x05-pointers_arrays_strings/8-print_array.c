#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers followed new line
 * @a: Array of integers
 * @a: Number of element of array to printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}

