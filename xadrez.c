#include <stdio.h>

int main() {
    // Valores inseridos manualmente como variáveis constantes
    const int movBispo = 5;
    const int movTorre = 5;
    const int movRainha = 8;

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < movBispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    int j = 0;
    while (j < movTorre) {
        printf("Direita\n");
        j++;
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movRainha);

    return 0;
}
