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

	/* Check if pointers came NULL */
	if (buffer == NULL || filename == NULL)
		return (0);

	/* Open the file and save the return in the file description */
	file = open(filename, O_RDONLY);

	/* Check if the file was opened successfully */
	if (file == -1)
		return (0);
	/* Read the content file */
	readFile = read(file, buffer, letters);

	/* Check if the file was opened successfully */
	if (readFile == -1)
		return (0);

	/* Write the file with the content obtained from readFile */
	writeFile = write(STDOUT_FILENO, buffer, readFile);

	/* Check if the file was opened successfully */
	if (writeFile == -1)
		return (0);

	/* Closing the file */
	closeFile = close(file);

	/* Check if the file was opened successfully */
	if (closeFile == -1)
		return (0);

	free(buffer);
	return (readFile);
}
