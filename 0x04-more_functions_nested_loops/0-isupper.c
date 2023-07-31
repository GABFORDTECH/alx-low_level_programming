#include "main.h"

/**
  * _isupper - check for lower case character
  * @c: The character to be checkd
  * Return: 1 for upper or zero for anything else
  */

int _isupper(int c)
{
	if (c > 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
