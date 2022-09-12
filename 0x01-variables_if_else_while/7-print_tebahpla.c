#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char let = 'z';

	while (let >= 'a')
	{
		putchar(let);
		let--;
	}

	putchar('\n');
	return (0);
}
