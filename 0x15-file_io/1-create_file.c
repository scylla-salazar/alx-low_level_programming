#include "main.h"

/**
 * create_file - A funtion that creates a file
 * @filename: filename.
 * @text_content: Refers to content writed in the file.
 * Scylla-salazar
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd1;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd1 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd1 == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd1, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd1);

	return (1);
}

