#include "main.h"

/**
* create_file - create a function that creates a file
* @filename: points to file that we will be receiving
* @text_content: the text that is being written
* Return: 1 if successfull
*/

int create_file(const char *filename, char *text_content)
{
	int file, writeFile, len, closeFile;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;
		writeFile = write(file, text_content, len);
	}

	if (writeFile == -1)
		return (-1);

	closeFile = close(file);

	if (closeFile == -1)
		return (-1);

	return (1);
}
