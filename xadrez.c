#include <stdio.h>

//Desafio novato, movimentação de peças de xadrez usando loops: While, do-While e For.

int main()
{
	
	// TORRE (movimento de 5 casas para a direita, usando WHILE )
	//---------------------------------------------------------------------------------------
	int i = 1; // Declaração da variavel
	
	printf("MOVIMENTO DA TORRE CINCO CASAS PARA DIREITA\n\n");
	
	while(i <= 5)
	{ 
		
		printf("Posicao de %d para %d, --> Direita\n", i, i+1);
		i++;
	}
	//---------------------------------------------------------------------------------------
	// BISPO (movimento diagonal 5 casas para a direita e para cima, usando DO-WHILE )
	
	printf("\nMOVIMENTO DO BISBO NA DIAGONAL CINCO CASAS PARA DIREITA E PARA CIMA\n\n");
	
	i = 1; // variavel já declarada recebendo valor 1 
	
	do
	{
		printf("Posicao de %d direita e 1 para cima\n", i);
		i++;
		
	}	while(i <= 5);
	
	//---------------------------------------------------------------------------------------
	// RAINHA (movimento horizontal 8 casas para a esquerda, usando FOR )
	printf("\nMOVIMENTO DA RAINHA NA HORIZONTAL OITO CASAS PARA ESQUERDA\n\n");
	
	for(i = 8; i >= 1; i--)
	{
		
		printf("Posicao %d Esquerda\n", i);
	} 

	printf("\nMOVIMENTO DO CAVALO PARA BAIXO E A ESQUERDA COM LOOP WHILE\n\n");
	
		int movCavalo = 1; // Nesse momento o cavalo está na primeira linha horizontal superior do tabuleiro
		
		while(movCavalo--) //loop externo, decrementando em um quando o loop interno atingir 2
		{
									
			
			for(int i = 1; i  <= 2; i++) //loop interno, o cavalo está saindo da posição original e descendo duas casas
			{
				printf("Baixo\n"); // imprime ´baixo´ duas vezes que são as casas logo abaixo da posição inicial
				
			}
			printf("Esquerda\n"); // imprime esquerda uma vez, movimento à esquerda após descer duas casas.
			
			printf("\n");
		}
		printf("MOVIMENTO CAVALO PARA BAIXO E A ESQUERDA COM LOOP FOR\n\n");
			
		for(int movCavalo = 1; movCavalo < 2; movCavalo--) // Nesse momento o cavalo está na primeira linha horizontal superior do tabuleiro
		{
		
			for(int i = 1; i  <= 2; i++) //loop interno, o cavalo está saindo da posição original e descendo duas casas
			{
				printf("Baixo\n"); // imprime ´baixo´ duas vezes que são as casas logo abaixo da posição inicial
			}
			
			printf("Esquerda\n"); // imprime esquerda uma vez, movimento à esquerda após descer duas casas.
					
			printf("\n");
			
			return 0;
		}	

	return 0;	
}