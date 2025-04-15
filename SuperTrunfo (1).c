#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf ("Olá! Hoje iremos criar cartas para nosso Super Trunfo! Favor cadastrá-las a seguir: \n");

    // Entrada de dados para a carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (A a H): ");
    scanf(" %c", &estado1); 

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // aceita nome com espaços

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("-----------------------------\n");

    printf("Dados registrados!\n");
    printf("Agora registre a segunda carta:\n");

    printf("-----------------------------\n");


    // Entrada de dados para a carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("-----------------------------\n");


    printf("Dados registrados!\n");
    printf("Segue comprovante de registro:\n");


    printf("-----------------------------\n");


    // Exibição dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("-----------------------------\n");


    printf ("Obrigado pelo registro!\n");

    printf("-----------------------------\n");


    printf ("Agora vamos comparar as cartas!\n");
    printf ("Favor escolher a carta que deseja comparar:\n");
    printf ("1 - Carta 1\n");
    printf ("2 - Carta 2\n");
    int escolha;
    scanf("%d", &escolha);
    printf ("Favor escolher o atributo que deseja comparar:\n");
    printf ("1 - População\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Pontos turísticos\n");
    int atributo;
    scanf("%d", &atributo);
    printf ("-----------------------------\n");
    printf ("Resultado da comparação:\n"); 
    if (escolha == 1) {
        switch (atributo) {
            case 1:
                if (populacao1 > populacao2) {
                    printf("A carta 1 é maior em população!\n");
                } else if (populacao1 < populacao2) {
                    printf("A carta 2 é maior em população!\n");
                } else {
                    printf("As cartas têm a mesma população!\n");
                }
                break;
            case 2:
                if (area1 > area2) {
                    printf("A carta 1 é maior em área!\n");
                } else if (area1 < area2) {
                    printf("A carta 2 é maior em área!\n");
                } else {
                    printf("As cartas têm a mesma área!\n");
                }
                break;
            case 3:
                if (pib1 > pib2) {
                    printf("A carta 1 é maior em PIB!\n");
                } else if (pib1 < pib2) {
                    printf("A carta 2 é maior em PIB!\n");
                } else {
                    printf("As cartas têm o mesmo PIB!\n");
                }
                break;
            case 4:
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("A carta 1 é maior em pontos turísticos!\n");
                } else if (pontosTuristicos1 < pontosTuristicos2) {
                    printf("A carta 2 é maior em pontos turísticos!\n");
                } else {
                    printf("As cartas têm o mesmo número de pontos turísticos!\n");
                }
                break;
            default:
                printf("Opção inválida.\n");
        }
    } else if (escolha == 2) {
        switch (atributo) {
            case 1:
                if (populacao2 > populacao1) {
                    printf("A carta 2 é maior em população!\n");
                } else if (populacao2 < populacao1) {
                    printf("A carta 1 é maior em população!\n");
                } else {
                    printf("As cartas têm a mesma população!\n");
                }
                break;
            case 2:
                if (area2 > area1) {
                    printf("A carta 2 é maior em área!\n");
                } else if (area2 < area1) {
                    printf("A carta 1 é maior em área!\n");
                } else {
                    printf("As cartas têm a mesma área!\n");
                }
                break;
            case 3:
                if (pib2 > pib1) {
                    printf("A carta 2 é maior em PIB!\n");
                } else if (pib2 < pib1) {
                    printf("A carta 1 é maior em PIB!\n");
                } else {
                    printf("As cartas têm o mesmo PIB!\n");
                }
                break;
            case 4:
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("A carta 2 é maior em pontos turísticos!\n");
                } else if (pontosTuristicos2 < pontosTuristicos1) {
                    printf("A carta 1 é maior em pontos turísticos!\n");
                } else {
                    printf("As cartas têm o mesmo número de pontos turísticos!\n");
                }
                break;
            default:
                printf("Opção inválida.\n");
        }
    }
                  return 0;
                
                }