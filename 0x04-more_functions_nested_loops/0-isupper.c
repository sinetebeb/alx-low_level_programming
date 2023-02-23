nclude "main.h"

/**
 * _isupper - Checks for uppercase character
 * @x: Number is going to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
