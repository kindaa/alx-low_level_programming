#include <stdio.h>
#include "main.h"
/**
 * main - function
 * Description: prints alphabet lowercase
 * return: 0
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
