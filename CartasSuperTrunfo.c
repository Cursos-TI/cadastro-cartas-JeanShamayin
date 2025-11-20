#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   
    // Dados das duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
  
    // Área para entrada de dados
    
    printf("===== SUPER TRUNFO - CADASTRO DE CARTAS =====\n\n");

    // ---- CARTA 1 ----
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // espaço antes do %c evita ler enter

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // lê string com espaços

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area (km²): ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos1);


    // ---- CARTA 2 ----
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area (km²): ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos2);
    
    // Área para exibição dos dados da cidade
    
    printf("\n\n===== CARTAS CADASTRADAS =====\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    
return 0;
} 
