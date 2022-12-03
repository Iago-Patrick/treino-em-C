#ifndef ESTRUTURA

typedef struct numero
{
	float x;
	float y;
	float resultado;
	char operacaouser[2];
} num;

num soma(num n);
num mult(num n);
num div(num n);
num sub(num n);

#endif
