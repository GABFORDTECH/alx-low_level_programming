#include <unistd.h>

/**
  * _putchar
  * @c: The character to print
  *
  * Return: On success 1.
  * On error, -1 is returned, and errnd is set approprately.
  */
int _puthcar(char c)
{
	return (write(1, &c, 1));
}