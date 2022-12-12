#include <stdio.h>

/**
*  main - Prints the alphabetic in lower and upper case
*
*  Return: Always (Success)
*/

int main(void)
{
char Lower_letter;
for (Lower_letter = 'a'; Lower_letter <= 'z'; Lower_letter++)
putchar(Lower_letter);
putchar('\n');
return (0);

}
