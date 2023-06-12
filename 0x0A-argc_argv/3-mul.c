#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])

{
int mul;

if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
