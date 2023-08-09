#include <stdio.h>
/**
 * main - prints alphabet in lowercase except q and e, followed by a new line.
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
