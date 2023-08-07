#include "main.h"
/**
  * _strncpy -  function that copies a string
  * @dest: parameter1
  * @src: parameter2
  * @n: parameter3
  * Return: 0
  */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	s = 0;
	while (src[s] != '\0')
	{
		if (n > s)
		dest[s] = src[s];
		s++;
	}
	while (n > s)
	{
		dest[s] = '\0';
		s++;
	}
	return (dest);
}
