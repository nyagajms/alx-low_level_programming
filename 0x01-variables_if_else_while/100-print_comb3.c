#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int num1;

	int num2;


	num1 = 48;

	while (num1 <= 56)
	{
		while (num2 <= 57)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
