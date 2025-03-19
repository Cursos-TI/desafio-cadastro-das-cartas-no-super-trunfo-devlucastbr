#include <stdio.h>
#include <ctype.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Desafio escolhido: nível aventureiro
// Defini a estrutura da carta
typedef struct
    {
        char codigo_carta[4];
        char cidade[30];
        char estado[2];
        int populacao;
        float area;
        float pib;
        int numero_pontos_turisticos;

    } Carta;

// Função para calcular densidade populacional
float densidade_populacional(Carta carta)
    {
        return (carta.area != 0) ? carta.populacao / carta.area : 0;  // Evita divisão por zero
    }

// Função para calcular pib per capita
float pib_per_capita(Carta carta)
    {
        return (carta.populacao != 0) ? carta.pib * 1000000000 / carta.populacao : 0;  // Evita divisão por zero
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
    
    // Definição das cartas 1 e 2 e captura de entradas do usuário
    Carta carta1, carta2;
    printf("Bem vindo ao jogo Super Trunfo\n");
    printf("Digite os dados da primeira carta:\n");

    printf("Código da carta(Uma letra de A a H + 0 + Um numero de 1 a 4. Ex: A01): ");
    scanf("%3s", &carta1.codigo_carta);
    // Converte a primeira letra para maiusculo
    carta1.codigo_carta[0] = toupper(carta1.codigo_carta[0]);

    printf("Estado (Uma letra de A a H): ");
    scanf("%1s", &carta1.estado);
    // Converte para maiusculo
    carta1.estado[0] = toupper(carta1.estado[0]);
    
    printf("Nome da cidade: ");
    scanf(" %29[^\n]", &carta1.cidade);  // Permite espaços na entrada
    
    printf("População: ");
    scanf("%d", &carta1.populacao);
    
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    
    printf("PIB (Em bilhões): ");
    scanf("%f", &carta1.pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numero_pontos_turisticos);

    // Calcula a densidade populacional e pib per capita da carta 1
    float dp1 = densidade_populacional(carta1);
    float ppc1 = pib_per_capita(carta1);

    printf("\nDigite os dados da segunda carta:\n");

    printf("Código da carta(Uma letra de A a H + 0 + Um numero de 1 a 4. Ex: A02): ");
    scanf("%3s", &carta2.codigo_carta);
    // Converte a primeira letra para maiusculo
    carta2.codigo_carta[0] = toupper(carta2.codigo_carta[0]);

    printf("Estado (Uma letra de A a H): ");
    scanf("%1s", &carta2.estado);
    // Converte para maiusculo
    carta2.estado[0] = toupper(carta2.estado[0]);
    
    printf("Nome da cidade: ");
    scanf(" %29[^\n]", &carta2.cidade);  // Permite espaços na entrada
    
    printf("População: ");
    scanf("%d", &carta2.populacao);
    getchar();
    
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    getchar();
    
    printf("PIB (Em bilhões): ");
    scanf("%f", &carta2.pib);
    getchar();
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numero_pontos_turisticos);
    getchar();

    // Calcula a densidade populacional e pib per capita da carta 2
    float dp2 = densidade_populacional(carta2);
    float ppc2 = pib_per_capita(carta2);

    printf("\n--- Cartas Cadastradas ---\n");
    printf("Carta 1\nCódigo: %s\nCidade: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f km2\nPIB: R$ %.2f bilhões\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km2\nPib Per Capita: R$ %.2f\n",
           carta1.codigo_carta ,carta1.cidade, carta1.estado, carta1.populacao, carta1.area, carta1.pib, carta1.numero_pontos_turisticos, dp1, ppc1);
    printf("----------------------------\n");       
    printf("Carta 2\nCódigo: %s\nCidade: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f km2\nPIB: R$ %.2f bilhões\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km2\nPib Per Capita: R$ %.2f\n",
           carta2.codigo_carta, carta2.cidade, carta2.estado, carta2.populacao, carta2.area, carta2.pib, carta2.numero_pontos_turisticos, dp2, ppc2);

    return 0;
}
