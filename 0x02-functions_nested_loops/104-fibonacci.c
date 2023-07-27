#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
    int count = 98;
    unsigned long int *fibonacci = (unsigned long int *)malloc(count * sizeof(unsigned long int));

    if (fibonacci == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    fibonacci[0] = 1;
    fibonacci[1] = 2;

    for (int i = 2; i < count; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    printf("%lu", fibonacci[0]);

    for (int i = 1; i < count; i++)
    {
        printf(", %lu", fibonacci[i]);
    }

    printf("\n");

    free(fibonacci);
    return 0;
}
