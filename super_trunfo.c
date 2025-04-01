#include <stdio.h>

int main() {
    char estado1;
    char codigoCarta1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int qtdPontosTuristicos1;

    char estado2;
    char codigoCarta2[100];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;

   //entrada
    
    printf("\n Carta 1: \n");
    printf("Digite um estado(Uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta(1 a 4):\n");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a população:\n");
    scanf("%i", &populacao1);
    printf("Digite a Área(Em km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB(Em bilhões):\n");
    scanf("%f", &pib1);
    printf("Digite a o número de pontos turísticos:\n");
    scanf("%i", &qtdPontosTuristicos1);

    
    printf("\nCarta 2: \n");
    printf("Digite um estado(Uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta(1 a 4):\n");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a população:\n");
    scanf("%i", &populacao2);
    printf("Digite a Área(Em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB(Em bilhões):\n");
    scanf("%f", &pib2);
    printf("Digite a o número de pontos turísticos:\n");
    scanf("%i", &qtdPontosTuristicos2);
    
    //saída
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c0%s\n", estado1,codigoCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", qtdPontosTuristicos1);

   
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c0%s\n", estado2,codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", qtdPontosTuristicos2);

    return 0;

}