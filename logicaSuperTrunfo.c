#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Criação do menu inicial:
    int opcaoMenu; 
    int opcaoCarta;

    printf("Super Trunfo - Menu principal\n");
    printf ("1 - Iniciar Jogo\n");
    printf ("2 - Regras do Jogo\n");
    printf ("3 - Sair do Jogo\n");
    printf ("Escolha uma opção\n");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu)
    {
    case 1: 

    printf ("Iniciando Jogo...\n");

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
    
    // Comparação de Cartas e exibição do resultado:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    //Menu da Escolha do Atributo
    printf("Escolha o atributo a ser comparado\n");
    printf ("1 - Populaçao\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Número de Pontos Túristicos\n");
    printf ("5 - Densidade Populacional\n");
    printf ("6 - PIB per Capta\n");
    printf ("7 - Super Poder\n:");
    scanf("%d", &opcaoCarta);

    switch (opcaoCarta)
    {
    case 1:

    if (populacao1 > populacao2) {
         printf("Cidade 1 é vencedora pois tem maior população.\n");

     }  else {
         printf("Cidade 2 é vencedora pois tem maior população.\n");

     }
        break;
    
    case 2:

    if (area1 > area2) {
         printf("Cidade 1 é vencedora pois tem maior area.\n");

     }  else {
         printf("Cidade 2 é vencedora pois tem maior area.\n");

     }
     
     break;

    case 3:

    if (pib1 > pib2) {
         printf("Cidade 1 é vencedora pois tem maior PIB.\n");

     }  else {
         printf("Cidade 2 é vencedora pois tem maior PIB.\n");

     }

    break;

    case 4:

    if (npt1 > npt2) {
         printf("Cidade 1 é vencedora pois tem maior número de pontos turisticos.\n");

     }  else {
         printf("Cidade 2 é vencedora pois tem maior número de pontos turisticos.\n");
     }

    break;

    case 5:

     if (densidade1 > densidade2) {
        printf("Cidade 1 é vencedora pois tem menor densidade populacional.\n");
        
    }   else {
        printf ("Cidade 2 é vencedora pois tem menor densidade populacional.\n");
    }

    break;

    case 6:

     if (ppc1 > ppc2) {
        printf("Cidade 1 é vencedora pois tem maior PIB per Capta.\n");
    }
        else {
        printf("Cidade 2 é vencedora pois tem maior PIB per CAPTA\n");
    }

    break;

    case 7:

      if (superpoder1 > superpoder2) {
        printf("Cidade 1 é vencedora pois tem o maior super poder.\n");
    }    
        else {
            printf("Cidade 2 é vencedora pois tem o maior super poder.\n");
    }

    break;

    default:
    printf ("Opção Inválida\n");
  
    }
// Jogo finalizado, ecerrar programa.

return 0;
    
       
     // Exibição das Regras

    case 2:

    printf ("Regra 1: O jogador escolhe o atributo da carta a ser comparado\n");
    printf ("Regra 2: O atributo maior vence, exceto no atributo Densidade Populacional\n");
    printf ("Regra 3: O Super Poder é a soma de todos os atributos.\n");
    
    break;

    // Sair do jogo

    case 3:

    printf ("Saindo do Jogo...\n");

    break;

    default:

    printf ("Opção Inválida.\n");
        
        break;
      
    }


       return 0;
}
