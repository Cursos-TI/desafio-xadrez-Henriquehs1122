#include <stdio.h>

// Número de casas para cada movimento (definido como constante)
const int NUM_CASAS_TORRE = 5;
const int NUM_CASAS_BISPO = 5;
const int NUM_CASAS_RAINHA = 8;
const int MOVIMENTOS_CAVALO = 3;

// ====== Funções Recursivas ======

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// ====== Bispo com loops aninhados ======

void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) { // loop vertical
        for (int j = 0; j < 1; j++) { // loop horizontal (diagonal simulada)
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// ====== Cavalo com loops complexos e controle de fluxo ======

void moverCavalo() {
    int movimentos = 0;

    for (int i = 0; i < 5; i++) { // simula tentativas de movimento para cima
        for (int j = 0; j < 5; j++) { // simula tentativas para a direita
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentos++;
            }

            if (movimentos >= MOVIMENTOS_CAVALO)
                break;

            if (j % 2 == 0)
                continue; // exemplo de uso de continue (simula checagens)
        }

        if (movimentos >= MOVIMENTOS_CAVALO)
            break;
    }
}

// ====== Função Principal ======

int main() {
    printf("Movimento da TORRE (recursivo):\n");
    moverTorreDireita(NUM_CASAS_TORRE);

    printf("\nMovimento do BISPO (recursivo):\n");
    moverBispoRecursivo(NUM_CASAS_BISPO);

    printf("\nMovimento do BISPO (com loops aninhados):\n");
    moverBispoLoops(NUM_CASAS_BISPO);

    printf("\nMovimento da RAINHA (recursivo):\n");
    moverRainhaEsquerda(NUM_CASAS_RAINHA);

    printf("\nMovimento do CAVALO (loops complexos):\n");
    moverCavalo();

    return 0;
}
