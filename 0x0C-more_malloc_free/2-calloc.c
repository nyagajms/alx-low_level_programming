#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocates memory for an array using malloc
 * @nmemb: The number of memory spaces
 * @size: The size of nmemb
 * Return: returns pointer to allocated space, or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(space + i) = 0;

	return (space);
}
