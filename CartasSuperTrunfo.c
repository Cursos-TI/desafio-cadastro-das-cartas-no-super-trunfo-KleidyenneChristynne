
#include <stdio.h>
int main (){

    //Numero que corresponde a cada carta
    int Carta1, Carta2;

    //Insira o estado correspondente 
    char Estado_1[20], Estado_2[20];

    //Nome da cidade
    char NomeCidade_1[20], NomeCidade_2[20];

    //A letra da cidade seguida de um numero 
    char CodigodaCarta_1[20], CodigodaCarta_2[20];

    //Populacao 
    int Populacao_1, Populacao_2;

    //Numero de pontos turisticos
    int NumerosTuristicos_1, NumerosTuristicos_2;

    //Area da cidade em km quadrado
    float AreaemKM2_1, AreaemKM2_2;

    //PIB correspondente
    float PIB_1, PIB_2;

    printf ("Dados da carta 1: \n");

    printf ("Digite qual o numero da carta correspondente: \n");
    scanf ("%d", &Carta1);
 
    printf ("Digite um Estado correspondente: \n");
    scanf ("%d", &Estado_1);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", NomeCidade_1);

    printf ("Digite o codigo da contendo letra e numero:  \n");
    scanf ("%s",&CodigodaCarta_1);
    
    printf("Digite a populacao correspondente: \n");
    scanf ("%d", Populacao_1);

   
    printf("Digite a quantidade de pontos turisticos existente na cidade: \n");
    scanf("%d", NumerosTuristicos_1);
     

    printf ("Digite o PIB correspondente: \n");
    scanf ("%d", PIB_1);


    printf("Digite qual a area correspondente: \n");
    scanf("%f", AreaemKM2_1);


    printf ("Dados da carta 2:  \n");

    printf ("Digite qual o numero da carta correspondente: \n");
    scanf ("%d", &Carta2);
 
    printf ("Digite um Estado correspondente: \n");
    scanf ("%d", &Estado_2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", NomeCidade_2);

    printf ("Digite o codigo da contendo letra e numero:  \n");
    scanf ("%s",&CodigodaCarta_2);
    
    printf("Digite a populacao correspondente: \n");
    scanf ("%d", Populacao_2);

   
    printf("Digite a quantidade de pontos turisticos existente na cidade: \n");
    scanf("%d", NumerosTuristicos_2);
     

    printf ("Digite o PIB correspondente: \n");
    scanf ("%d", PIB_2);

    printf("Digite qual a area correspondente: \n");
    scanf ("%f, AreaemKM2_2");
}
