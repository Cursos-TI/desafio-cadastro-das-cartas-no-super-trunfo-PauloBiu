#include <stdio.h>

int main() {
    // Atributos das cartas
    double pib1, pib2, populacao1, populacao2, area1, area2;
    int pontosTuristicos1, pontosTuristicos2;
    int escolha;
    int vencedor;

    // Atributos da carta 1
    pib1 = 50000.0;
    populacao1 = 1000000;
    area1 = 1500.0;
    pontosTuristicos1 = 25;

    // Atributos da carta 2
    pib2 = 60000.0;
    populacao2 = 800000;
    area2 = 1200.0;
    pontosTuristicos2 = 30;

    // Exibir as cartas
    printf("Carta 1: PIB: %.2f, População: %.2f, Area: %.2f, Pontos Turisticos: %d\n", pib1, populacao1, area1, pontosTuristicos1);
    printf("Carta 2: PIB: %.2f, População: %.2f, Area: %.2f, Pontos Turisticos: %d\n", pib2, populacao2, area2, pontosTuristicos2);

    // Perguntar ao jogador qual atributo comparar
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - PIB\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - Pontos turísticos\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &escolha);

    // Comparação do atributo escolhido
    if (escolha == 1) { // Comparar PIB
        if (pib1 > pib2) {
            vencedor = 1;
        } else if (pib1 < pib2) {
            vencedor = 2;
        } else {
            vencedor = 0; // Empate
        }
    } else if (escolha == 2) { // Comparar População
        if (populacao1 > populacao2) {
            vencedor = 1;
        } else if (populacao1 < populacao2) {
            vencedor = 2;
        } else {
            vencedor = 0; // Empate
        }
    } else if (escolha == 3) { // Comparar Área
        if (area1 > area2) {
            vencedor = 1;
        } else if (area1 < area2) {
            vencedor = 2;
        } else {
            vencedor = 0; // Empate
        }
    } else if (escolha == 4) { // Comparar Pontos Turísticos
        if (pontosTuristicos1 > pontosTuristicos2) {
            vencedor = 1;
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            vencedor = 2;
        } else {
            vencedor = 0; // Empate
        }
    } else {
        printf("Escolha inválida!\n");
        return 0; // Encerra o jogo em caso de escolha inválida
    }

    // Exibir o vencedor
    if (vencedor == 1) {
        printf("\nA Carta 1 venceu!\n");
    } else if (vencedor == 2) {
        printf("\nA Carta 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
