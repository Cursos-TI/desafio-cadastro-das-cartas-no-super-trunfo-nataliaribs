#include <stdio.h>
int main(){

                //Jogo super trunfo 
    // Carta 1

    char estado[50];
    char nomeCidade[50];
    char codigoCarta[50];
    float area;
    float pib;
    int populacao;
    int pontosTuristicos;
        
    
    //CARTA 2
    char estado2[50];
    char nomeCidade2[50];
    char codigoCarta2[50];
    float area2;
    float pib2;
    int populacao2;
    int pontosTuristicos2;


    // CARTA 1

    printf("CARTA 1: \n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    
    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite os numeros de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    // mostrar dados da carta 1

    printf("Carta 1:");
    printf("Estado: %s\n", estado );
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);


        // CARTA 2

    printf("CARTA 2: \n");

    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite os numeros de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    

     //MOSTRANDO NA TELA CARTA 2

    printf("Carta 2:");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);


     

    
    



}
