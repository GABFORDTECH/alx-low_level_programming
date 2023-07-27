#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int count = 98;
	unsigned long int fibonacci[count];
	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < count; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	printf("%lu", fibonacci[0]);

	for (i = 1; i < count; i++)
	{
		printf(", %lu", fibonacci[i]);
	}

	printf("\n");

	return (0);
}
