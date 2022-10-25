#include <unistd.h>

/**
 * _putchar - this writes character c to stdout
 * @c: char to be printed
 * Return: Shows success
 */

int _putchar.c(char c)
{
	return (write(1, &c, 1));
}
