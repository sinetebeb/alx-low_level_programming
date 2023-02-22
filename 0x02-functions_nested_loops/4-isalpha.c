#include "main.h"

/**
 * _isalpha - Checks for lowercase character
 * @c:the character is to be checked
 * Return: 1 for lowercase character otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
