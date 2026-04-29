#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char letra_estado1, letra_estado2;
  char codigo_carta1[10], codigo_carta2[10];
  char nome_cidade1[50], nome_cidade2[50];
  unsigned long int populacao1, populacao2;
  int ponto_turisticos1, ponto_turisticos2;
  double area_km1, area_km2;
  double pib1, pib2;
  

  // Área para entrada de dados
  printf("-Cadastro de cartas-");
  printf("- Carta 1 - Informe os dados a seguir: \n");

  printf("Letra do estado (A-H): ");
  scanf(" %c", &letra_estado1);
  
  printf("Codigo da carta:");
  scanf("%s", &codigo_carta1);
  
  printf("Nome da cidade: ");
  scanf("%s", nome_cidade1);
  
  printf("Número da população: ");
  scanf("%lu", &populacao1);
  
  printf("Área em km²: ");
  scanf("%lf", &area_km1);
  
  printf("Pib: ");
  scanf("%lf", &pib1);
  
  printf("Quantidade de pontos turísticos: ");
  scanf("%d", &ponto_turisticos1);
  
  printf("\nCadastro da Carta 1 Finalizado!\n");


  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o código: ");
  scanf("%s", &codigo1);

  printf("Nome cidade: ");
  scanf("%s", nome_cidade1);
    
  printf("Digite a população: ");
  scanf("%lu", &populacao1);

  printf("Digite a área: ");
  scanf("%lf", &card1_area);

  printf("Digite o PIB: ");
  scanf("%lf", &card1_pib);

  
  /* 
  printf("-Cadastro de cartas-\n\n");
  printf("- Carta 2 \n");
  printf("Digite a letra do estado: ");
  scanf("%c", &letra_estado2);
  printf("\nDigite o codigo da carta: ");
  scanf("%c", &codigo_carta2);
  printf("\nDigite o nome da cidade: ");
  scanf("%s", nome_cidade2);
  printf("\nDigite o número da população: ");
  scanf("%d", &populacao2);
  printf("\nDigite a Área em km² (somente os números): ");
  scanf("%f", &area_km2);
  printf("\nDigite o Pib: ");
  scanf("%f", &pib2);
  printf("\nDigite a quantidade de pontos turísticos: ");
  scanf("%d", &ponto_turisticos2);
  printf("\nCadastro da Carta 2 Finalizado!\n\n");
  */
  
  // Área para exibição dos dados da cidade
  printf("\nResumo das Catas!\n\n");

  printf("- Primeira carta \n");
  printf("Estado: %c\n", letra_estado1);
  printf("Código: %c\n", codigo_carta1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %f Km²\n", area_km1);
  printf("Pib: %2.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", ponto_turisticos1);




return 0;
} 
