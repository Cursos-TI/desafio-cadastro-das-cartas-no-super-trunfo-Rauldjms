#include <stdio.h>



int main() {
    char estado[8];
    char codigo[9];
    char nome[30];
    float area;
    float PIB;
    int Populacao;
    int Pontos_Turisticos;

    printf("Carta A: \n");

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("codigo da carta: \n");
    scanf("%s", &codigo);

    printf("nome da cidade: \n");
    scanf("%s", &nome);

    printf("populacao: \n");
    scanf("%d", &Populacao);

    printf("area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos);

    printf("Estado: %s \n", estado);
    printf("codigo: %s \n", codigo);
    printf("nome da cidade: %s \n", nome);
    printf("Populacao: %d \n", Populacao);
    printf("area: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Número de pontos Turisticos: %d \n", Pontos_Turisticos);
    


    printf("Carta B: \n");

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("codigo da carta: \n");
    scanf("%s", &codigo);

    printf("nome da cidade: \n");
    scanf("%s", &nome);

    printf("populacao: \n");
    scanf("%d", &Populacao);

    printf("area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos);



    
    return 0;
}
    