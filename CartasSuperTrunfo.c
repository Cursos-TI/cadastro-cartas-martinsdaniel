#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char letra_estado1, letra_estado2;
  char codigo_carta1, codigo_carta2;
  char nome_cidade1[20], nome_cidade2[20];
  int populacao1, populacao2;
  float area_km1, area_km2;
  float pib1, pib2;
  int ponto_turisticos1, ponto_turisticos2;

  // Área para entrada de dados
  printf("-Cadastro de cartas-\n\n");
  printf("- Carta 1 \n");
  printf("Digite a letra do estado: ");
  scanf("%s", letra_estado1);
  printf("\nDigite o codigo da carta: ");
  scanf("%s", codigo_carta1);
  printf("\nDigite o nome da cidade: ");
  scanf("%s", nome_cidade1);
  printf("\nDigite o número da população: ");
  scanf("%s", &populacao1);
  printf("\nDigite a Área em km² (somente os números): ");
  scanf("%s", &area_km1);
  printf("\nDigite o Pib: ");
  scanf("%s", &pib1);
  printf("\nDigite a quantidade de pontos turísticos: ");
  scanf("%s", ponto_turisticos1);
  printf("\nCadastro da Carta 1 Finalizado!");
  
  printf("-Cadastro de cartas-\n\n");
  printf("- Carta 2 \n");
  printf("Digite a letra do estado: ");
  scanf("%s", letra_estado2);
  printf("\nDigite o codigo da carta: ");
  scanf("%s", codigo_carta2);
  printf("\nDigite o nome da cidade: ");
  scanf("%s", nome_cidade2);
  printf("\nDigite o número da população: ");
  scanf("%s", &populacao2);
  printf("\nDigite a Área em km² (somente os números): ");
  scanf("%s", &area_km2);
  printf("\nDigite o Pib: ");
  scanf("%s", &pib2);
  printf("\nDigite a quantidade de pontos turísticos: ");
  scanf("%s", ponto_turisticos2);
  printf("\nCadastro da Carta 2 Finalizado!\n\n");
  
  
  // Área para exibição dos dados da cidade
  printf("\nResumo das Catas!\n\n");

  printf("- Primeira carta \n");
  printf("Estado: %s\n", letra_estado1);
  printf("Código: %s\n", codigo_carta1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %f\n Km²", area_km1);
  printf("Pib: %2.f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", ponto_turisticos1);




return 0;
} 
