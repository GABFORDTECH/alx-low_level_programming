#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int count = 50;
	unsigned long int first = 1, second = 2, next, i;

	printf("%lu, %lu", first, second);

	for (i = 2; i < count; i++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
