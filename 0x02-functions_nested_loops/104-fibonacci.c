#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int first = 1, second = 2, next;
	int count = 2;

	printf("%lu, %lu", first, second);

	while (count < 98)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
		count++;
	}

	printf("\n");

	return (0);
}
