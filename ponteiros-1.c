/* --------------------------------------------------------------------------------------------- */
/*
compilador:
gcc ponteiros-1.c -o ponteiro-1.exe -Wall -g -Og -lm -Wextra -ansi -pedantic-errors -DDEBUG=1*/
/* --------------------------------------------------------------------------------------------- */
#include <stdio.h>

int main (void)
{
int m = 3;
int *p1 = 0;//ponteiro
int **p2=0;//ponteiro de ponteiro.


printf("\n valor de M e : %i", m);
printf("\n endereco de M e : %i", &m);

// o ponteiro a posta para o endereco citado logo tbm tem o valor da variavel.
p1 = &m;

// o ponteiro de ponteiro a ponta para o endereco de um ponteiro.
p2 = &p1;

printf("\n valor de P1 e : %i", *p1);
printf("\n o endereco que esta em P1 e : %i", p1);
printf("\n novo valor de M e : %i", m);

printf("\n valor em P2 e : %i", **p2);

 return 0;

}
