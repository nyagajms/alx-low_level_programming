#include "main.h"
#define BUFF_SIZE 1204

/**
* read_error - returns error if file_from doesn't exist or you can't read it
* @file: pointer to a file
* To see the code with comments, go to test_folders/3-cp_with_comments.c
*/

void read_error(char *file)
{
	/* dprintf prints in a file descriptor */
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
* write_error - returns an error if you can't create/write to a file_to
* @file: pointer to a file
* To see the code with comments, go to test_folders/3-cp_with_comments.c
*/
void write_error(char *file)
{
	/* dprintf prints in a file descriptor */
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
* close_error - return an error if you can't close a file descriptoy
* @file: the file descriptor value
* To see the code with comments, go to test_folders/3-cp_with_comments.c
*/
void close_error(int file)
{
	/* dprintf prints in a file descriptor */
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}

/**
* check_args - function to return error if files are NULL
* @file: pointer to a file
* @file2: pointer to another file
* To see the code with comments, go to test_folders/3-cp_with_comments.c
*/
void check_args(char *file, char *file2)
{
	if (file == NULL)
		read_error(file);
	if (file2 == NULL)
		write_error(file2);
}

/**
* main - entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 success
* To see the code with comments, go to test_folders/3-cp_with_comments.c
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, file_fread,
	    file_write, file_close, file_fclose;
	char *buffer;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	check_args(argv[1], argv[2]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		read_error(argv[1]);
	file_to = open(argv[2], O_CREAT | O_RDONLY | O_WRONLY | O_TRUNC, mode);
	if (file_to == -1)
		write_error(argv[2]);
	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (buffer == NULL)
		return (1);
	file_fread = read(file_from, buffer, BUFF_SIZE);
	if (file_fread == -1)
		read_error(argv[1]);
	while (file_fread > 0)
	{
		file_write = write(file_to, buffer, file_fread);
		if (file_write == -1)
			write_error(argv[2]);
		file_fread = read(file_from, buffer, BUFF_SIZE);
		if (file_fread == -1)
			read_error(argv[1]);
	}
	file_fclose = close(file_from);
	if (file_fclose == -1)
		close_error(file_fclose);
	file_close = close(file_to);
	if (file_close == -1)
		close_error(file_close);
	free(buffer);
	return (0);
}
