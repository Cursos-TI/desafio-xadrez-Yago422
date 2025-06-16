#include <stdio.h>

int main() {
    // Constantes para o número de movimentos de cada peça
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    const int MOVIMENTOS_CAVALO_BAIXO = 2;  // Parte do movimento em L
    const int MOVIMENTOS_CAVALO_ESQUERDA = 1; // Parte do movimento em L

    printf("=== Simulacao de Movimentos no Xadrez ===\n\n");

    // 1. Movimento da Torre (usando for) - 5 casas para a direita
    printf("Movimento da Torre (%d casas para a direita):\n", MOVIMENTOS_TORRE);
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimento do Bispo (usando while) - 5 casas na diagonal superior direita
    printf("Movimento do Bispo (%d casas na diagonal superior direita):\n", MOVIMENTOS_BISPO);
    int contador_bispo = 0;
    while (contador_bispo < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // 3. Movimento da Rainha (usando do-while) - 8 casas para a esquerda
    printf("Movimento da Rainha (%d casas para a esquerda):\n", MOVIMENTOS_RAINHA);
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVIMENTOS_RAINHA);

    // 4. Movimento do Cavalo (usando loops aninhados) - movimento em L (2 baixo, 1 esquerda)
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para esquerda):\n");
    
    // Primeira parte do L: 2 movimentos para baixo (usando for)
    for (int i = 0; i < MOVIMENTOS_CAVALO_BAIXO; i++) {
        printf("Baixo\n");
    }
    
    // Segunda parte do L: 1 movimento para esquerda (usando while)
    int contador_cavalo = 0;
    while (contador_cavalo < MOVIMENTOS_CAVALO_ESQUERDA) {
        printf("Esquerda\n");
        contador_cavalo++;
    }

    return 0;
}
