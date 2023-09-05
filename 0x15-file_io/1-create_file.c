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

	/* Check if the pointer came NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file and save the return in the file description */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	/* Check if the file was opened successfully */
	if (file == -1)
		return (-1);
	/* if txt_content is not null, then loop over the content */
	if (text_content != NULL)
	{
		/* for loop to get the length */
		for (len = 0; text_content[len] != '\0'; len++)
			continue;
		/* write the text_content inside the new file created */
		writeFile = write(file, text_content, len);
	}

	/* Check if the file was writed successfully */
	if (writeFile == -1)
		return (-1);

	/* Close the file when finished*/
	closeFile = close(file);

	/* Check if the file was closed successfully */
	if (closeFile == -1)
		return (-1);

	return (1);
}
