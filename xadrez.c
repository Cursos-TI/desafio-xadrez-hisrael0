#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.
void moverBispo(int casas){
    if (casas > 0){
        printf("Cima\n");
        if(casas > 0){
            printf("Direita\n");
        }
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOVIMENTACAO_BISPO = 5;
    const int MOVIMENTACAO_TORRE = 6;
    const int MOVIMENTACAO_RAINHA = 8;
    const int MOVIMENTACAO_CAVALO = 1;

    int bispo;
    int rainha = 0;
    int torre = 0;
    int cavalo_01, cavalo_02;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\n--- Movimentacao Bispo ---\n");
    for( bispo = 0; bispo < MOVIMENTACAO_BISPO; bispo++)
    {
        printf("Cima Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n--- Movimentacao Torre ---\n");
    while (torre < 5)
    {
        printf("Direita\n");
        torre++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n--- Movimentacao Rainha ---\n");
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < MOVIMENTACAO_RAINHA);

    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n--- Movimentacao Cavalo ---\n");
    for(cavalo_01 = 0; cavalo_01 < MOVIMENTACAO_CAVALO; cavalo_01++){
        for(cavalo_02 = 0; cavalo_02 <= MOVIMENTACAO_CAVALO; cavalo_02++){
            printf("Cima\n");
        }

        printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\n--- Movimentacao Bispo com recursividade ---\n");
    moverBispo(1); //chama movimentacao do bispo.
    printf("\n--- Movimentacao Torre com recursividade ---\n");
    moverTorre(8);
    printf("\n--- Movimentacao Rainha com recursividade ---\n");
    moverRainha(8);


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}