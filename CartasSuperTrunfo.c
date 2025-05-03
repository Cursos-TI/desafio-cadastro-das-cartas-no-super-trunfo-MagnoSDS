#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


//Carta1

int main() {
    char estado1[10], estado2[10];
    char cidade1[10], cidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    printf("Carta 1!\n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado1);
    printf("O nome do estado é: %s\n", estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("A cidade é: %s\n", cidade1);

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao1);
    printf("O numero da populacao é: %d\n", populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("A area é: %f\n", area1);

    printf("Digite o valor do pib: ");
    scanf("%f", &pib1);
    printf("O valor do pib é: %f\n", pib1);

    printf("Digite a quantidade de pontos turiscos: ");
    scanf("%d", &pontosturisticos1);
    printf("A quantidade de pontos turisticos é: %d\n", pontosturisticos1);

   
   //Carta2

    printf("Carta 2!\n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado2);
    printf("O nome do estado é: %s\n", estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("A cidade é: %s\n", cidade2);

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao2);
    printf("O numero da populacao é: %d\n", populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("A area é: %f\n", area2);

    printf("Digite o valor do pib: ");
    scanf("%f", &pib2);
    printf("O valor do pib é: %f\n", pib2);

    printf("Digite a quantidade de pontos turiscos: ");
    scanf("%d", &pontosturisticos2);
    printf("A quantidade de pontos turisticos é: %d\n", pontosturisticos2);
   
   
   
   
   
    return 0;





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


}
