#include "main.h"

/**
 * print_last_digit - returns value of the last digit
 * @n: number
 * Return: Last digit of number n
 */

int print_last_digit(int n)
{
	if (n < 0)
		return ((n * -1) % 10);
	else
		return (n % 10);
}
