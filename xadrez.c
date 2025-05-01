#include <stdio.h>

//Desafio novato, movimentação de peças de xadrez usando loops: While, do-While e For.

int main(){
	
	// TORRE (movimento de 5 casas para a direita, usando WHILE )
	//---------------------------------------------------------------------------------------
	int i = 1; // Declaração da variavel
	
	printf("MOVIMENTO DA TORRE CINCO CASAS PARA DIREITA\n\n");
	
	while(i <= 5){ 
		
		printf("Posicao de %d para %d, --> Direita\n", i, i+1);
		i++;
	}
	//---------------------------------------------------------------------------------------
	// BISPO (movimento diagonal 5 casas para a direita e para cima, usando DO-WHILE )
	
	printf("\nMOVIMENTO DO BISBO NA DIAGONAL CINCO CASAS PARA DIREITA E PARA CIMA\n\n");
	
	i = 1; // variavel já declarada recebendo valor 1 
	
	do{
		printf("Posicao de %d direita e 1 para cima\n", i);
		i++;
		
	}while(i <= 5);
	
	//---------------------------------------------------------------------------------------
	// RAINHA (movimento horizontal 8 casas para a esquerda, usando FOR )
	printf("\nMOVIMENTO DA RAINHA NA HORIZONTAL OITO CASAS PARA ESQUERDA\n\n");
	
	for(i = 8; i >= 1; i--){
		
		printf("Posicao %d Esquerda\n", i);
	} 
		
	return 0;	
}