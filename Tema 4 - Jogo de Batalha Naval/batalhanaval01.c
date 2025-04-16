#include <stdio.h>

#define TAMANHO 10

int main() {
    // Define o tabuleiro e inicializa todas as posições com 0
    int tabuleiro[10][10] = {0};

    // Coloca um navio nas colunas E, F, G da linha 3 (índices 2 para linha e 4, 5, 6 para colunas)
    tabuleiro[3][5] = 3;
    tabuleiro[3][6] = 3;
    tabuleiro[3][7] = 3;
    tabuleiro[6][3] = 3;
    tabuleiro[7][3] = 3;
    tabuleiro[8][3] = 3;

    // Exibe o tabuleiro
    printf("Tabuleiro Batalha Naval:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha após cada linha do tabuleiro
    }

    return 0;
}