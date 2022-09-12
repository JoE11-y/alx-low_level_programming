#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z') /*print lowercases*/
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z') /*print uppercasese*/
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
