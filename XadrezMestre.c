#include <stdio.h>

// Protótipos das funções recursivas
void mover_torre(int movimentos);
void mover_bispo(int movimentos);
void mover_rainha(int movimentos);
void mover_cavalo();

int main() {
    printf("=== Simulacao Avancada de Movimentos no Xadrez ===\n\n");

    // 1. Movimento da Torre (recursivo) - 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita - recursivo):\n");
    mover_torre(5);
    printf("\n");

    // 2. Movimento do Bispo (recursivo e com loops aninhados) - 5 casas na diagonal
    printf("Movimento do Bispo (5 casas na diagonal - recursivo + loops aninhados):\n");
    mover_bispo(5);
    printf("\n");

    // 3. Movimento da Rainha (recursivo) - 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda - recursivo):\n");
    mover_rainha(8);
    printf("\n");

    // 4. Movimento do Cavalo (loops complexos) - movimento em L (2 cima, 1 direita)
    printf("Movimento do Cavalo (2 casas para cima e 1 para direita - loops complexos):\n");
    mover_cavalo();

    return 0;
}

// Função recursiva para mover a Torre
void mover_torre(int movimentos) {
    if (movimentos <= 0) return; // Caso base
    
    printf("Direita\n");
    mover_torre(movimentos - 1); // Chamada recursiva
}

// Função recursiva para mover o Bispo (também implementa loops aninhados)
void mover_bispo(int movimentos) {
    if (movimentos <= 0) return; // Caso base
    
    // Implementação com loops aninhados (vertical e horizontal)
    for (int v = 0; v < 1; v++) { // Loop vertical (externo)
        for (int h = 0; h < 1; h++) { // Loop horizontal (interno)
            printf("Cima, Direita\n");
        }
    }
    
    mover_bispo(movimentos - 1); // Chamada recursiva
}

// Função recursiva para mover a Rainha
void mover_rainha(int movimentos) {
    if (movimentos <= 0) return; // Caso base
    
    printf("Esquerda\n");
    mover_rainha(movimentos - 1); // Chamada recursiva
}

// Função com loops complexos para mover o Cavalo
void mover_cavalo() {
    const int MOVIMENTOS_CIMA = 2;
    const int MOVIMENTOS_DIREITA = 1;
    int cima_feito = 0;
    int direita_feito = 0;

    // Loop complexo com múltiplas variáveis e condições
    for (int i = 0, j = 0; i < MOVIMENTOS_CIMA || j < MOVIMENTOS_DIREITA; ) {
        if (i < MOVIMENTOS_CIMA) {
            printf("Cima\n");
            i++;
            continue; // Volta para o início do loop após movimento vertical
        }

        if (j < MOVIMENTOS_DIREITA) {
            printf("Direita\n");
            j++;
            continue; // Volta para o início do loop após movimento horizontal
        }
        
        // Condição de parada adicional para segurança
        if (i >= MOVIMENTOS_CIMA && j >= MOVIMENTOS_DIREITA) {
            break;
        }
    }
}
