#include "main.h"

/**
* get_endianness - checks the endianness
* @void: no argument
* Return: 1 if big endian and 0 if little
*/

int get_endianness(void)
{
	unsigned int i = 1;

	char *n = (char *)&i;

	if (*n)
		return (1);
	return (0);
}
