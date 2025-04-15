#include <stdio.h>

int main() {
    // Movimentação da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int contador = 0;
    while (contador < 5) {
        printf("Cima, Direita\n");
        contador++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int passos = 0;
    do {
        printf("Esquerda\n");
        passos++;
    } while (passos < 8);

    return 0;
}