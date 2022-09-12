#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}

		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
