#include <stdio.h>

int main() {
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

    printf("Coordenadas do Navio Vertical:\n");
    printf("Parte 1: X = %d, Y = %d\n", navioVertical[0][0], navioVertical[0][1]);
    printf("Parte 2: X = %d, Y = %d\n", navioVertical[1][0], navioVertical[1][1]);
    printf("Parte 3: X = %d, Y = %d\n", navioVertical[2][0], navioVertical[2][1]);

    printf("\nCoordenadas do Navio Horizontal:\n");
    printf("Parte 1: X = %d, Y = %d\n", navioHorizontal[0][0], navioHorizontal[0][1]);
    printf("Parte 2: X = %d, Y = %d\n", navioHorizontal[1][0], navioHorizontal[1][1]);
    printf("Parte 3: X = %d, Y = %d\n", navioHorizontal[2][0], navioHorizontal[2][1]);

    return 0;
}
