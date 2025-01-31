#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo;
    char nome [30];
    int populacao;
    float area;
    float PIB;
    int numeroturistico;
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o Código:\n");
    scanf("%d", &codigo);
    
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &nome);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em Km2:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em R$:\n");
    scanf("%f", &PIB);
    
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &numeroturistico);     
       
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da Cidade: %d\n", codigo);
    printf("Nome da Cidade:%s\n", nome);
    printf("População:%d\n", populacao);
    printf("Área Total:%.2f\n", area); 
    printf("PIB:%.2f\n", PIB);    
    printf("Número de Pontos Turísticos: %'d",numeroturistico);

    return 0;
}
