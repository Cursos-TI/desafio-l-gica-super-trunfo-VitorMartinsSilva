#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
        
    //Dados da carta 1

    char codigo1[4];
    char nome1[50];
    long int populacao1;
    float area1;
    float pib1;
    int npt1;
    float densidade1;
    float ppc1;
    float superpoder1;

// Dados da carta 2
    
    char codigo2 [4];
    char nome2[50];
    long int populacao2;
    float area2;
    float pib2;
    int npt2;
    float densidade2;
    float ppc2;
    float superpoder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
   
    // Cadastro dos dados da carta 1

    printf("Digite o código da cidade da primeira carta:\n");
    scanf("%s",&codigo1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s",&nome1);

    printf("Digite a população da cidade da primeira carta:\n");
    scanf("%ld",&populacao1);

    printf("Digite a área da cidade da primeira carta: \n");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d",&npt1);

     // Cadastro dos dados da carta 2

    printf("Digite o código da cidade da segunda carta:\n");
    scanf("%s",&codigo2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s",&nome2);

    printf("Digite a população da cidade da segunda carta:\n");
    scanf("%ld",&populacao2);

    printf("Digite a área da cidade da segunda carta: \n");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d",&npt2);

    // Cálculo da Densidade, PIB per Capta e Super poder

    densidade1 = populacao1 / area1;
    ppc1  = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    ppc2  = pib2 / populacao2;

    superpoder1 = populacao1+area1+pib1+npt1+densidade1+ppc1;
    superpoder2 = populacao2+area2+pib2+npt2+densidade2+ppc2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

        if (populacao1 > populacao2) {
         printf("Cidade 1 tem maior população.\n");
     }  else {
         printf("Cidade 2 tem maior população.\n");
     }

        if (area1 > area2) {
         printf("Cidade 1 tem maior area.\n");
     }  else {
         printf("Cidade 2 tem maior area.\n");
     }

        if (pib1 > pib2) {
         printf("Cidade 1 tem maior PIB.\n");
     }  else {
         printf("Cidade 2 tem maior PIB.\n");
     }

        if (npt1 > npt2) {
         printf("Cidade 1 tem maior número de pontos turisticos.\n");
     }  else {
         printf("Cidade 2 tem maior número de pontos turisticos.\n");
     }

        if (densidade1 > densidade2) {
        printf("Cidade 1 tem maior densidade populacional.\n");
    }   else {
        printf ("Cidade 2 tem maior densidade populacional.\n");
    }

        if (ppc1 > ppc2) {
        printf("Cidade 1 tem maior PIB per Capta.\n");
    }
        else {
        printf("Cidade 2 tem maior PIB per CAPTA\n");
    }

        if (superpoder1 > superpoder2) {
        printf("Cidade 1 tem o maior super poder.\n");
    }    
        else {
            printf("Cidade 2 tem o maior super poder.\n");
    }
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
