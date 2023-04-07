#include "main.h"

/**
 * read_textfile - a function that reads a text and
 * and prints to the standard output.
 * @filename: name of the file to be read.
 * @letters: number of  letters it should read.
 *
 * Return: actual number of letters it reads or 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t rd;
	ssize_t wrt;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(size_t) * (letters));
	if (buffer == NULL)
		return (0);

	rd = read(file_d, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	if (wrt == -1)
		return (0);

	close(file_d);

	free(buffer);

	return (wrt);
}
