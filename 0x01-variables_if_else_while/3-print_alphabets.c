#include <stdio.h>

/**
 * main - Prints the english alphabets in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;
	char letterUP;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letterUP = 'A'; letterUP <= 'Z'; letterUP++)
		putchar(letterUP);

	putchar('\n');

	return (0);
}
