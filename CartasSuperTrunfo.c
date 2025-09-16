#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  struct Carta {
    char estado[50];                      // Ex: 'Ceará'
    char codigo[4];                       // Ex: "A01" (máx 3 chars + terminador)
    char nomeCidade[50];                  // Nome da cidade (até 49 caracteres)
    unsigned long int populacao;          // Número de habitantes
    float area;                           // Área em km²
    float pib;                            // PIB (unidade a combinar com enunciado)
    int pontosTuristicos;                 // Quantidade de pontos turísticos
    float densidadePopulacional;          // calculado
    float pibPerCapita;                   // calculado
    float superPoder;                     // Soma dos atributos numéricos
  };

  // Nível Novato

  // Área para entrada de dados
  struct Carta carta1;
  struct Carta carta2;

  /* ===== Cadastro da primeira carta ===== */
  printf("Cadastro da primeira carta:\n");
  printf("Estado: ");
  scanf(" %[^\n]", &carta1.estado);

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

  /* (Nível Aventureiro) Calcula propriedades derivadas */
  carta1.densidadePopulacional = carta1.populacao / carta1.area;
  carta1.pibPerCapita = carta1.pib / carta1.populacao;
  carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib
                    + (float)carta1.pontosTuristicos
                    + carta1.pibPerCapita
                    + (1.0f / carta1.densidadePopulacional);

  /* ===== Cadastro da segunda carta ===== */
  printf("\nCadastro da segunda carta:\n");

  printf("Estado (letra A-H): ");
  scanf(" %[^\n]", &carta2.estado);

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

  /* (Nível Aventureiro) Calcula propriedades derivadas */
  carta2.densidadePopulacional = carta2.populacao / carta2.area;
  carta2.pibPerCapita = carta2.pib / carta2.populacao;
  carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib
                    + (float)carta2.pontosTuristicos
                    + carta2.pibPerCapita
                    + (1.0f / carta2.densidadePopulacional);

  // Área para exibição dos dados da cidade
  printf("\n=== Dados da Primeira Carta ===\n");
  printf("Estado: %s\n", carta1.estado);
  printf("Codigo: %s\n", carta1.codigo);
  printf("Cidade: %s\n", carta1.nomeCidade);
  printf("Populacao: %d\n", carta1.populacao);
  printf("Area: %.2f km²\n", carta1.area);
  printf("PIB: %.2f\n", carta1.pib);
  printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
  printf("PIB per Capita: %.2f\n", carta1.pibPerCapita);

  printf("\n=== Dados da Segunda Carta ===\n");
  printf("Estado: %s\n", carta2.estado);
  printf("Codigo: %s\n", carta2.codigo);
  printf("Cidade: %s\n", carta2.nomeCidade);
  printf("Populacao: %d\n", carta2.populacao);
  printf("Area: %.2f km²\n", carta2.area);
  printf("PIB: %.2f\n", carta2.pib);
  printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
  printf("PIB per Capita: %.2f\n", carta2.pibPerCapita);

  /* Nível Mestre */
  printf("\nComparacao de Cartas:\n");

  printf("Populacao: Carta %d venceu (%d)\n",
          (carta1.populacao > carta2.populacao) ? 1 : 2,
          (carta1.populacao > carta2.populacao) ? 1 : 0);

  printf("Area: Carta %d venceu (%d)\n",
          (carta1.area > carta2.area) ? 1 : 2,
          (carta1.area > carta2.area) ? 1 : 0);

  printf("PIB: Carta %d venceu (%d)\n",
          (carta1.pib > carta2.pib) ? 1 : 2,
          (carta1.pib > carta2.pib) ? 1 : 0);

  printf("Pontos Turisticos: Carta %d venceu (%d)\n",
          (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 2,
          (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 0);

  printf("Densidade Populacional: Carta %d venceu (%d)\n",
          (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : 2,
          (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : 0);

  printf("PIB per Capita: Carta %d venceu (%d)\n",
          (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 2,
          (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 0);

  printf("Super Poder: Carta %d venceu (%d)\n",
          (carta1.superPoder > carta2.superPoder) ? 1 : 2,
          (carta1.superPoder > carta2.superPoder) ? 1 : 0);

return 0;
} 
