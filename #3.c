#include <stdio.h>

int main() {
    int num1 , num2 ;
    printf("Entrer le nombre  1 : ");
    scanf("%d" , &num1);
    printf("Entrer le nombre 2 : ");
    scanf("%d" , &num2);
    if (num1 != num2) {
        printf("Le somme c'est : %d." , num1 + num2);
    } else if (num1 == num2) {
        printf("Le triple de somme est : %d." , 3*(num1 + num2));
    }
    return 0;
}
