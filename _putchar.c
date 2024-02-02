#include <unistd.h>
/**
 * _putchar - write to the stdout
 * @c: character
 * Return: 1 success and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
