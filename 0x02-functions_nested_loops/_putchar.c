#include <unistd.h>

/**
 * _putchar writes the charachter c to stdout 
 * @c: the character to print
 *
 * Return; Success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
