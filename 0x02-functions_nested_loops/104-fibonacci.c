#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int fib[98];
	int count;

	fib[0] = 1;
	fib[1] = 2;

	for (count = 2; count < 98; count++)
	{
		fib[count] = fib[count - 1] + fib[count - 2];
	}

	printf("%lu", fib[0]);
	for (count = 1; count < 98; count++)
	{
		printf(", %lu", fib[count]);
	}
	printf("\n");

	return (0);
}

