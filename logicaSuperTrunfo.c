#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
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
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    //carta 01
    if(populacao > populacao2){
        printf("População 1 é maior que a população 2!\n");
    }else {
        printf("População 2 é maior que a população 1!\n");
    }

    if(km2 > km22){
        printf("Área 1 é maior que a área 2!\n");
    }else {
        printf("Área 2 é maior que a Área 1!\n");
    }

    if(pib > pib2){
        printf("Pib 1 é maior que a pib 2!\n");
    }else {
        printf("Pib 2 é maior que a pib 1!\n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if(pib > pib2){
        printf("A Carta vencedora é: %s",&codigo);
    }else{
        printf("A carta vencedora é: %s",&codigo2);
    }
    
    return 0;
}
