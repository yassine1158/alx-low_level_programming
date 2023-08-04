#include <stdio.h>

/**
 * main-print number of arguments passed
 * @argc:number of commandline arguments.
 * Return:0-success, non-zero-fail.
*/

int main(int argc, char *argv[] _attribute_((unsed)))
{
	printf("%d\n", argc - 1);
	return (0);
}
