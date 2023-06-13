#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *  *_strdup - function a pointer to a new string
 *  @str: input value
 *
 *  Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i, x = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		x++;

	array = malloc(sizeof(char) * (x + 1)); /*allocating memory*/

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++) /*copying the strings */
	{
		array[i] = str[i];
	}
	array[x] = '\0'; /*end the loop using EOF*/

	return (array);
}
