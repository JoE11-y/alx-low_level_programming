#include "main.h"

/**
 * print_alphabet_x10 - prints the aplhabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int 1 = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c < 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}