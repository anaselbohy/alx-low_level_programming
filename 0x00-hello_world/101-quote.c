#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 *Description: dont use printf or puts
 *
 * Return: Always 1 (not Success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
