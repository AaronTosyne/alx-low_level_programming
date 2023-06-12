#include <stdio.h>
#include "main.h"

/* @agrc: count no of arguments
 * @argv: An array of arguments
 *
 * returns 0 when succesful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
