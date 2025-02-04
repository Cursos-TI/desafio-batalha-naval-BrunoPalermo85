#include <stdio.h>

#define TAMANHO_TABULEIRO 5 // Tamanho do tabuleiro 5x5

int main() {
    // Tabuleiro representado por uma matriz 5x5
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Posicionamento dos navios
    // Navio 1 (vertical) começa em (1, 2) e ocupa 3 casas para baixo
    int navio1_x = 1, navio1_y = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1_x + i][navio1_y] = 1; // 1 representa o navio
    }

    // Navio 2 (horizontal) começa em (3, 0) e ocupa 4 casas para a direita
    int navio2_x = 3, navio2_y = 0;
    for (int i = 0; i < 4; i++) {
        tabuleiro[navio2_x][navio2_y + i] = 2; // 2 representa o segundo navio
    }

    // Exibição das coordenadas dos navios
    printf("Coordenadas do Navio 1 (Vertical):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navio1_x + i, navio1_y);
    }

    printf("\nCoordenadas do Navio 2 (Horizontal):\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d)\n", navio2_x, navio2_y + i);
    }

    // Exibição do tabuleiro para visualização
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}