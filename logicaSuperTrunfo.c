#include <stdio.h>
#include <string.h>

// Super Trunfo - Comparacao com Dois Atributos
int main() {
    int escolha1 = 0, escolha2 = 0;

    // Carta 1
    char estado[50], codigo[50], cidade[50];
    int populacao, pontosturisticos;
    float km2;
    long pib;

    // Carta 2
    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, pontosturisticos2;
    float km22;
    long pib2;

    double dens1, dens2;

    // Cadastro Carta 1
    printf("***Cadastro Da Carta 1***\n");
    printf("Codigo da carta: "); scanf("%s", codigo);
    printf("Estado: "); scanf("%s", estado);
    printf("Cidade: "); scanf("%s", cidade);
    printf("Populacao: "); scanf("%d", &populacao);
    printf("PIB: "); scanf("%ld", &pib);
    printf("Area (km2): "); scanf("%f", &km2);
    printf("Pontos Turisticos: "); scanf("%d", &pontosturisticos);

    // Cadastro Carta 2
    printf("***Cadastro Da Carta 2***\n");
    printf("Codigo da carta: "); scanf("%s", codigo2);
    printf("Estado: "); scanf("%s", estado2);
    printf("Cidade: "); scanf("%s", cidade2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("PIB: "); scanf("%ld", &pib2);
    printf("Area (km2): "); scanf("%f", &km22);
    printf("Pontos Turisticos: "); scanf("%d", &pontosturisticos2);

    dens1 = populacao / km2;
    dens2 = populacao2 / km22;

    // Escolha dos dois atributos
    do {
        printf("\n=== Escolha do Primeiro Atributo ===\n");
        printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
        scanf("%d", &escolha1);
    } while (escolha1 < 1 || escolha1 > 5);

    do {
        printf("\n=== Escolha do Segundo Atributo (diferente do primeiro) ===\n");
        for (int i = 1; i <= 5; i++) {
            if (i != escolha1) {
                switch(i) {
                    case 1: printf("1. Populacao\n"); break;
                    case 2: printf("2. Area\n"); break;
                    case 3: printf("3. PIB\n"); break;
                    case 4: printf("4. Pontos Turisticos\n"); break;
                    case 5: printf("5. Densidade Demografica\n"); break;
                }
            }
        }
        scanf("%d", &escolha2);
    } while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1);

    int valor1_attr1 = 0, valor1_attr2 = 0;
    int valor2_attr1 = 0, valor2_attr2 = 0;

    // Funcao para obter valor com base na escolha
    int getValor(int escolha, int pop, float area, long p, int pontos, double dens) {
        switch(escolha) {
            case 1: return pop;
            case 2: return area;
            case 3: return p;
            case 4: return pontos;
            case 5: return dens;
        }
        return 0;
    }

    valor1_attr1 = getValor(escolha1, populacao, km2, pib, pontosturisticos, dens1);
    valor2_attr1 = getValor(escolha1, populacao2, km22, pib2, pontosturisticos2, dens2);

    valor1_attr2 = getValor(escolha2, populacao, km2, pib, pontosturisticos, dens1);
    valor2_attr2 = getValor(escolha2, populacao2, km22, pib2, pontosturisticos2, dens2);

    // Comparacoes
    int pontos1 = 0, pontos2 = 0;

    pontos1 += (escolha1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    pontos2 += (escolha1 == 5) ? (valor2_attr1 < valor1_attr1) : (valor2_attr1 > valor1_attr1);

    pontos1 += (escolha2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);
    pontos2 += (escolha2 == 5) ? (valor2_attr2 < valor1_attr2) : (valor2_attr2 > valor1_attr2);

    int soma1 = valor1_attr1 + valor1_attr2;
    int soma2 = valor2_attr1 + valor2_attr2;

    printf("\n=== Comparacao Final ===\n");
    printf("%s: %d + %d = %d\n", cidade, valor1_attr1, valor1_attr2, soma1);
    printf("%s: %d + %d = %d\n", cidade2, valor2_attr1, valor2_attr2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor: %s\n", cidade);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
