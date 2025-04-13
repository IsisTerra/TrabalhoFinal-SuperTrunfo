#include <stdio.h>

int main()
{
    // Variáveis definidas para cada atributo das duas cartas
    char estado = 'B', estado2 = 'D';
    char codigo[4] = "B02", codigo2[4] = "C03";
    char cidade[50] = "Salvador", cidade2[50] = "Recife";
    int populacao = 2418005, populacao2 = 1488920;
    float area = 305.175, area2 = 218.435;
    float pib = 62, pib2 = 54;
    int turismo = 78, turismo2 = 63;
    float densPop, densPop2;

    printf("***Bem vindo ao Super Trunfo!***\n");

    // // Informações da primeira carta:
    // printf("Por favor, insira os dados da sua primeira carta como solicitado\n\n"); // Orientações ao usuário
    // printf("Insira a letra, de 'A' a 'H': ");
    // scanf(" %c", &estado); // Espaço para que o enter não seja lido como o caractere escolhido
    // printf("A letra do estado seguida de um número de 01 a 04. Ex: A01, B03: ");
    // scanf("%s", &codigo);
    // printf("O nome da cidade: ");
    // scanf("%s", &cidade);
    // printf("O número de habitantes da cidade: ");
    // scanf("%d", &populacao);
    // printf("A área da cidade em quilômetros quadrados: ");
    // scanf("%f", &area);
    // printf("O Produto Interno Bruto da cidade (em bilhões de reais): ");
    // scanf("%f", &pib);
    // printf("A quantidade de pontos turísticos na cidade: ");
    // scanf("%d", &turismo);

    // // Informações da segunda carta:
    // printf("Dados salvos.\n\n Agora, insira os dados da sua segunda carta\n\n");
    // printf("Insira uma letra de 'A' a 'H': ");
    // scanf(" %c", &estado2); // Espaço para que o enter não seja lido como o caractere escolhido
    // printf("A letra do estado seguida de um número de 01 a 04. Ex: A01, B03: ");
    // scanf("%s", &codigo2);
    // printf("O nome da cidade: ");
    // scanf("%s", &cidade2);
    // printf("O número de habitantes da cidade: ");
    // scanf("%d", &populacao2);
    // printf("A área da cidade em quilômetros quadrados: ");
    // scanf("%f", &area2);
    // printf("O Produto Interno Bruto da cidade (em bilhões de reais): ");
    // scanf("%f", &pib2);
    // printf("A quantidade de pontos turísticos na cidade: ");
    // scanf("%d", &turismo2);

    /*Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.*/

    densPop = populacao / area;
    densPop2 = populacao2 / area2;

    int atributoEscolhido1, atributoEscolhido2; // Variáveis de controle switch
    float atributo1Carta1, atributo1Carta2;     // Variáveis para guardar os valores do primeiro atributo da carta 1 e da carta 2
    float atributo2Carta1, atributo2Carta2;     // Variáveis para guardar os valores do segundo atributo da carta 1 e da carta 2
    float somaCarta1, somaCarta2;               // Variáveis para guardar a soma dos atributos da carta 1 e da carta 2

    printf("Menu Principal\n"); // Menu para escolher o atributo
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha o primeiro atributo para duelar: ");
    scanf("%d", &atributoEscolhido1);

    printf("\n");

    switch (atributoEscolhido1)
    {
    case 1:
        printf("*** Atributo População ***\n");
        printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2);     // Nome das cidades
        printf("Carta 1: %d - Carta 2: %d\n", populacao, populacao2); // Valor dos atributos das duas cartas
        populacao > populacao2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
        atributo1Carta1 = populacao;
        atributo1Carta2 = populacao2;
        break;
    case 2:
        printf("*** Atributo Área ***\n");
        printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2);       // Nome das cidades
        printf("Carta 1: %.2f km² - Carta 2: %.2f km²\n", area, area2); // Valor dos atributos das duas cartas
        area > area2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
        atributo1Carta1 = area;
        atributo1Carta2 = area2;
        break;
    case 3:
        printf("*** Atributo PIB ***\n");
        printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2);                                   // Nome das cidades
        printf("Carta 1: %.2f Bilhões de pessoas - Carta 2: %.2f Bilhões de pessoas\n", pib, pib2); // Valor dos atributos das duas cartas
        pib > pib2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
        atributo1Carta1 = pib;
        atributo1Carta2 = pib2;
        break;
    case 4:
        printf("*** Atributo Pontos Turísticos ***\n");
        printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2); // Nome das cidades
        printf("Carta 1: %d - Carta 2: %d\n", turismo, turismo2); // Valor dos atributos das duas cartas
        turismo > turismo2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
        atributo1Carta1 = turismo;
        atributo1Carta2 = turismo2;
        break;
    case 5:
        printf("*** Atributo Densidade Populacional ***\n");
        printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2);                 // Nome das cidades
        printf("Carta 1: %.2f h/km² - Carta 2: %.2f h/km²\n", densPop, densPop2); // Valor dos atributos das duas cartas
        densPop < densPop2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
        atributo1Carta1 = densPop;
        atributo1Carta2 = densPop2;
        break;
    default:
        printf("Opção inválida. Tente novamente.\n"); // Se o usuário inserir uma opção diferente das listadas, há o aviso de opção inválida.
        break;
    }

    printf("\n");
    printf("Escolha o segundo atributo para duelar: \n");
    printf("Atenção! Você deve escolher um atributo diferente do primeiro!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &atributoEscolhido2);

    printf("\n");

    if (atributoEscolhido1 == atributoEscolhido2)
    {
        printf("Você já escolheu esse atributo!\n");
    }
    else
    {
        switch (atributoEscolhido2)
        {
        case 1:
            printf("*** Atributo População ***\n");
            printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2);     // Nome das cidades
            printf("Carta 1: %d - Carta 2: %d\n", populacao, populacao2); // Valor dos atributos das duas cartas
            populacao > populacao2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
            atributo2Carta1 = populacao;
            atributo2Carta2 = populacao2;
            break;
        case 2:
            printf("*** Atributo Área ***\n");
            printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2);       // Nome das cidades
            printf("Carta 1: %.2f km² - Carta 2: %.2f km²\n", area, area2); // Valor dos atributos das duas cartas
            area > area2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
            atributo2Carta1 = area;
            atributo2Carta2 = area2;
            break;
        case 3:
            printf("*** Atributo PIB ***\n");
            printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2);                                   // Nome das cidades
            printf("Carta 1: %.2f Bilhões de pessoas - Carta 2: %.2f Bilhões de pessoas\n", pib, pib2); // Valor dos atributos das duas cartas
            pib > pib2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
            atributo2Carta1 = pib;
            atributo2Carta2 = pib2;
            break;
        case 4:
            printf("*** Atributo Pontos Turísticos ***\n");
            printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2); // Nome das cidades
            printf("Carta 1: %d - Carta 2: %d\n", turismo, turismo2); // Valor dos atributos das duas cartas
            turismo > turismo2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
            atributo2Carta1 = turismo;
            atributo2Carta2 = turismo2;
            break;
        case 5:
            printf("*** Atributo Densidade Populacional ***\n");
            printf("%s (Carta 1) X %s (Carta 2)\n", cidade, cidade2);                 // Nome das cidades
            printf("Carta 1: %.2f h/km² - Carta 2: %.2f h/km²\n", densPop, densPop2); // Valor dos atributos das duas cartas
            densPop < densPop2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!\n");
            atributo2Carta1 = densPop;
            atributo2Carta2 = densPop2;
            break;

        default:
            printf("Opção inválida. Tente novamente.\n"); // Se o usuário inserir uma opção diferente das listadas, há o aviso de opção inválida.
            break;
        }

        printf("\n"); // Espaço para ficar mais organizado
        somaCarta1 = atributo1Carta1 + atributo2Carta1;
        somaCarta2 = atributo1Carta2 + atributo2Carta2;

        printf("*** Resultado da rodada ***\n");
        printf("Com o total de %.2f da carta 1 e %.2f da carta 2:\n", somaCarta1, somaCarta2);
        somaCarta1 > somaCarta2 ? printf("Carta 1 venceu!\n") : printf("Carta 2 venceu!");
    }

    return 0;
}
