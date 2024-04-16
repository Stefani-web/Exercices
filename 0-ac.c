#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all the arguments
 * @av: is a NULL terminated array of strings
 * @ac: is the number of items in av
 *
 * Return: 0 (success)
 */


int main(int __attribute__((unused)) ac, char **av)
{
	while (*av)
		{
			printf("%s\n", *av);
			av++;
		}
		return (0);
}
