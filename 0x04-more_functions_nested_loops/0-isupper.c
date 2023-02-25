#include <stdio.h>

/**
 * _isupper - This function checks if a letter is uppercase
 * @c: integer value of letter to be checked
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
