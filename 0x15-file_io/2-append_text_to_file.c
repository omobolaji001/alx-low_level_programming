#include "main.h"

/**
 * append_text_to_file - a function that appends text to the end of a file.
 * @filename: name of the file to be append
 * @text_content: string to add at the end of the file.
 *
 * Return: 1 on success, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wrt;
        int file_d;

        int i = 0;

        if (filename == NULL)
                return (-1);

        file_d = open(filename, O_WRONLY |O_APPEND);

        if (file_d == -1)
                return (-1);
	else
		return (1);

	if (text_content)
	{
		while (text_content[i] != '\0')
        	{
                	wrt = write(file_d, text_content, 1);
                	i++;
        	}

        	if (wrt == -1)
                	return (-1);
	}

        close(file_d);

        return (1);
}
