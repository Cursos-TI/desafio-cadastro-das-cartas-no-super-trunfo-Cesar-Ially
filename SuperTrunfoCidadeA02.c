#include <stdio.h>

// Definição da estrutura CartaCidade
typedef struct {
    char estado[50];
    char codigoCarta[10];
    char nomeCidade[100];
    int populacao;
    float areaKm;
    float pib;
    int numPontosTuristicos;
} CartaCidade;

// Função para imprimir os detalhes de uma carta
void imprimirCarta(CartaCidade c) {
    printf("Estado: %s\n", c.estado);
    printf("Código da Carta: %s\n", c.codigoCarta);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área em km²: %.2f\n", c.areaKm);
    printf("PIB: %.2f\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.numPontosTuristicos);
}

int main() {
    // Criação de um exemplo de carta de cidade
    CartaCidade carta1 = {"Amazonas", "A02", "Manaus", 2064000, 11401, 103.2, 54};
    
    // Impressão dos detalhes da carta
    imprimirCarta(carta1);

    return 0;
}
