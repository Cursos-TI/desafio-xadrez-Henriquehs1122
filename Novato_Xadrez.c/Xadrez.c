#include <stdio.h>

int main() {
    int i = 0;
    int f = 1;

    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal superior direita
    printf("\nMovimento do Bispo:\n");
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        f++;
    } while (f <= 8);

    return 0;
}
