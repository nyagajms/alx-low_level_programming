#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;

	int num2;

	int num3;

	num1 = 48;
	while (num1 <= 56)
	{
		num2 = 49;
		while (num2 <= 57)
		{
			num3 = 50;
			while (num3 <= 57)
			{
				if (num2 > num1 && num3 > num2)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != 55)
					{
						putchar(',');
						putchar(' ');
					} 
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
