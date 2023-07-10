#include "main.h"

/**
 * read_textfile - A funtion that reads a text file and prints the letters
 * @filename: filename.
 * @letters: refers to numbers of letters printed.
 * Scylla-salazar - 10th July 2023
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd1;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd1 = open(filename, O_RDONLY);

	if (fd1 == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd1, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd1);

	free(buf);

	return (nwr);
}

