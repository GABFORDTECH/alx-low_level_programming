#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int limit = 4000000;
	unsigned long int first = 1, second = 2, next, sum = 0;

	while (second <= limit)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}

		next = first + second;
		first = second;
		second = next;
	}

	printf("%lu\n", sum);

	return (0);
}
