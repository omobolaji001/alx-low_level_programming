#include "main.h"

/**
 * create_file - a function that creates file.
 * @filename: the name of the file to be created.
 * @text_content: string to write to the file.
 *
 * Return: returns 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t wrt;
	int file_d;
	int i;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY |O_TRUNC, 00600);

	if (file_d == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	wrt = write(file_d, text_content, 1);
	

	if (wrt == -1)
		return (-1);

	close(file_d);

	return (1);
}
