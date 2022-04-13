#include <unistd.h>

/**
 * _putchar - write the charachter  c to stdout
 * @c: The charchter to print
 *
 * Return: Success 1
 * on error, -1 is returned
 */
int _putchar(char c)

{
return (write(1, &c, 1));
}
