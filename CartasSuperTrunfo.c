#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Defini a estrutura da carta
typedef struct
    {
        char codigo_carta[5];
        char cidade[30];
        char estado[2];
        int populacao;
        float area;
        float pib;
        int numero_pontos_turisticos;

    } Carta;

float densidade_populacional(Carta carta)
    {
        return (carta.area != 0) ? carta.populacao / carta.area : 0;  // Evita divisão por zero
    }

float pib_per_capita(Carta carta)
    {
        return (carta.populacao != 0) ? carta.pib / carta.populacao : 0;  // Evita divisão por zero
    }

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    Carta carta1, carta2;
    printf("Bem vindo ao jogo Super Trunfo\n");
    printf("Digite os dados da primeira carta:\n");

    printf("Código da carta: ");
    scanf("%4s", &carta1.codigo_carta);

    printf("Estado (Uma letra de A a H): ");
    scanf("%1s", &carta1.estado);
    
    printf("Nome da cidade: ");
    scanf(" %29[^\n]", &carta1.cidade);  // Permite espaços na entrada
    
    printf("População: ");
    scanf("%d", &carta1.populacao);
    
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    
    printf("PIB (bilhões): ");
    scanf("%f", &carta1.pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numero_pontos_turisticos);

    printf("\nDigite os dados da segunda carta:\n");

    printf("Código da carta: ");
    scanf("%4s", &carta2.codigo_carta);

    printf("Estado (Uma letra de A a H): ");
    scanf("%1s", &carta2.estado);
    
    printf("Nome da cidade: ");
    scanf(" %29[^\n]", &carta2.cidade);  // Permite espaços na entrada
    
    printf("População: ");
    scanf("%d", &carta2.populacao);
    getchar();
    
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    getchar();
    
    printf("PIB (bilhões): ");
    scanf("%f", &carta2.pib);
    getchar();
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numero_pontos_turisticos);
    getchar();

    printf("\n--- Cartas Cadastradas ---\n");
    printf("Carta 1\nCódigo: %s\nCidade: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f km2\nPIB: R$ %.2f bilhões\nPontos turísticos: %d\n",
           carta1.codigo_carta ,carta1.cidade, carta1.estado, carta1.populacao, carta1.area, carta1.pib, carta1.numero_pontos_turisticos);
    printf("----------------------------\n");       
    printf("Carta 2\nCódigo: %s\nCidade: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f km2\nPIB: R$ %.2f bilhões\nPontos turísticos: %d\n",
           carta2.codigo_carta, carta2.cidade, carta2.estado, carta2.populacao, carta2.area, carta2.pib, carta2.numero_pontos_turisticos);

    return 0;
}
