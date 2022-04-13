#include "main.h"
/**
 * _isalpha - checks for alphabet charachter
 * @c: takes charachter
 * Return: 1 if letter
 */
int _isalpha(int c)

{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
