#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main -
*
* Return: (0) sucess.
*/

int main(void)
{
	char *buffer = NULL;
	size_t bufferLength = 0;
	ssize_t bytesRead;
	int shouldContinue = 1;

	while(shouldContinue)
	{
		printf("$ ");
		bytesRead=getline(&buffer, &bufferLength, stdin);
		if (bytesRead == -1)
		{
shouldContinue = 0;
		}
		else
		{
			printf("%s", buffer);
		}
	}
	free(buffer);
	return (0);
}
