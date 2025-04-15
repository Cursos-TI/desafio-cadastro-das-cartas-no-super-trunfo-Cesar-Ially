#include <stdio.h>

int main() {
    int i = 0, y = 0; // casa inicial 
    int limite = 3;   // casa final

    printf("Bispo se moveu para diagonal direita acima tres casas:\n");
   
    do {
        // Atualiza a posição do bispo (movimento diagonal para cima e direita)
        i++;
        y++;

        if (i <= limite && y <= limite) { // casas  
            printf("direita\n", i, y);  
            printf("cima\n", i, y);
        } 

    } while (i <= limite && y <= limite); // contagem de casas 

    for (int i = 1; i <= 8; i++) {
        printf("Rainha moveu oito casas para direita\n", i); // saida de dados 
    
    }
    while (i <=9) { // numero de casas que a peça vai se mover 
        printf("Torre moveu seis casas para direita\n", i); // saida de dados 
        i++;
    }
    return 0;
}