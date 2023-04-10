#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an
 * unsigned int.
 * @b: binary to be converted.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);

	for (len =0; b[len]; len++)
		;

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (n);
}
