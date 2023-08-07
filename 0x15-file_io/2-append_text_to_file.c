#include "main.h"

/**
 * append_text_to_file - The function appends text at the end of a file
 * @filename: filename.
 * @text_content: refers to added content.
 * Scylla-salazar
 * Completed on Aug 2023
 * Return: 1 if the file exists. -1 if the fails does not exist or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd1;
	int nletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd1 = open(filename, O_WRONLY | O_APPEND);

	if (fd1 == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd1, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd1);

	return (1);
}
