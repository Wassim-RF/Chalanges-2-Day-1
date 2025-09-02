#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre : ");
    scanf("%d" , &num);

    if (num % 2 == 0) {
        printf("Se nombre est pair");
    } else {
        printf("Se nombre est impaire");
    }
}