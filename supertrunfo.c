#include <stdio.h>

#include <string.h> // Necessário para usar fgets e outras funções de string

int main() {
    
    char estado[50] = "", estado2[50] = "";  // Inicializa com string vazia
    char codigo[50] = "", codigo2[50] = "";  // Inicializa com string vazia
    char nome[50] = "", nome2[50] = "";    // Inicializa com string vazia
    int populacao, pontosturisticos, populacao2, pontosturisticos2;
    float pib, area, pib2, area2;

    // Leitura dos dados da primeira carta
    printf("Insira os dados da primeira carta:\n");

    printf("Estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;  // Remove a nova linha

    printf("Codigo da carta: ");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;  // Remove a nova linha

    printf("Nome da Cidade: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;  // Remove a nova linha

    printf("Populacao: ");
    scanf("%d", &populacao);
    getchar();  // Consome a nova linha deixada pelo scanf

    printf("Area: ");
    scanf("%f", &area);
    getchar();  // Consome a nova linha deixada pelo scanf

    printf("PIB: ");
    scanf("%f", &pib);
    getchar();  // Consome a nova linha deixada pelo scanf

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    getchar();  // Consome a nova linha deixada pelo scanf

    // Exibição dos dados da primeira carta
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos);

    // Inserir dados da segunda carta e imprimir as duas
    printf("\nInsira os dados da segunda carta:\n");


    printf("Estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;  // Remove a nova linha

    printf("Codigo da carta: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;  // Remove a nova linha

    printf("Nome da Cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;  // Remove a nova linha

    printf("Populacao: ");
    scanf("%d", &populacao2);
    getchar();  // Consome a nova linha deixada pelo scanf

    printf("Area: ");
    scanf("%f", &area2);
    getchar();  // Consome a nova linha deixada pelo scanf

    printf("PIB: ");
    scanf("%f", &pib2);
    getchar();  // Consome a nova linha deixada pelo scanf

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    getchar();  // Consome a nova linha deixada pelo scanf
    
    // Exibição dos dados das duas cartas
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f Km2\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos);


    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f Km2\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);


    return 0;
}