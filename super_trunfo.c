#include <stdio.h>

int main() {
    char estado;
    char codigoCarta[100];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;

    
    printf("Carta 1: \n");

    //entrada
    printf("Digite um estado(Uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta(1 a 4):\n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite a população:\n");
    scanf("%i", &populacao);

    printf("Digite a Área(km²):\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a o número de pontos turísticos:\n");
    scanf("%i", &qtdPontosTuristicos);
   
    //saída
    printf("Estado: %c\n", estado);
    printf("Código: %c0%s\n", estado,codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %i\n", qtdPontosTuristicos);

}