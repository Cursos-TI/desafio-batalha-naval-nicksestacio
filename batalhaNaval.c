#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int i, j;

    int navioVertical[3][2] = {
        {1, 1},
        {2, 1},
        {3, 1}
    };

    int navioHorizontal[3][2] = {
        {5, 3},
        {5, 4},
        {5, 5}
    };

    int navioDiagonal1[3][2] = {
        {0, 0},
        {1, 1},
        {2, 2}
    };

    int navioDiagonal2[3][2] = {
        {7, 2},
        {8, 3},
        {9, 4}
    };

    for (i = 0; i < 3; i++) {
        tabuleiro[navioVertical[i][0]][navioVertical[i][1]] = 3;
        tabuleiro[navioHorizontal[i][0]][navioHorizontal[i][1]] = 3;
        tabuleiro[navioDiagonal1[i][0]][navioDiagonal1[i][1]] = 3;
        tabuleiro[navioDiagonal2[i][0]][navioDiagonal2[i][1]] = 3;
    }

    printf("Tabuleiro Batalha Naval:\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
