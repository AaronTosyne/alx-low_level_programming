#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if ERROR such as symbols that are not numbers,
 * 0 if nothing is passed
 */

int main(int argc, char *argv[])
{
int arg1, arg2;
int sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (arg1 = 1; arg1 < argc; arg1++)
{
for (arg2 = 0; argv[arg1][arg2] != '\0'; arg2++)
{
if (argv[arg1][arg2] < '0' || argv[arg1][arg2] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[arg1]);
}
printf("%d\n", sum);
return (0);
}

