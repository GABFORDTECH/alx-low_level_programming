#include "main.h"
/**
  * leet - encodes a string into 1337
  * @str: parameter
  * Return: 0
  */
char *leet(char *str)
{
	int i, j;

	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a1[j])
				str[i] = a2[j];
		}
	}
	return (str);
}
