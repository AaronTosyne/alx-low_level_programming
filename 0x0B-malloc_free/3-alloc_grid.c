#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: input value
 * @height: input value
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **dimension;
	int w;
	int h;

	if (width <= 0 || height <= 0)
		return (NULL);
	dimension = malloc(sizeof(int *) * height);
	if (dimension == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		dimension[h] = malloc(sizeof(int) * width);
			if (dimension[h] == NULL)
			{
			for (; h >= 0; h--)

			free(dimension[h]);
			free(dimension);
			return (NULL);
			}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			dimension[h][w] = 0;
	}

	return (dimension);
}
