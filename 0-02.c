#include <stdio.h>
#include <conio.h>

int main() {
    int count = 0, a;
    float b;

    printf("-----------------------------------------------------------------------------------------------\n");
    printf("--------------------------------------------conversor------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------\n\n");

    while (count == 0) {
        printf("digite 1 para converter de km/h para m/s\n");
        printf("digite 2 para converter de m/s para km/h\n");
        printf("digite 3 para finalizar o programa\n");
        printf("--> ");
        scanf("%i", &a);

        switch(a) {
            case 1 :
                printf("digite seu valor (em km/h) : ");
                scanf("%f", &b);
                b = b / 3.6;
                printf("seu valor em m/s eh %f\n", b);
            break;
            case 2 :
                printf("digite seu valor (em m/s) : ");
                scanf("%f", &b);
                b = b * 3.6;
                printf("seu valor em km/h eh %f\n", b);
            break;
            case 3 :
                printf("programa finalizado :)\n");
                count = 1;
            break;
        }
    }
}