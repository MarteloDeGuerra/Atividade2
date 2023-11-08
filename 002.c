
#include <stdio.h>

int main() {
    char Jogador1[10][30], Jogador2[10][30], nomeTime1[30], nomeTime2[30], posicao;
    int nivelForca = 0;
    double forca1 = 0, forca2 = 0;

    printf("Digite os Times:\n");
    scanf("%29[^\n]", nomeTime1);

    for (int i = 0; i < 11; i++) {
        scanf(" %29[^;]; %c; %d", Jogador1[i], &posicao, &nivelForca);

        switch (posicao) {
            case 'G':
                forca1 += 8 * nivelForca;
                break;
            case 'L':
                forca1 += 10 * nivelForca;
                break;
            case 'Z':
                forca1 += 5 * nivelForca;
                break;
            case 'V':
                forca1 += 8 * nivelForca;
                break;
            case 'M':
                forca1 += 11 * nivelForca;
                break;
            case 'A':
                forca1 += 12 * nivelForca;
                break;
            default:
                printf("Posicao invalida para o jogador %s\n", Jogador1[i]);
                return 1;
        }
    }

    scanf(" %29[^\n]", nomeTime2);

    for (int i = 0; i < 11; i++) {
        scanf(" %29[^;]; %c; %d", Jogador2[i], &posicao, &nivelForca);

        switch (posicao) {
            case 'G':
                forca2 += 8 * nivelForca;
                break;
            case 'L':
                forca2 += 10 * nivelForca;
                break;
            case 'Z':
                forca2 += 5 * nivelForca;
                break;
            case 'V':
                forca2 += 8 * nivelForca;
                break;
            case 'M':
                forca2 += 11 * nivelForca;
                break;
            case 'A':
                forca2 += 12 * nivelForca;
                break;
            default:
                printf("Posicao invalida para o jogador %s\n", Jogador2[i]);
                return 1;
        }
    }

    forca1 = forca1 / 100;
    forca2 = forca2 /100;

    printf("%s: %.2f de forca\n", nomeTime1, forca1);
    printf("%s: %.2f de forca\n", nomeTime2, forca2);

    if (forca1 > forca2) {
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forca1 < forca2) {
        printf("%s eh mais forte\n", nomeTime2);
    }

    return 0;
}
