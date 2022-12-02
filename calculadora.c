#include <stdio.h>

typedef struct form
{
	int c;
	int pull;
	
}formulario;

int main(void)
{
	formulario f;
	
	f.c = 5;
	f.pull = f.c + 5;
	
	
	printf("%d",f.pull);
	
	
	return 0;
}

