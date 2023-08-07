#include "main.h"
/**
  * _strcmp -  compares two strings
  * @s1: parameter1
  * @s2: parameter2
  * Return: 0
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);

		} else if (s2[i] != s1[i])
		{
			return (s2[i] - s1[i]);
		}
		i++;
	}
	return (0);
}
