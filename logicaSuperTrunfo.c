#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {   
    // Área para definição das variáveis para armazenar as propriedades das cidades
        //Definindo as variaveis de cidade 1
            char estado1, cidade1[3],codigo1[4];
            int pop1, turismo1;
            float pib1, area1, percapita1, densidade1;

        //Definindo as variaveis de cidade 2
            char estado2, cidade2[3],codigo2[4];
            int pop2, turismo2;
            float pib2, area2, percapita2, densidade2;

  // Área para entrada de dados
    //Adicionando dados cidade 1
        printf("Digite a letra do estado:");
        scanf(" %c", &estado1);
        printf("Digite a numero da cidade:");
        scanf(" %s", cidade1);
        printf("Digite a codigo da carta:");
        scanf(" %s", codigo1);

        printf("Digite o pib da cidade:");
        scanf(" %f", &pib1);
        printf("Digite a populacao da cidade:");
        scanf(" %i", &pop1);
        printf("Digite a area da cidade:");
        scanf(" %f", &area1);
        printf("Digite a quantidade de pontos turisticos da cidade:");
        scanf(" %i", &turismo1);

  //Calculando pib per capita e densidade populacional da cidade 1
    percapita1 = pib1 / pop1;
    densidade1 = pop1 / area1;

    printf("\n CIDADE 1 ADICIONADA COM SUCESSO !!!\n");
    
    //Adicionando dados cidade 2
        printf("Digite a letra do estado:");
        scanf(" %c", &estado2);
        printf("Digite a numero da cidade:");
        scanf(" %s", cidade2);
        printf("Digite a codigo da carta:");
        scanf(" %s", codigo2);
        
        printf("Digite o pib da cidade:");
        scanf(" %f", &pib2);
        printf("Digite a populacao da cidade:");
        scanf(" %i", &pop2);
        printf("Digite a area da cidade:");
        scanf(" %f", &area2);
        printf("Digite a quantidade de pontos turisticos da cidade:");
        scanf(" %i", &turismo2);
    
//Calculando pib per capita e densidade populacional da cidade 1
    percapita2 = pib2 / pop2;
    densidade2 = pop2 / area2;
//definindo variaveis para super poder
    double super1, super2;
    super1 = pib1 + pop1 + area1 + turismo1 + percapita1 + (1/densidade1);
    super2 = pib2 + pop2 + area2 + turismo2 + percapita2 + (1/densidade2);
    
    
// Área para exibição dos dados da cidade
    printf("|----------------------------------|\n");
    printf("Cidade 1 -\n");
    printf("Estado: %c \n", estado1);
    printf("Cidade: %s \n", cidade1);
    printf("Carta: %s \n", codigo1);
    printf("PIB: %.2f \n", pib1);
    printf("Populacao: %i \n", pop1);
    printf("area: %.2f \n", area1);
    printf("Pontos turisticos: %i \n", turismo1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB Per Capita: %.2f \n", percapita1);
    printf("Super poder: %.2f \n", super1);

    printf("|----------------------------------|\n");

    printf("Cidade 2 -\n");
    printf("Estado: %c \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Carta: %s \n", codigo2);
    printf("PIB: %.2f \n", pib2);
    printf("Populacao: %i \n", pop2);
    printf("area: %.2f \n", area2);
    printf("pontos turisticos: %i \n", turismo2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB Per Capita: %.2f \n", percapita2);
    printf("Super poder: %.2f \n", super2);
    printf("|----------------------------------|\n");


  


//Comparando os atributos
    //Condicional IF para definir carta ganhadora
        if(super1 > super2){
            printf("Carta %s foi a campeã pelo super poder, Parabéns! \n", codigo1);
        }
        else if (super2 > super1){
            printf("Carta %s foi a ganhadora pelo super poder, Parabéns! \n", codigo2);
        }
        else{
            printf("As duas cartas tem os mesmos pontos de super poder, Empate!\n");
        }

    

return 0;
} 
