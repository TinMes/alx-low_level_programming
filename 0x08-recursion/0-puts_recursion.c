#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @c: string to print
 */
void _puts_recursion(char *c)
{
if (*c == '\0')
{
_putchar('\n');
return;
}
_putchar(*c);
_puts_recursion(c + 1);
}
