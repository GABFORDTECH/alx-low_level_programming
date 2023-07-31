#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the numbers 1 to 100 with:
 *              - "Fizz" for multiples of 3
 *              - "Buzz" for multiples of 5
 *              - "FizzBuzz" for multiples of both 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}