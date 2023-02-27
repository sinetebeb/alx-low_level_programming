#include "main.h"
#include <stdio.h>

/**
 * print_array - P rints n elements of array on integers
 * @a: Array of integers
 * @n: Number of elements of array to print
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
