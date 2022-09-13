#include"main.h"
/**
* main - Entry point
*
* Description:  prints _putchar using putchar prototype
*
* Return: Always 0 (Success)
*/
nt main(void)
{
char str[] = "_putchar";
nt ch;
for (ch = 0; ch < 8; ++ch)
_putchar(str[ch]);
_putchar('\n');
return (0);
}
