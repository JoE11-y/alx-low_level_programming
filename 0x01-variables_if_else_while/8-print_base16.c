#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n = '0';
	int hexa = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}

	putchar('\n');
	return (0);
}
