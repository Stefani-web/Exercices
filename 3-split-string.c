#include <stdio.h>
#include <string.h>

void split_string(const char *str, const char *delimiter)
{
	int wordStart = 0;
	int wordEnd = 0;
	int index;

	while (str[wordEnd] != '\0')
	{
		if (str[wordEnd] == delimiter[0])
		{
			for (index = wordStart; index < wordEnd; index++)
			{
				printf("%c", str[index]);
			}
			printf("\n");

			wordStart = wordEnd + 1;
		}
		wordEnd++;
	}

	for (index = wordStart; index < wordEnd; index++)
	{
		printf("%c", str[index]);
	}
	printf("\n");
}

int main(void)
{
	char str[] = "strtok est une fonction très utile pour découper une chaîne de caractères en morceaux";
	char delimiter[] = " ";

	split_string(str, delimiter);

	return 0;
}
