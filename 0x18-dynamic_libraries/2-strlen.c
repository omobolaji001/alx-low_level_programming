#include "main.h"
/**
 * _strlen - find length of string
 * @s: var 1
 * Return:void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
