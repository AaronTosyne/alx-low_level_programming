#include <stdio.h>
#include "main.h"

/**
 * @argc: count no of arguments
 * @argv: An array of arguments
 * @main: to print the name of a file
 *
 * returns 0 when succesful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
