#include <stdio.h>

//Desafio mestre, movimentação de peças de xadrez usando loops recursivos
// coloquei as funções void no final só pra ver se funciona uma vez que main é uma estrutura de inicio conforme ensinam. (funcionou)
// não sei se é correto assim

void movTorre(int numt)
{
	if(numt > 0)
	{
		movTorre(numt - 1); // A cada chamada da propria função diminui em 1 o valor do parametro que é = 5, encerrando enquanto for > 0 e < 5
		printf(" de %d para %d, a Direita\n", numt, numt+1); // a variavel numt + 1 é somente para demonstrar o movimento
																	//	da torre da posição original para a direita no terminal
	}
	
}
void movBispo(int numB)
{
	if(numB > 0)
	{
		movBispo(numB - 1); // A cada chamada da propria função diminui em 1 o valor do parametro que é = 5, encerrando enquanto for > 0 e < 5
		printf(" de %d para %d para cima e a direita\n", numB, numB+1); // a variavel numB + 1 é somente para demonstrar o movimento
																	//	do bispo da posição original para a direita no terminal
	}
	
}
void moverBaixo(int mov) //movimento do cavalo com opção
{
    if (mov > 0) {
        printf("Baixo\n");
        moverBaixo(mov - 1);
    }
}

void moverEsquerda(int mov) //movimento do cavalo com opção
{
    if (mov > 0) {
        printf("Esquerda\n");
        moverEsquerda(mov - 1);
    }
}

int main()
{
	
	// TORRE (movimento de 5 casas para a direita, usando estrutura recursiva )
	//---------------------------------------------------------------------------------------
	int posT = 5; // Declaração da variavel (parâmetro, não é posição da torre)
	
	printf("MOVIMENTO DA TORRE CINCO CASAS PARA DIREITA\n\n");
	printf("Sai\n");
	movTorre(posT);
	
	//---------------------------------------------------------------------------------------
	// BISPO (movimento diagonal 5 casas para a direita e para cima, usando DO-WHILE )
	
	printf("\nMOVIMENTO DO BISBO NA DIAGONAL CINCO CASAS PARA DIREITA E PARA CIMA\n\n");
	
	int posB = 5; // variavel i recebendo valor 1 
	
	printf("Sai\n");
	movBispo(posB);
		
	
	
	//---------------------------------------------------------------------------------------
	// RAINHA (movimento horizontal 8 casas para a esquerda, usando FOR )
	printf("\nMOVIMENTO DA RAINHA NA HORIZONTAL OITO CASAS PARA ESQUERDA\n\n");
	int i, mov;
	
	for(i = 8; i >= 1; i--) //pressupôe que a rainha esteja na coluna 8
	{
		
		printf("Posicao %d Esquerda\n", i);
	} 
		
	// Movimento com do-while e pergunta ao usuário
    int movCavalo;
    
    printf("\nMOVIMENTO DO CAVALO COM LOOP DO-WHILE\n\n");

    do
	{
        moverBaixo(2);
        moverEsquerda(1);

        printf("Deseja movimentar o cavalo novamente? 1 - sim | 0 - nao\n");
        scanf("%d", &movCavalo);
        printf("\n");

    } while (movCavalo == 1);

    printf("Encerrando movimento do cavalo.\n");
    return 0;
		
}
