#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void norma(int x, int y, int n, int o, char *operador)
{
	if(strcmp(operador, "INC(R1)") == 0 || strcmp(operador, "INC(R2)") == 0 || strcmp(operador, "INC(R3)") == 0 || strcmp(operador, "INC(R4)") == 0)
	{
		while(y > 0)
		{
			x = x + 1;
			printf("\nR%d:%d, ", n, x);
			
			y = y - 1;
			printf("R%d:%d\n", o, y);
		}
		
		printf("\nA soma deu: %d\n", x);
	}
	
	if(strcmp(operador, "DEC(R1)") == 0 || strcmp(operador, "DEC(R2)") == 0 || strcmp(operador, "DEC(R3)") == 0 || strcmp(operador, "DEC(R4)") == 0)
	{
		while(y > 0)
		{
			x = x - 1;
			printf("\nR%d:%d, ", n, x);
			
			y = y - 1;
			printf("R%d:%d\n", o, y);
		}
		
		printf("\nA diferenca deu: %d\n", x);
	}
	
	if(strcmp(operador, "ZERO?(R1)") == 0 || strcmp(operador, "ZERO?(R2)") == 0 || strcmp(operador, "ZERO?(R3)") == 0 || strcmp(operador, "ZERO?(R4)") == 0)
	{
		if(x == 0) printf("\nO valor armazenado eh: %d\n", x);
	}
}

int main()
{
	FILE *arq;
	arq = fopen("Norma.txt", "r");
  
	int R1 = 0, R2 = 0, R3 = 0, R4 = 0, x = 0, y = 0, a = 0, b = 0;
	char registrador[10] = "", operacao[20] = "";
	
	fscanf(arq, "%s", &registrador);
	
	if(strcmp (registrador, "R1") == 0) 
	{
		fscanf(arq,"%d", &R1);
	    x = 1, a = R1;
    }
    
	if(strcmp (registrador, "R2") == 0) 
	{
		fscanf(arq,"%d", &R2);
		x = 2, a = R2;
	}
	
	if(strcmp (registrador, "R3") == 0) 
	{
		fscanf(arq,"%d", &R3);
		x = 3, a = R3;
	}
	
	if(strcmp (registrador, "R4") == 0) 
	{
		fscanf(arq,"%d", &R4);
		x = 4, a = R4;
	}
	
	fscanf(arq, "%s", &registrador);
	
	if(strcmp (registrador, "R1") == 0) 
	{
	    fscanf(arq,"%d", &R1);
	    y = 1, b = R1;
    }
    
	if(strcmp (registrador, "R2") == 0) 
	{
		fscanf(arq,"%d", &R2);
		y = 2, b = R2;
	}
	
	if(strcmp (registrador, "R3") == 0) 
	{
		fscanf(arq,"%d", &R3);
		y = 3, b = R3;
	}
	
	if(strcmp (registrador, "R4") == 0) 
	{
		fscanf(arq,"%d", &R4);
		y = 4, b = R4;
	}
	
	fscanf(arq, "%s", &operacao);
	
	norma(a, b, x, y, operacao);
}
