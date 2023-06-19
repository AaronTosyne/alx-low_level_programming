#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: no of elements
 * @size: no of bytes
 *
 * Return: pointer to an allocated memory of an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *arr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(nmemb * size);

	if (memo == NULL)
		return (NULL);

	arr = memo;

	for (x = 0; x < (size * nmemb); x++)
		arr[x] = '\0';

	return (memo);
}

