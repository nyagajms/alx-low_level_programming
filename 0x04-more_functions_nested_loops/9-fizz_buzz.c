#include<stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * except multiples of three print Fizz instead of the number
 * and the multiples of five print Buzz
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if ((numbers % 3 == 0) && (numbers % 5 == 0))
		{
			printf("FizzBuzz");
		}
			else if (numbers % 3 == 0)
			{
				printf("Fizz");
			}
			else if (numbers % 5 == 0)
			{
				printf("Buzz");
			}
			else
			printf("%d", numbers);
		if (numbers < 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
