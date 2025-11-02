// Exemplo: cadastro_territorios.c
// ...existing code...
#include <stdio.h>
#include <string.h>

/*
  Definição da struct Territorio:
  - nome: nome do território (até 29 caracteres + terminador)
  - cor: cor do exército (até 9 caracteres + terminador)
  - tropas: quantidade de tropas (inteiro)
*/
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main(void) {
    // Vetor para armazenar 5 territórios
    Territorio territorios[5];

    // Entrada dos dados: laço para preencher os 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d de 5\n", i + 1);

        // Leitura do nome: usa um scanset para permitir espaços e evitar overflow
        printf("  Nome (ate 29 caracteres): ");
        if (scanf(" %29[^\n]", territorios[i].nome) != 1) {
            // Em caso de erro na leitura, limpar a string e continuar
            territorios[i].nome[0] = '\0';
        }

        // Leitura da cor: cor normalmente sem espaços -> %9s é seguro
        printf("  Cor do exercito (ate 9 caracteres): ");
        if (scanf(" %9s", territorios[i].cor) != 1) {
            territorios[i].cor[0] = '\0';
        }

        // Leitura do numero de tropas: inteiro
        printf("  Numero de tropas: ");
        if (scanf(" %d", &territorios[i].tropas) != 1) {
            // Se a leitura falhar, definir 0 e limpar o buffer
            territorios[i].tropas = 0;
        }

        printf("\n"); // separador visual entre cadastros
    }

    // Exibição dos dados: percorrer o vetor e mostrar cada território
    printf("Territorios cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("  Nome   : %s\n", territorios[i].nome);
        printf("  Cor    : %s\n", territorios[i].cor);
        printf("  Tropas : %d\n", territorios[i].tropas);
        printf("---------------------------\n");
    }

    return 0;
}