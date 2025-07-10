#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estado1[1], estado2[1], codigo1[3], codigo2[3], cidade1[20], cidade2[20];
    float pib1, pib2, area1, area2;
    int populacao1, populacao2, p_turisticos1, p_turisticos2;


    printf("Insira a letra do Estado: ");
    scanf("%s",&estado1);
    printf("Insira o codigo da carta: ");
    scanf("%s",&codigo1);
    printf("Insira o nome da cidade: ");
    scanf("%s",&cidade1);
    printf("Insira a populacao da cidade: ");
    scanf("%d",&populacao1);
    printf("Insira a area da cidade: ");
    scanf("%f",&area1);
    printf("Insira o PIB da cidade: ");
    scanf("%f",&pib1);
    printf("Insira o numero de pontos turisticos da cidade: ");
    scanf("%d",&p_turisticos1);

    printf("Insira a letra do Estado: ");
    scanf ("%s",&estado2);
    printf("Insira o codigo da carta: ");
    scanf("%s",&codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s",&cidade2);
    printf("Insira a populacao da cidade: ");
    scanf("%d",&populacao2);
    printf("Insira a area da cidade: ");
    scanf("%f",&area2);
    printf("Insira o PIB da cidade: ");
    scanf("%f",&pib2);
    printf("Insira o numero de pontos turisticos da cidade: ");
    scanf("%d",&p_turisticos2);
    system("cls");

    printf("Carta 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos Turisticos: %d\n", p_turisticos1);

    printf("Carta 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos Turisticos: %d\n", p_turisticos2);

    return 0;
}
