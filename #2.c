#include <stdio.h>

int main() {
    char character;
    printf("Entrer un lettre : ");
    scanf("%c" ,&character);

    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Se character est un voyelle.");
            break;
        default:
            printf("Se character n'est pas un voyelle.");
            break;
    }
    return  0;
}