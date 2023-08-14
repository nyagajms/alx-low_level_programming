#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - This function allocate memory using malloc.
* @b: unsigned input integer
* Return: A pointer to allocated memory or NULL if it fails
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
<<<<<<< HEAD

=======
	
>>>>>>> 8830209260b716aa3bb91425410215c33b4c326e
	if (s == NULL)
		exit(98);

	return (s);
}
