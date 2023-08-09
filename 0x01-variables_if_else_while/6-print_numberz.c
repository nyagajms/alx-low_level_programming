#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	num = 0;
	while(num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
