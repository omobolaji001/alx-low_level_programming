#include "main.h"
/**
 * puts_half - print to stdout
 * @str: var 1
 * Return:void
 */
void puts_half(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
