#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    // Variáveis para cada atributo da cidade
    char nome[50];
    char codigo[20];
    int populacao;
    float area;
    float pib;
    int ponto;

    // Cadastro das Cartas:
    // Cadastro do Nome da Cidade 
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    // Cadastro do código da carta 
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);
    
    // Cadastro da população da cidade
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    // Cadastro da área da cidade
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    // Cadastro do PIB
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    // Cadastro dos pontos turísticos
    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &ponto);

    // Exibição dos Dados da Carta:
    printf("Cidade: %s\n", nome);
    printf("Código da carta: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", ponto);

    return 0;
}
