#include "main.h"
/**
*main - print alphabets followed by new line
*Return: Always 0 (success)
*/
int main(void)
{
int v;
for (v = 97; v < 123; v++)
{
char y = v + '0';
_putchar(y);
}
return (0);
}
