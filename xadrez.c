#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    const int mov_bispo = 5;
    const int mov_torre = 5;
    const int mov_rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("movimento do bispo (diagonal superior direita) \n");
    for (int i = 1; i <= mov_bispo; i++){
        printf("Bispo se moveu %d casas na diagonal superior direita \n", i);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("movimento da torre \n");
    for (int i = 1; i <= mov_torre; i++){
        printf("Torre se moveu %d casas para direita \n", i);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("movimento da rainha para esquerda \n");
    
    
    for (int i = 1; i <= mov_rainha; i++){
        printf("Rainha se moveu %d casas para esquerda \n", i);
    }


    return 0;
}
