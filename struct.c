#include <stdio.h>

int main() {
    char nom[50];

    printf("Quel est votre nom ? ");
    scanf("%49s", nom);  // %49s pour éviter un débordement de tampon

    printf("Bonjour, %s !\n", nom);

    return 0;
}
