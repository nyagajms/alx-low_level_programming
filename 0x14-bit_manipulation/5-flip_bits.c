#include "main.h"

/**
* flip_bits - # of bits you would need to flip to get fr one # to another
* @n: takes in an integer
* @m: takes in the 2nd integer to compare
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter;
	int index = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int num = n ^ m;

	for (counter = 0; index >= 0; index--)
	{
		if (((num >> index) & 1) == 1)
		{
			counter += 1;
		}
	}
	return (counter);
}
