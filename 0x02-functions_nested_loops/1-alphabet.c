#include "main.h"
/**
*print_alphabet - print alphabets followed by new line
*Return: Always 0 (success)
*/
void print_alphabet(void)
{
char v;
for (v = 'a'; v <= 'z'; v++)
{
_putchar(v);
}
_putchar(10);
}
