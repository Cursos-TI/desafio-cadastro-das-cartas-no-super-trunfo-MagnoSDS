#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int carta;
    char estado;
    char codigo[10];
    char cidade[10];
    int habitantes;
    float area;
    float PIB;
    int atracao;

    printf("Didite o número da carta: \n");
    scanf("%d", &carta);

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o númedo do código da cidade: \n");
    scanf("%d", &codigo);

    printf("Didite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &habitantes);

    printf("Digite a quantidade da área em km²: \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de atracao: \n");
    scanf("%d", &atracao);

    printf("carta: %d\n", carta);
    printf("estado: %s\n", estado);
    printf("codigo: %d\n", codigo);
    printf("cidade: %s\n", cidade);
    printf("habitantes: %d\n", habitantes);
    printf("area: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("atracao: %d", atracao);

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
