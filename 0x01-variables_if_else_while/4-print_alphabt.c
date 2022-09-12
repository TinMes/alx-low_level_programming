#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int c;
for (c = 97; c <= 122; c++)
{
if (c != 101 && c != 113)
putchar(c);
}
putchar(10);
return (0);
}
