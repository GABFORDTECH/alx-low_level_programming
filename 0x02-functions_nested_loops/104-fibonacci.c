#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int prev1 = 1, prev2 = 2, next;
	int i;

	printf("%lu, %lu", prev1, prev2);

	for (i = 2; i < 98; i++)
	{
		next = prev1 + prev2;
		printf(", %lu", next);
		prev1 = prev2;
		prev2 = next;
	}

	printf("\n");

	return (0);
}
