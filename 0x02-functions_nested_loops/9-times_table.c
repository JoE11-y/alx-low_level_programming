#include "main.h"

/**
 * times_table - print out 9 times table
 * Return: void
 */

void times_table(void)
{
	int n;
	int i;
	int mul;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			mul = n * i;

			if (i > 0)
			{
				_putchar(' ');

				if ((mul / 10) > 0)
					_putchar((mul / 10) + '0');
				else
					_putchar(' ');
			}

			_putchar((mul % 10) + '0');

			if (i < 9)
				_putchar(',');
		}

		_putchar('\n');
	}
}
