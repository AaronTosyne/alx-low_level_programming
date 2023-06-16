#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all the arguments
 *
 * @ac: input value
 * @av: pointer
 *
 * Return:  a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int lenght = 0, i, x, y = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (x = 0; av[i][x] != '\0'; x++)
	lenght++;
	lenght++;
	}
	str = malloc(sizeof(char) * (lenght + 1));

	if (str == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			str[y] = av[i][x];
			y++;
		}
		str[y] = '\n';
		y++;
	}
	str[y] = '\0';
	return (str);
}
