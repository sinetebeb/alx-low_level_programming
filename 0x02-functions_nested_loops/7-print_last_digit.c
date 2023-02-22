#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: the number is going to be printed
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{

	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
