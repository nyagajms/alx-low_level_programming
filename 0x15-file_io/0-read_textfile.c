#include "main.h"

/**
* read_textfile - reads a text file and prints
* @filename: points to file that we will be receiving
* @letters: size of letters to read in
* Return: the readFile
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0, readFile = 0, writeFile = 0, closeFile;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	readFile = read(file, buffer, letters);

	if (readFile == -1)
		return (0);

	writeFile = write(STDOUT_FILENO, buffer, readFile);

	if (writeFile == -1)
		return (0);

	closeFile = close(file);

	if (closeFile == -1)
		return (0);

	free(buffer);
	return (readFile);
}
