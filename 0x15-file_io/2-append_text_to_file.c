#include "main.h"

/**
* append_text_to_file - appends a text at the end of a file
* @filename: points to file that we will be receiving
* @text_content: the text that is being written
* Return: 1 if success
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, writeFile, closeFile, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);

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
