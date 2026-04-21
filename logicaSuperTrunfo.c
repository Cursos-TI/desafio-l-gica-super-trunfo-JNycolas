#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {  
    int escolha1, escolha2, resultado1 = 0, resultado2 = 0; 
    double soma1 = 0, soma2 = 0;
    // Área para definição das variáveis para armazenar as propriedades das cidades
        //Definindo as variaveis de cidade 1
            char codigo1[4];
            int pop1, turismo1;
            float pib1, area1, percapita1, densidade1;

        //Definindo as variaveis de cidade 2
            char codigo2[4];
            int pop2, turismo2;
            float pib2, area2, percapita2, densidade2;

  // Área para entrada de dados
    //Adicionando dados cidade 1
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

    printf("\nCIDADE 1 ADICIONADA COM SUCESSO !!!\n \n");
    
    //Adicionando dados cidade 2
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
        printf("|----------------------------------|\n \n");
//Calculando pib per capita e densidade populacional da cidade 1
    percapita2 = pib2 / pop2;
    densidade2 = pop2 / area2;
//definindo variaveis para super poder
    double super1, super2;
    super1 = pib1 + pop1 + area1 + turismo1 + percapita1 + (1/densidade1);
    super2 = pib2 + pop2 + area2 + turismo2 + percapita2 + (1/densidade2);
    
    
// Área para exibição dos dados da cidade

    printf("***COMPARANDO AS CARTAS***\n");
    printf("   RODADA NUMERO 1:\n");
    printf("1 - Codigo \n");
    printf("2 - Populacao \n");
    printf("3 - Area \n");
    printf("4 - PIB \n");
    printf("5 - Número de pontos turísticos \n");
    printf("6 - Densidade demográfica \n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);
    printf("|----------------------------------|\n");


//Comparando os atributos
    //Switch para saber qual atributo deve ser comparado
        switch (escolha1){
        case 1:
            printf("CIDADE 1 -\n");
            printf("Carta: %s \n", codigo1);
            printf("PIB: %.2f \n", pib1);
            printf("Populacao: %i \n", pop1);
            printf("area: %.2f \n", area1);
            printf("Pontos turisticos: %i \n", turismo1);
            printf("Densidade Populacional: %.2f \n", densidade1);
            printf("PIB Per Capita: %.2f \n", percapita1);
            printf("Super poder: %.2f \n", super1);

            printf("|----------------------------------|\n");

            printf("CIDADE 2 -\n");
            printf("Carta: %s \n", codigo2);
            printf("PIB: %.2f \n", pib2);
            printf("Populacao: %i \n", pop2);
            printf("area: %.2f \n", area2);
            printf("pontos turisticos: %i \n", turismo2);
            printf("Densidade Populacional: %.2f \n", densidade2);
            printf("PIB Per Capita: %.2f \n", percapita2);
            printf("Super poder: %.2f \n", super2);
            printf("|----------------------------------|\n");
        break;
        case 2:
            if(pop1 > pop2){
                //Mostra os valores de cada atributo e compara para definir o vencedor 
                printf("ATRIBUTO SELECIONADO: POPULACAO \n");
                printf("%s = %i \n", codigo1, pop1);
                printf("%s = %i \n", codigo2, pop2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo1);

                soma1 += pop1;
                soma2 += pop2;

                ++resultado1;
            }
            else if (pop2 > pop1){
                printf("ATRIBUTO SELECIONADO: POPULACAO\n");
                printf("%s = %i \n", codigo1, pop1);
                printf("%s = %i \n", codigo2, pop2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo2);
                
                soma1 += pop1;
                soma2 += pop2;

                ++resultado2;
            }
            else{
                printf("ATRIBUTO SELECIONADO: POPULACAO\n");
                printf("%s = %i \n", codigo1, pop1);
                printf("%s = %i \n", codigo2, pop2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += pop1;
                soma2 += pop2;
            }
            break;


        case 3:
            if(area1 > area2){
                printf("ATRIBUTO SELECIONADO: AREA\n");
                printf("%s = %f \n", codigo1, area1);
                printf("%s = %f \n", codigo2, area2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo1);

                soma1 += area1;
                soma2 += area2;

                ++resultado1;
            }
            else if (area2 > area1){
                printf("ATRIBUTO SELECIONADO: AREA\n");
                printf("%s = %f \n", codigo1, area1);
                printf("%s = %f \n", codigo2, area2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo2);
                
                soma1 += area1;
                soma2 += area2;

                ++resultado2;
            }
            else{
                printf("ATRIBUTO SELECIONADO: AREA\n");
                printf("%s = %f \n", codigo1, area1);
                printf("%s = %f \n", codigo2, area2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += area1;
                soma2 += area2;
            }
            break;

        case 4:
            if(pib1 > pib2){
                printf("ATRIBUTO SELECIONADO: PIB  \n");
                printf("%s = %f \n", codigo1, pib1);
                printf("%s = %f \n", codigo2, pib2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo1);

                soma1 += pib1;
                soma2 += pib2;

                ++resultado1;
            }
            else if (pib2 > pib1){
                printf("ATRIBUTO SELECIONADO: PIB  \n");
                printf("%s = %f \n", codigo1, pib1);
                printf("%s = %f \n", codigo2, pib2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo2);

                soma1 += pib1;
                soma2 += pib2;

                ++resultado2;
            }
            else{
                printf("ATRIBUTO SELECIONADO: PIB  \n");
                printf("%s = %f \n", codigo1, pib1);
                printf("%s = %f \n", codigo2, pib2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += pib1;
                soma2 += pib2;
            }
            break;


        case 5:
            if(turismo1 > turismo2){
                printf("ATRIBUTO SELECIONADO: PONTOS TURISTICOS  \n");
                printf("%s = %i \n", codigo1, turismo1);
                printf("%s = %i \n", codigo2, turismo2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo1);

                soma1 += turismo1;
                soma2 += turismo2;

                ++resultado1;
            }
            else if (turismo2 > turismo1){
                printf("ATRIBUTO SELECIONADO: PONTOS TURISTICOS  \n");
                printf("%s = %i \n", codigo1, turismo1);
                printf("%s = %i \n", codigo2, turismo2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo2);

                soma1 += turismo1;
                soma2 += turismo2;

                ++resultado2;
            }
            else{
                printf("ATRIBUTO SELECIONADO: PONTOS TURISTICOS  \n");
                printf("%s = %i \n", codigo1, turismo1);
                printf("%s = %i \n", codigo2, turismo2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += turismo1;
                soma2 += turismo2;
            }
            break;


            case 6:
            if(densidade1 > densidade2){
                printf("ATRIBUTO SELECIONADO: DENSIDADE DEMOGRAFICA  \n");
                printf("%s = %f \n", codigo1, densidade1);
                printf("%s = %f \n", codigo2, densidade2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo2);

                soma1 += densidade1;
                soma2 += densidade2;

                ++resultado2;
            }
            else if (densidade1 < densidade2){
                printf("ATRIBUTO SELECIONADO: DENSIDADE DEMOGRAFICA  \n");
                printf("%s = %f \n", codigo1, densidade1);
                printf("%s = %f \n", codigo2, densidade2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo1);

                soma1 += densidade1;
                soma2 += densidade2;

                ++resultado1;
            }
            else{
                printf("ATRIBUTO SELECIONADO: DENSIDADE DEMOGRAFICA  \n");
                printf("%s = %f \n", codigo1, densidade1);
                printf("%s = %f \n", codigo2, densidade2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += densidade1;
                soma2 += densidade2;
            }
            break;
        default:
            printf("Opcao invalida! \nSaindo do programa...\n");
            break;
        }
    printf("FIM DA RODADA 1 !\n");
    printf("|----------------------------------|\n");    
    printf("   RODADA NUMERO 2:\n");
    printf("1 - Codigo \n");
    printf("2 - Populacao \n");
    printf("3 - Area \n");
    printf("4 - PIB \n");
    printf("5 - Número de pontos turísticos \n");
    printf("6 - Densidade demográfica \n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    printf("|----------------------------------|\n");
    if(escolha1 != escolha2){
        switch (escolha2){
        case 1:
            printf("CIDADE 1 -\n");
            printf("Carta: %s \n", codigo1);
            printf("PIB: %.2f \n", pib1);
            printf("Populacao: %i \n", pop1);
            printf("area: %.2f \n", area1);
            printf("Pontos turisticos: %i \n", turismo1);
            printf("Densidade Populacional: %.2f \n", densidade1);
            printf("PIB Per Capita: %.2f \n", percapita1);
            printf("Super poder: %.2f \n", super1);

            printf("|----------------------------------|\n");

            printf("CIDADE 2 -\n");
            printf("Carta: %s \n", codigo2);
            printf("PIB: %.2f \n", pib2);
            printf("Populacao: %i \n", pop2);
            printf("area: %.2f \n", area2);
            printf("pontos turisticos: %i \n", turismo2);
            printf("Densidade Populacional: %.2f \n", densidade2);
            printf("PIB Per Capita: %.2f \n", percapita2);
            printf("Super poder: %.2f \n", super2);
            printf("|----------------------------------|\n");
        break;
        case 2:
            if(pop1 > pop2){
                //Mostra os valores de cada atributo e compara para definir o vencedor 
                printf("ATRIBUTO SELECIONADO: POPULACAO \n");
                printf("%s = %i \n", codigo1, pop1);
                printf("%s = %i \n", codigo2, pop2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo1);

                soma1 += pop1;
                soma2 += pop2;

                ++resultado1;
            }
            else if (pop2 > pop1){
                printf("ATRIBUTO SELECIONADO: POPULACAO\n");
                printf("%s = %i \n", codigo1, pop1);
                printf("%s = %i \n", codigo2, pop2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo2);
                
                soma1 += pop1;
                soma2 += pop2;

                ++resultado2;
            }
            else{
                printf("ATRIBUTO SELECIONADO: POPULACAO\n");
                printf("%s = %i \n", codigo1, pop1);
                printf("%s = %i \n", codigo2, pop2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += pop1;
                soma2 += pop2;
            }
            break;


        case 3:
            if(area1 > area2){
                printf("ATRIBUTO SELECIONADO: AREA\n");
                printf("%s = %f \n", codigo1, area1);
                printf("%s = %f \n", codigo2, area2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo1);

                soma1 += area1;
                soma2 += area2;

                ++resultado1;
            }
            else if (area2 > area1){
                printf("ATRIBUTO SELECIONADO: AREA\n");
                printf("%s = %f \n", codigo1, area1);
                printf("%s = %f \n", codigo2, area2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo2);
                
                soma1 += area1;
                soma2 += area2;

                ++resultado2;
            }
            else{
                printf("ATRIBUTO SELECIONADO: AREA\n");
                printf("%s = %f \n", codigo1, area1);
                printf("%s = %f \n", codigo2, area2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += area1;
                soma2 += area2;
            }
            break;

        case 4:
            if(pib1 > pib2){
                printf("ATRIBUTO SELECIONADO: PIB  \n");
                printf("%s = %f \n", codigo1, pib1);
                printf("%s = %f \n", codigo2, pib2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo1);

                soma1 += pib1;
                soma2 += pib2;

                ++resultado1;
            }
            else if (pib2 > pib1){
                printf("ATRIBUTO SELECIONADO: PIB  \n");
                printf("%s = %f \n", codigo1, pib1);
                printf("%s = %f \n", codigo2, pib2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo2);

                soma1 += pib1;
                soma2 += pib2;

                ++resultado2;
            }
            else{
                printf("ATRIBUTO SELECIONADO: PIB  \n");
                printf("%s = %f \n", codigo1, pib1);
                printf("%s = %f \n", codigo2, pib2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += pib1;
                soma2 += pib2;
            }
            break;


        case 5:
            if(turismo1 > turismo2){
                printf("ATRIBUTO SELECIONADO: PONTOS TURISTICOS  \n");
                printf("%s = %i \n", codigo1, turismo1);
                printf("%s = %i \n", codigo2, turismo2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo1);

                soma1 += turismo1;
                soma2 += turismo2;

                ++resultado1;
            }
            else if (turismo2 > turismo1){
                printf("ATRIBUTO SELECIONADO: PONTOS TURISTICOS  \n");
                printf("%s = %i \n", codigo1, turismo1);
                printf("%s = %i \n", codigo2, turismo2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo2);

                soma1 += turismo1;
                soma2 += turismo2;

                ++resultado2;
            }
            else{
                printf("ATRIBUTO SELECIONADO: PONTOS TURISTICOS  \n");
                printf("%s = %i \n", codigo1, turismo1);
                printf("%s = %i \n", codigo2, turismo2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += turismo1;
                soma2 += turismo2;
            }
            break;


            case 6:
            if(densidade1 > densidade2){
                printf("ATRIBUTO SELECIONADO: DENSIDADE DEMOGRAFICA  \n");
                printf("%s = %f \n", codigo1, densidade1);
                printf("%s = %f \n", codigo2, densidade2);
                printf("Carta %s foi a vencedora, Parabéns! \n", codigo2);

                soma1 += densidade1;
                soma2 += densidade2;

                ++resultado2;
            }
            else if (densidade1 < densidade2){
                printf("ATRIBUTO SELECIONADO: DENSIDADE DEMOGRAFICA  \n");
                printf("%s = %f \n", codigo1, densidade1);
                printf("%s = %f \n", codigo2, densidade2);
                printf("Carta %s foi a ganhadora, Parabéns! \n", codigo1);

                soma1 += densidade1;
                soma2 += densidade2;

                ++resultado1;
            }
            else{
                printf("ATRIBUTO SELECIONADO: DENSIDADE DEMOGRAFICA  \n");
                printf("%s = %f \n", codigo1, densidade1);
                printf("%s = %f \n", codigo2, densidade2);
                printf("As duas cartas tem os mesmos pontos... Empate!\n");

                soma1 += densidade1;
                soma2 += densidade2;
            }
            break;
        default:
            printf("Opcao invalida! \nSaindo do programa...\n");
            break;
        }
    }
    else{
        printf("Os dois atributos escolhidos sao iguais, opcao invalida!\n");
        exit(0);
    }

    printf("|----------------------------------|\n");
    printf("SOMA DOS 2 ATRIBUTOS SELECIONADOS: \n");
    printf("Carta 1: %f \n", soma1);
    printf("Carta 2: %f \n", soma2);

    if (soma1 > soma2){
        ++resultado1;
    }
    else if (soma2 > soma1){
        ++resultado2;
    }
    

    if(resultado1 > resultado2){
        printf("A carta %s foi a vencedora do jogo!\n", codigo1);
    }
    else if (resultado2 > resultado1){
        printf("A carta %s foi a campea do desafio!\n", codigo2);
    }
    else{
        printf("O jogo terminou empatado...\n");
    }
    

return 0;
} 
