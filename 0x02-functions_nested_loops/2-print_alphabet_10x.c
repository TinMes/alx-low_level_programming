#include "main.h"
/**
 * print_alphabet_x10 - prints a-z to the standard output 10 times
 */
void print_alphabet_x10(void)
{
char v;
int i;
for (v = 'a'; v <= 'z'; v++)
{
for (i = 0; i < 10; i++)
{
_putchar(v);
}
_putchar('\n');
}
}
