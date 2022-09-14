#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start printing from
 * Return: void
 */

void print_to_98(int n)
{
	int i, j, k;

	if (n > 98)
	{
		while (n >= 98)
		{
			if (n >= 100)
			{
				i = n / 100;
				j = (n / 10) - 10;
			}
			else
			{
				i = 0;
				j = n / 10;
			}
			k = n % 10;
			if (i > 0)
				_putchar(i + '0');
			_putchar(j + '0');
			_putchar(k + '0');
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
	else
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				_putchar('-');
				if ((n * -1) >= 100)
				{
					i = (n / 100) * -1;
					j = ((n / 10) * -1) - 10;
				}
				else
				{
					i = 0;
					j = (n / 10) * -1;
				}
				k = (n % 10) * -1;
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(k + '0');
			}
			else
			{
				j = n / 10;
				k = n % 10;
				if (j > 0)
					_putchar(j + '0');
				_putchar(k + '0');
			}
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
}
