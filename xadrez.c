#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Função recursiva para movimentar a Torre (5 casas para a direita)
    void moverTorre(int casas) {
        if (casas == 0) return;
        printf("Direita\n");
        moverTorre(casas - 1);
    }

    // Função recursiva para movimentar a Rainha (8 casas para a esquerda)
    void moverRainha(int casas) {
        if (casas == 0) return;
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }

    // Função recursiva para movimentar o Bispo, combinada com loops aninhados
    void moverBispo(int vertical, int horizontal) {
        if (vertical == 0) return;
        
        // Movimento horizontal dentro do movimento vertical
        for (int h = 0; h < horizontal; h++) {
            printf("Cima, Direita\n");
        }
        
        moverBispo(vertical - 1, horizontal);
    }

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

        // Movimentação da Torre
        printf("Movimento da Torre:\n");
        moverTorre(5);

        // Movimentação do Bispo
        printf("\nMovimento do Bispo:\n");
        moverBispo(5, 1);

        // Movimentação da Rainha
        printf("\nMovimento da Rainha:\n");
        moverRainha(8);

        // Movimentação do Cavalo: 2 casas para cima e 1 para a direita usando loops aninhados
        printf("\nMovimento do Cavalo:\n");
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
            if (i == 1) {
                for (int j = 0; j < 1; j++) {
                    printf("Direita\n");
                    break; // Para evitar iterações desnecessárias
                }
            }
        }
                
        return 0;
}
