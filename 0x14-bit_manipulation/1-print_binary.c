#include "main.h"
/**
* print_binary - prints the binary representation of a number
* @n: takes in a number
*/
void print_binary(unsigned long int n)
{
	int counter = 0;
	unsigned long int copy;

	copy = n;
	while (copy > 0)
	{
		copy >>= 1;
		counter++;
	}
	if (counter != 0)
		counter--;
	while (counter >= 0)
	{
		if ((n >> counter) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		counter--;
	}
}
