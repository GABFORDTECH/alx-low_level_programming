#include "main.h"
#include <stdio.h>

/**
  * print_rev - function that print a string, in reverse.
  * @s: the use string reference pointer
  * Return: 0
  */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		putchar(s[start]);
	putchar('\n');
}
