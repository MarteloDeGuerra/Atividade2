#include <stdio.h>

int main() {
    printf("Digite 10 numeros: \n");
    int valores[10];
    int j, n;

    for (n = 0; n < 10; n++) {
        scanf("%d", &valores[n]);
    }
    while (n > 1) {
        for (j = 0; j < n - 1; j++) {
            valores[j] = valores[j] + valores[j + 1];
            printf("%d ", valores[j]);
        }
        printf("\n");
        n--;
    }
}
