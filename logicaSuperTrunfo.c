#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int opcao;
    //carta 1
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float km2;
    long pib;
    int pontosturisticos;
    double densidadepopulacional;
    double pibpercapita;
    long superpoder;
    double densidadedemografica;
    //carta 2

    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float km22;
    long pib2;
    int pontosturisticos2;
    double densidadepopulacional2;
    double pibpercapita2;
    long superpoder2;
    double densidadedemografica2;
    // Cadastro das Cartas:
    
    //carta 1 

    printf("***Cadastro Da Carta 1***\n");
    
    printf("\n");

    printf("Digite o codigo da carta: (ex:A01)\n");
    scanf("%s", &codigo);

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a poulação:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%ld", &pib);

    printf("Digite a área:\n");
    scanf("%f", &km2);

    printf("Digite a quantidade de pontos turísticos\n");
    scanf("%d", &pontosturisticos);

    //carta 2 
    
    printf("***Cadastro Da Carta 2***\n");
    
    printf("\n");

    printf("Digite o codigo da carta: (ex:A01)\n");
    scanf("%s", &codigo2);

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a poulação:\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB:\n");
    scanf("%ld", &pib2);

    printf("Digite a área:\n");
    scanf("%f", &km22);

    printf("Digite a quantidade de pontos turísticos\n");
    scanf("%d", &pontosturisticos2);

    densidadedemografica = populacao/km2;
    densidadedemografica2 = populacao2/km22;
    // Comparação de Cartas:

    printf("===Menu de comparação===");
    printf("[1] Nome do Cidade");
    printf("[2] População");
    printf("[3] Área");
    printf("[4] PIB");
    printf("[5] Número de pontos turísticos");
    printf("[6] Densidade demográfica");
    scanf("%d", &opcao)

    printf("\nComparando %s e %s:\n\n", cidade, cidade2);

    switch(opcao) {
        case 1:
            printf("Atributo: Nome da Cidade\n");
            if (strcmp(cidade, cidade2) > 0) {
                printf("Vencedor: %s\n", cidade);
            } else if (strcmp(cidade2, cidade) > 0) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: População\n");
            printf("%s: %d | %s: %d\n", cidade, populacao, cidade2, populacao2);
            if (populacao > populacao2) {
                printf("Vencedor: %s\n", cidade);
            } else if (populacao2 > populacao) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: Área\n");
            printf("%s: %.2f | %s: %.2f\n", cidade, km2, cidade2, km22);
            if (km2 > km22) {
                printf("Vencedor: %s\n", cidade);
            } else if (km22 > km2) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: PIB\n");
            printf("%s: %ld | %s: %ld\n", cidade, pib, cidade2, pib2);
            if (pib > pib2) {
                printf("Vencedor: %s\n", cidade);
            } else if (pib2 > pib) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", cidade, pontosturisticos, cidade2, pontosturisticos2);
            if (pontosturisticos > pontosturisticos2) {
                printf("Vencedor: %s\n", cidade);
            } else if (pontosturisticos2 > pontosturisticos) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: Densidade Demográfica (menor vence)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade, densidadedemografica, cidade2, densidadedemografica2);
            if (densidadedemografica < densidadedemografica2) {
                printf("Vencedor: %s\n", cidade);
            } else if (densidadedemografica2 < densidadedemografica) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
