#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int carta;
    char estado[20];
    char cidade[20];
    int habitantes;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite o numero da carta: ");
    scanf("%d", &carta);
    printf("O numero da carta é: %d\n", carta);

    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    printf("O nome do estado é: %s\n", estado);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &habitantes);
    printf("O numero de habitantes é: %d\n", habitantes);

    printf("Digite a area: ");
    scanf("%f", &area);
    printf("A area é: %f\n", area);

    printf("Digite o valor do pib: ");
    scanf("%f", &pib);
    printf("O valor do pib é: %f\n", pib);

    printf("Digite a quantidade de pontosturiscos: ");
    scanf("%d", &pontosturisticos);
    printf("A quantidade de pontosturisticos é: %d\n", pontosturisticos);

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
