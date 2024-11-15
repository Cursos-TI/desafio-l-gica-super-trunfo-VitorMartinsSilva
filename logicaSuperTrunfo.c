#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() 
{
    
    // Criação do menu inicial:
    int opcaoMenu; 
    
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
int opcaoCarta1;
int opcaoCarta2;
int vitoriaJogador = 0;
int vitoriaComputador = 0;

    printf("Escolha o primeiro atributo a ser comparado\n");
    printf ("1 - Populaçao\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Número de Pontos Túristicos\n");
    printf ("5 - Densidade Populacional\n");
    printf ("6 - PIB per Capta\n");
    printf ("7 - Super Poder\n:");
    scanf("%d", &opcaoCarta1);

    switch (opcaoCarta1)
    {
        case 1:
    (populacao1>populacao2) ? vitoriaJogador++: (populacao2>populacao1) ? vitoriaComputador++: 0;
    break;
    
        case 2:
    (area1>area2) ? vitoriaJogador++: (area2>area1) ? vitoriaComputador++: 0;
    break;
  
        case 3:
    (pib1>pib2) ? vitoriaJogador++: (pib2>pib1) ? vitoriaComputador++: 0;
    break;

        case 4:
    (npt1>npt2) ? vitoriaJogador++: (npt2>npt1) ? vitoriaComputador++: 0;
    break;

        case 5:
    (densidade1>densidade2) ? vitoriaJogador++: (densidade2>densidade1) ? vitoriaComputador++: 0;
    break;

        case 6:
    (ppc1>ppc2) ? vitoriaJogador++: (ppc2>ppc1) ? vitoriaComputador++: 0;
    break;

        case 7:
    (superpoder1>superpoder2) ? vitoriaJogador++: (superpoder2>superpoder1) ? vitoriaComputador++: 0;
    break;

        default:
    printf("Opção inválida!\n");
    break;

    }

    printf("Escolha o segundo atributo a ser comparado\n");
    printf ("1 - Populaçao\n");
    printf ("2 - Área\n");
    printf ("3 - PIB\n");
    printf ("4 - Número de Pontos Túristicos\n");
    printf ("5 - Densidade Populacional\n");
    printf ("6 - PIB per Capta\n");
    printf ("7 - Super Poder\n:");
    scanf("%d", &opcaoCarta2);

    switch (opcaoCarta2)
    {

        case 1:
    (populacao1>populacao2) ? vitoriaJogador++: (populacao2>populacao1) ? vitoriaComputador++: 0;
    break;
    
        case 2:
    (area1>area2) ? vitoriaJogador++: (area2>area1) ? vitoriaComputador++: 0;
    break;
  
        case 3:
    (pib1>pib2) ? vitoriaJogador++: (pib2>pib1) ? vitoriaComputador++: 0;
    break;

        case 4:
    (npt1>npt2) ? vitoriaJogador++: (npt2>npt1) ? vitoriaComputador++: 0;
    break;

        case 5:
    (densidade1<densidade2) ? vitoriaJogador++: (densidade2<densidade1) ? vitoriaComputador++: 0;
    break;

        case 6:
    (ppc1>ppc2) ? vitoriaJogador++: (ppc2>ppc1) ? vitoriaComputador++: 0;
    break;

        case 7:
    (superpoder1>superpoder2) ? vitoriaJogador++: (superpoder2>superpoder1) ? vitoriaComputador++: 0;
    break;

        default:
    printf("Opção inválida!\n");
    break;

    }

if (vitoriaJogador>vitoriaComputador)

{
    printf("Parabéns você venceu!");
}
   else if (vitoriaComputador>vitoriaJogador)
   {
    printf ("Que pena, você perdeu");
   }
   else
   {
   printf ("Empate");
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