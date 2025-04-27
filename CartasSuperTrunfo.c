#include <stdio.h>

int main(){
    char estado [4];
    char code [4] ;
    char cidade[20] ;
    double populacao ;
    double area ;
    double pib ;
    int numpt ;

char estadoI [4]ceara;
    char codeI [4] a01;
    char cidadeI [20] fortaleza;
    double(int) populacaoI 15000;
    double areaIem  Km2(float)10000;  
    double pibI(float)30000 ; 
    int numptI50; 

printf("Digite o Estado da CARTA 1: \n");
    scanf("%s", estado);
    
    printf("Digite o código do Estado da CARTA 1: \n");
    scanf("%s", code);

    printf("Digite a cidade da CARTA 1: \n");
    scanf("%s", cidade);

    printf("Digite a população da CARTA 1: \n");
    scanf("%f", &populacao);

    printf("Digite a área da CARTA 1: \n");
    scanf("%f", &area);

    printf("Digite o PIB da CARTA 1: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da CARTA1: \n");
    scanf("%i", &numpt);

    printf("Digite o Estado da CARTA 2: \n");
    scanf("%s", estadoI);

    printf("Digite o código do Estado da CARTA 2: \n");
    scanf("%s", codeI);

    printf("Digite a cidade da CARTA 2: \n");
    scanf("%s", cidadeI);

    printf("Digite a população da CARTA 2: \n");
    scanf("%f", &populacaoI);

    printf("Digite a área da  CARTA 2: \n");
    scanf("%f", &areaI);

    printf("Digite o PIB da CARTA 2: \n");
    scanf("%f", &pibI);

    printf("Digite o número de pontos turísticos da CARTA 2: \n");
    scanf("%i", &numptI);

    printf("O Estado da carta 1 é: %c\n" O code do Estado da carta 1 é: %s\n" A cidade da carta 1 é: %s\n" a população da cidade da carta 1 é: %f\n" A área da cidade da carta 1 é: %f\n O PIB da carta 1 é: %f\n O número de pontos turísticos da carta 1 é: %d\n A densidade populacional eh: %f\n O PIB per Capita eh:%f\n", estado, code, cidade, populacao, area, pib, numpt, densidadepop, pibpercap);
    
    printf("O Estado é: %c\n" O código é: %s\n" A cidade é: %s\n" A população da cidade é: %f\n" A área em km² é: %f\n" O PIB da cidade é: %f\n" O número de pontos turísticos da cidade é: %d\n A densidade populacional eh: %f\n O PIB per Capita eh:%f\n", estadoI, codeI, cidadeI, populacaoI, areaI, pibI, numptI,densidade pop I, pibpercapI);
    
    return 0;
}
