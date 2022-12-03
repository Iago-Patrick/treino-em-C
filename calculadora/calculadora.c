#include <stdio.h>
#include <string.h>
#include "biblio.h"

int main(void)
{
	num n;
	char sinal [4] = {'+','-','/','*'};

	num (*func[4])()= {soma, sub, div, mult};

	printf("digite dois numero entre um e outro pressione ENTER.\n");
	scanf("%f", &n.x);
	scanf("%f", &n.y);

	printf("digite qual operacao deseja realizar entre ( +, -, /, *)\npressione ENTER.\n");
	scanf("%s", n.operacaouser);

 	for(int i =0; i<4; i++)
	{
		if(n.operacaouser[0] == sinal[i])
		{
			n = func[i](n);	
			printf("%.2f\n",n.resultado);		
		}
	}
	
	return 0;
}

num soma( num n)
{
	n.resultado = n.x + n.y;
	return n;
}
num sub(num n)
{
	n.resultado = n.x - n.y;
	return n;
}
num mult(num n)
{
    n.resultado = n.x*n.y;
	return n;
}
num div(num n)
{
	n.resultado = n.x/n.y;
	return n;
}