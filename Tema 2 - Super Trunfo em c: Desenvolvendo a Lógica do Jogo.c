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
    CartaCidade carta1 = {"Bahia", "A01", "Salvador", 2886698, 692.8, 63.3, 15};

    // Criação de um exemplo de carta de cidade
    CartaCidade carta2 = {"Amazonas", "A02", "Manaus", 2064000, 11401, 103.2, 54};
    
    // Impressão dos detalhes da carta
    imprimirCarta(carta1);
    // Impressão dos detalhes da carta
    imprimirCarta(carta2);

    // Calculo densidade e pip cidade 1
    int populacao = 2886698;
    float area = 692.80;
    float densidade;

    if (area > 0) { // Verifica se a área é válida
        densidade = populacao / area;
        printf("Densidade populacional: %.2f habitantes por km²\n", densidade);
    } else {
        printf("Erro: A área deve ser maior que zero.\n");
    }

    // Calculo PIB per capita e população
    float pib = 63.30; // PIB total em bilhões
    float pib_per_capita;

    if (populacao > 0) { // Verifica se a população é válida
        pib_per_capita = (pib * 1e9) / populacao; // Converte PIB para unidades monetárias e calcula
        printf("PIB per capita: %.2f por pessoa\n", pib_per_capita);
    } else {
        printf("Erro: A população deve ser maior que zero.\n");
        
    }

    // Comparar um atributo da carta 1 versus a carta 2 
    // Populações das cartas
    int populacao_carta1 = 2886698;
    int populacao_carta2 = 2064000;

    // Comparação
    if (populacao_carta1 > populacao_carta2) {
        printf("A carta 1 tem mais população: %d habitantes.\n", populacao_carta1);
    } else if (populacao_carta1 < populacao_carta2) {
        printf("A carta 2 tem mais população: %d habitantes.\n", populacao_carta2);
    } else {
        printf("As duas cartas têm populações iguais: %d habitantes.\n", populacao_carta1);
    }

    // Dados das cartas
    float area1 = 692.80, area2 = 11401.00;
    int pib1 = 63, pib2 = 103;
    int pontosTuristicos1 = 15, pontosTuristicos2 = 54;
    int populacao1 = 2886698; // Carta 1
    int populacao2 = 2064000; // Carta 2

    // Comparação de área
    if (area1 > area2) {
        printf("Carta 1 venceu! tem maior área.\n");
    } else if (area1 < area2) {
        printf("Carta 2 venceu! tem maior área.\n");
    } else {
        printf("As áreas das cartas são iguais.\n");
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        printf("Carta 1 venceu! tem maior PIB.\n");
    } else if (pib1 < pib2) {
        printf("Carta 2 venceu! tem maior PIB.\n");
    } else {
        printf("Os PIBs das cartas são iguais.\n");
    }

    // Comparação de pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu! tem mais pontos turísticos.\n");
    } else if (pontosTuristicos1 < pontosTuristicos2) {
        printf("Carta 2 venceu! tem mais pontos turísticos.\n");
    } else {
        printf("O número de pontos turísticos nas cartas é igual.\n");
    }
    
    // Comparação de populações
    if (populacao1 > populacao2) {
        printf("Carta 1 (Bahia) perdeu! tem maior população.\n");
    } else if (populacao1 < populacao2) {
        printf("Carta 2 (Amazonas) perdeu! tem maior população.\n");
    } else {
        printf("As cartas têm populações iguais.\n");
    }

    
     // Comparação de populações
    if (populacao1 > populacao2) {
        printf("Carta 1 (Bahia) venceu! tem maior população 2886698.\n");
    } else if (populacao1 < populacao2) {
        printf("Carta 2 (Amazonas) Venceu! tem maior população 2064000.\n");
    } else {
        printf("As cartas têm populações iguais.\n");
    }

    return 0;



}