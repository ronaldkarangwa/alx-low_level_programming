#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print numbers from 0 to 9 on the same line
 * Return: Always (Success)
 */
int main(void)
{
char i;

for (i = '0'; i <= '9'; ++i)
putchar(i);

putchar('\n');

return (0);
}
