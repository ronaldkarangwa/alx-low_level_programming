#include <stdio.h>
#include "main.h"



/**
 * print_to_98 - prints all nutural numbers to 98
 * @n: input number to check
 *
 * Return: Nothing
 */
void print_to_98(int n)

{

if (n < 98)

{

for (; n < 98; n++)

{

printf("%d, ", n);

}

}

else if (n > 98)

{

for (; n > 98; n--)

{

printf("%d, ", n);

}

}

if (n == 98)

{

printf("%d\n", n);

}

}
