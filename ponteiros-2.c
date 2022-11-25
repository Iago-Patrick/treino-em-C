/* --------------------------------------------------------------------------------------------- */
/*
compilador:
gcc ponteiros-2.c -o ponteiro-2.exe -Wall -g -Og -lm -Wextra -ansi -pedantic-errors -DDEBUG=1
*/
/* --------------------------------------------------------------------------------------------- */

#include <stdio.h>

void soma(int *p, int a, int b);

int main (void)
{
     int a, c, b, *p1, *p2;
     a=4;
    b=3;
    p1=&a;
    p2=p1;
    *p2=*p1 + 3;
    b=b *(*p1);

    (*p2)++;

    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);
    printf("c e: %d\n", c);
    soma(&c, a, b);
    printf("c e: %d\n", c);
}

void soma(int *p, int a, int b)
{
    *p = a + b;
}
