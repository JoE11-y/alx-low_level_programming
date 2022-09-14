#include "main.h"

/**
 * _isalpha - checks if chars is aplhabet
 * @c: char val
 * Return: 1 if c is a letter, lowercase or uppercaser, and 0 if otherwise
 */

int _isalpha(int c)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z' && j <= 'Z')
	{
		if (c == i || c == j)
			return (1);
		i++;
		j++;
	}

	return (0);
}
