#include <stdio.h>
int verificacao(int num)
{		
		if(num%2==0) return 1; //par
		else return 0;
}

void main()
{
	int num;
	printf("Introduza um numero inteiro: ");
	scanf("%d",&num);
	if (verificacao(num)) printf("O numero e par!\n\n");
	else printf("O numero e impar!\n\n");
}
