#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, sum;

	printf("%lu, %lu", fib1, fib2);

	for (int count = 2; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	printf("\n");

	return (0);
}
