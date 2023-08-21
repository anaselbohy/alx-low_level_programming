#include <stdio.h>

/**
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	_putchar('\n');
}
