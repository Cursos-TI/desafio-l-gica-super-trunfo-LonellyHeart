#include <stdio.h>

int main(){
    // declarações basicads para a carta 1
    char estado1[3], card_cod1[5], cidade1[20]; // Variaveis para o Estado, o Codigo da Carta e da Cidade, respectivamente
    int numTurismo1, numCarta1 = 1; // Numero de Pontos Turistico da cidade e Numero da carta (1), respectivamente
    unsigned int populacao1; // População da cidade
    float area1, pib1, densidade1, capita1, superPoder1; // Area da cidade, PIB da cidade, Densidade Populacional da cidade e PIB per Capita da cidade e o Super Poder, respectivamente.

    // declarações basicas para a carta 2
    char estado2[3], card_cod2[5], cidade2[20]; // Variaveis para o Estado, o Codigo da Carta e da Cidade, respectivamente
    int numTurismo2, numCarta2 = 2; // População da cidade,Numero de Pontos Turistico da cidade e Numero da carta (1), respectivamente
    unsigned int populacao2; // População da cidade
    float area2, pib2, densidade2, capita2, superPoder2; // Area da cidade, PIB da cidade, Densidade Populacional da cidade e PIB per Capita da cidade e o Super poder, respectivamente.
    
    // Declaração para os resultado dos vencedores das comparações entre as cartas

    short int resPopulacao, resArea, resPib, resTurismo, resDensidade, resCapita, resSuperPoder;


    //As informações que deve ser escrito da PRIMEIRA carta, e a leitura de dados por usuarios.

    printf("Digite o estado da carta: ");
    scanf(" %s", estado1);

    printf("Digite o codigo da carta: ");
    scanf(" %s" ,card_cod1);

    printf("Digite o nome da cidade: ");
    scanf(" %s" ,cidade1);
                
    printf("Digite a população da cidade: ");
    scanf(" %u", &populacao1);
        
    printf("Digite a area em km² da cidade: ");
    scanf("%f", &area1);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numTurismo1);

    // Aqui são feitos os processamentos de dados para outras propiedadas da cidade 1, que não necessita de inclusão pelo usuario.
    
    densidade1 = (float) populacao1 / area1; // Divide a população da cidade pela sua area, para calcular a densidade populacional da cidade 1. *Usando do cast "(float)" para transformar populacao em float
    capita1 = (float) pib1 / populacao1; // Divide o PIB da cidade pela sua população, para calcular o PIB per Capita da cidade 1. *Usando do cast "(float)" para transformar populacao em float
    superPoder1 = (float) populacao1 + area1 + pib1 + numTurismo1 + capita1 + (1/densidade1); // O Super Poder é soma dos seguintes itens: população, área, PIB, número de pontos turísticos, PIB per capita e o inverso (1/densidade) da densidade populacional

    //As informações que deve ser escrito da SEGUNDMA carta, e a leitura de dados por usuarios.

    printf("\n\nDigite o estado da carta: ");
    scanf(" %s", estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %s" ,card_cod2);

    printf("Digite o nome da cidade: ");
    scanf(" %s" ,cidade2);
                
    printf("Digite a população da cidade: ");
    scanf(" %u", &populacao2);
        
    printf("Digite a area em km² da cidade: ");
    scanf("%f", &area2);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numTurismo2);

    // Aqui são feitos os processamentos de dados para outras propiedadas da cidade 1, que não necessita de inclusão pelo usuario.

    densidade2 = (float) populacao2 / area2; // Divide a população da cidade pela sua area, para calcular a densidade populacional da cidade 1. *Usando do cast "(float)" para transformar populacao em float
    capita2 = (float) pib2 / populacao2; // Divide o PIB da cidade pela sua população, para calcular o PIB per Capita da cidade 1. *Usando do cast "(float)" para transformar populacao em float
    superPoder2 = (float) populacao2 + area2 + pib2 + numTurismo2 + capita2 + (1/densidade2); // O Super Poder é soma dos seguintes itens: população, área, PIB, número de pontos turísticos, PIB per capita e o inverso (1/densidade) da densidade populacional

    //Impressão dos dados salvos pelo usuarios das cartas 1 e 2.

    //Carta 1
    printf(
        "\n\n"
        "Carta %d: \n"
        "Estado: %s \n"
        "Codigo: %s \n"
        "Nome da Cidade: %s \n"
        "Populacao: %d \n"
        "Area: %.2f km² \n"
        "PIB: %.2f \n"
        "Número de Pontos Turísticos: %d \n"
        "Densidade Populacional: %.2f hab/km² \n"
        "PIB per Capita: %.2f reais",
         numCarta1, estado1, card_cod1, cidade1, populacao1, area1, pib1, numTurismo1, densidade1, capita1);
        
        // Carta 2
    printf(
        "\n\n"
        "Carta %d: \n"
        "Estado: %s \n"
        "Codigo: %s \n"
        "Nome da Cidade: %s \n"
        "Populacao: %d \n"
        "Area: %.2f km² \n"
        "PIB: %.2f \n"
        "Número de Pontos Turísticos: %d \n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais \n\n",
        numCarta2, estado2, card_cod2, cidade2, populacao2, area2, pib2, numTurismo2, densidade2, capita2);

    // Teste entre as cartas para ver quem é o vencedor (Atraves da carta que tem mais população)
    
    printf("Comparação entre as cartas: \n");
    printf("Carta %d: %s (%s): %d\n" ,numCarta1, cidade1, estado1, populacao1);
    printf("Carta %d: %s (%s): %d\n", numCarta2, cidade2, estado2, populacao2 );
    if( populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) Venceu!\n" ,cidade1);
    }
    else{
        printf("Resultado: Carta 2 (%s Venceu!\n",cidade2);
    }

    // Comparacao dos resultados entre as cartas

    /* resPopulacao = populacao2 > populacao1; //Compara as populações da cidade 1 e cidade 2
    resArea = area2 > area1; // Compara as areas da cidade 1 e cidade 2
    resPib = pib2 > pib1; // compara os PIBs da cidade 1 e cidade 2
    resTurismo = numTurismo2 > numTurismo1; // Compara os numeros de pontos turisticos da cidade 1 e cidade 2
    resDensidade = densidade2 < densidade1; // Compara a densidade populacional da cidade 1 e cidade 2 (vence quem tiver a menor)
    resCapita = capita2 > capita1; // Compara o PIB per Capita da cidade 1 e cidade 2
    resSuperPoder = superPoder2 > superPoder1; // Compara o Super Poder da cidade 1 e cidade 2
            

    printf("\n\n-------------------------------Resultado do Jogo-------------------------------\n");
    printf("Comparação das Cartas: \n");
    printf("População: Carta %d Venceu (%d)\n", (resPopulacao + 1), populacao1 > populacao2);
    printf("Area: Carta %d Venceu (%d)\n", (resArea + 1), area1 > area2);
    printf("PIB: Carta %d Venceu (%d)\n", (resPib + 1), pib1 > pib2);
    printf("Pontos Turisticos: Carta %d Venceu (%d)\n", (resTurismo + 1), numTurismo1 > numTurismo2);
    printf("Densidade Populacional: Carta %d Venceu (%d)\n", (resDensidade + 1), densidade1 < densidade2);
    printf("PIB per Capita: Carta %d Venceu (%d)\n", (resCapita + 1), capita1 > capita2);
    printf("Super Poder: Carta %d Venceu (%d)\n", (resSuperPoder + 1), superPoder1 > superPoder2);
    */ // CODIGO ANTERIOR QUE NÃO HAVIA CONDICIONAL

    return 0;
}
