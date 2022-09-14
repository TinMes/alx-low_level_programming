#include "main.h"
/**
* print_alphabet_x10 - prints a-z to the standard output 10 times
*/
void print_alphabet_x10(void)
{
char v;
int i;
for (i = 0; i < 10; i++)
{
for (v = 'a'; v <= 'z'; v++)
{
_putchar(v);
}
_putchar('\n');
}
}
