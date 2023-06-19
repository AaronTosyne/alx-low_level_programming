#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: input value
 * @s2: input value
 * @n: bstr_2tes to be copied
 *
 * Return: pointer to s1 and n number of bstr_2tes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len_1 = 0, len_2 = 0;
	unsigned int str_1 = 0;
	unsigned int str_2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_1] != '\0')
		len_1++;

	while (s2[len_2] != '\0')
		len_2++;

	if (n >= len_2)
		n = len_2;

	concat = malloc(sizeof(char) * (len_1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (; str_1 < len_1; str_1++)
		concat[str_1] = s1[str_1];

	for (; str_2 < n; str_2++, str_1++)
		concat[str_1] = s2[str_2];

	concat[str_1] = '\0';

	return (concat);
}


