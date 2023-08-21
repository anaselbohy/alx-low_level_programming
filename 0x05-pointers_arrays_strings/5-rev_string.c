#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		length++;
		end++;
	}

	for (int i = 0; i < length / 2; i++)
	{
		char temp = *(start + i);
		*(start + i) = *(end - 1 - i);
		*(end - 1 - i) = temp;
	}
}
