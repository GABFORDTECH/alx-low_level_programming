#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This function writes a message to the standard error.
 *              The message is "and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: Always returns 1 to indicate an error.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	     sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19") - 1);
	return (1);
}
