#include <stdio.h>
#include <string.h>
#define RED_TEXT "\x1B[31m"
#define GREEN_TEXT "\x1B[32m"
#define RESET_COLOR "\x1B[0m"

void lerMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimirMatriz(int matriz[4][4], const char* color) {
    printf("%s", color);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    printf(RESET_COLOR); 
}
void realizarOperacao(int A[4][4], int B[4][4], int resultado[4][4], char operacao[5]) {
    if (strcmp(operacao, "soma") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = A[i][j] + B[i][j];
            }
        }
    } else if (strcmp(operacao, "sub") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = A[i][j] - B[i][j];
            }
        }
    } else if (strcmp(operacao, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    resultado[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    } else {
        printf("Operação inválida\n");
    }
}
int main() {
    int A[4][4], B[4][4], resultado[4][4];
    char operacao[5];

    lerMatriz(A);
    lerMatriz(B);
    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        realizarOperacao(A, B, resultado, operacao);
        imprimirMatriz(resultado, GREEN_TEXT); 
    } else if (strcmp(operacao, "sub") == 0) {
        realizarOperacao(A, B, resultado, operacao);
        imprimirMatriz(resultado, RED_TEXT); 
    } else if (strcmp(operacao, "mult") == 0) {
        realizarOperacao(A, B, resultado, operacao);
        imprimirMatriz(resultado, GREEN_TEXT); 
    } else {
        printf("Operação inválida\n");
    }

    return 0;
}
