#include <stdio.h>
#include "main.h"
/**
 * main - function
 * description - prints alphabet lowercase
 * return - 0 
 */
void print_alphabet(void)
{
    char c;
    c = 'a';
    while(c <= 'z')
    {
        _putchar(c);
        c++;
    }
    _putchar('\n');
    return (0);
}
