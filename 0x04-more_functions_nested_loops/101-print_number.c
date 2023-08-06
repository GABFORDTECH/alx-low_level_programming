#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	
	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar(i % 10 + '0');
}
