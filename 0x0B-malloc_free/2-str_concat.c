#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	char *concat;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	a = b = 0;

	while (s1[a] != '\0')
	{
	a++;
	}

	while (s2[b] != '\0')
	{
		b++;
	}

	concat = malloc(sizeof(char) * (a + b + 1));

		if (concat == NULL)
		return (NULL);

		a = b = 0;

while (s1[a] != '\0')
{
concat[a] = s1[a];
a++;
}

while (s2[b] != '\0')
{concat[a] = s2[b];
b++;
a++;
}
	concat[a] = '\0';
	return (concat);
}
