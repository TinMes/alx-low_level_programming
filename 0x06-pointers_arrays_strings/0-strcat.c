#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: The string to be appended to dest
 * @dest: The string to which src is appended
 * Return: dest to the destination array
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
