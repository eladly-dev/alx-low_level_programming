#include <stdio.h>
/*
 *Entry point
 */int main(void)
{
int i = 48; /* 0 in ascii */

while (i < 58) /* : after 9 in ascii */
{
putchar(i);
if (!(i == 57))
{
putchar(44); /* , in ascii */
putchar(32); /* space in ascii */
}
i++;
}
putchar('\n');
return (0);
}
