#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // Movimentação da Torre: 5 casas para a direita usando 'for'
    
    printf("Movimento da Torre:\n");
        for (int t = 0; t < 5; t++) {
            printf("Direita\n");
        }

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita usando 'while'
        printf("\nMovimento do Bispo:\n");
        int b = 0;
        while (b < 5) {
            printf("Cima, Direita\n");
            b++;
        }

    // Movimentação da Rainha: 8 casas para a esquerda usando 'do-while'
        printf("\nMovimento da Rainha:\n");
        int r = 0;
        do {
            printf("Esquerda\n");
            r++;
        } while (r < 8);
        
        return 0;
}
