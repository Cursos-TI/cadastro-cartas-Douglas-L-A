#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  struct Carta {
    char estado;           // Ex: 'A'
    char codigo[4];        // Ex: "A01" (máx 3 chars + terminador)
    char nomeCidade[50];   // Nome da cidade (até 49 caracteres)
    int populacao;         // Número de habitantes
    float area;            // Área em km²
    float pib;             // PIB (unidade a combinar com enunciado)
    int pontosTuristicos;  // Quantidade de pontos turísticos
  };
  // Área para entrada de dados
  struct Carta carta1;
  struct Carta carta2;

  /* ===== Cadastro da primeira carta ===== */
  printf("Cadastro da primeira carta:\n");
  printf("Estado (letra A-H): ");
  scanf(" %c", &carta1.estado);

  printf("Codigo da carta (ex: A01): ");
  scanf("%3s", carta1.codigo);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", carta1.nomeCidade);

  printf("Populacao: ");
  scanf("%d", &carta1.populacao);

  printf("Area (em km²): ");
  scanf("%f", &carta1.area);

  printf("PIB: ");
  scanf("%f", &carta1.pib);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &carta1.pontosTuristicos);

  /* ===== Cadastro da segunda carta ===== */
  printf("\nCadastro da segunda carta:\n");

  printf("Estado (letra A-H): ");
  scanf(" %c", &carta2.estado);

  printf("Codigo da carta (ex: B02): ");
  scanf("%3s", carta2.codigo);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", carta2.nomeCidade);

  printf("Populacao: ");
  scanf("%d", &carta2.populacao);

  printf("Area (em km²): ");
  scanf("%f", &carta2.area);

  printf("PIB: ");
  scanf("%f", &carta2.pib);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &carta2.pontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("\n=== Dados da Primeira Carta ===\n");
  printf("Estado: %c\n", carta1.estado);
  printf("Codigo: %s\n", carta1.codigo);
  printf("Cidade: %s\n", carta1.nomeCidade);
  printf("Populacao: %d\n", carta1.populacao);
  printf("Area: %.2f km²\n", carta1.area);
  printf("PIB: %.2f\n", carta1.pib);
  printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

  printf("\n=== Dados da Segunda Carta ===\n");
  printf("Estado: %c\n", carta2.estado);
  printf("Codigo: %s\n", carta2.codigo);
  printf("Cidade: %s\n", carta2.nomeCidade);
  printf("Populacao: %d\n", carta2.populacao);
  printf("Area: %.2f km²\n", carta2.area);
  printf("PIB: %.2f\n", carta2.pib);
  printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);


return 0;
} 
