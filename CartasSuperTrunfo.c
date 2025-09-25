#include <stdio.h>

int main() {
  
    char estado;
    int numeroCidade;
    long long populacao;
    float area;
    double pib;
    int pontosTuristicos;

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &numeroCidade);

    printf("Digite a população: ");
    scanf("%lld", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em R$): ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados da carta cadastrada
    printf("\n--- Carta Cadastrada ---\n");
    printf("Código: %c%02d\n", estado, numeroCidade);
    printf("População: %lld\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f R$\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}