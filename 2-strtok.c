#include <stdio.h>
#include <string.h>



int main(void)
{
	char str[] = "strtok est une fonction très utile pour découper une chaîne de caractères en morceaux";
	char delimiter[] = " ";

	char *ptr = strtok(str, delimiter);

	while (ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delimiter);
	}
	printf("\n");

	return 0;
}
