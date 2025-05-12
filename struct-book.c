#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char titre[100];
    char auteur[100];
    int annee;
    float prix;
} Livre;

void ajouterLivre(const char *nomFichier) {
    FILE *fichier = fopen(nomFichier, "a"); // a = append
    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return;
    }

    Livre livre;
    printf("ID du livre : ");
    scanf("%d", &livre.id);
    getchar(); // pour consommer le \n après scanf

    printf("Titre du livre : ");
    fgets(livre.titre, sizeof(livre.titre), stdin);
    livre.titre[strcspn(livre.titre, "\n")] = '\0'; // enlever le \n

    printf("Auteur : ");
    fgets(livre.auteur, sizeof(livre.auteur), stdin);
    livre.auteur[strcspn(livre.auteur, "\n")] = '\0';

    printf("Année de publication : ");
    scanf("%d", &livre.annee);

    printf("Prix : ");
    scanf("%f", &livre.prix);

    // Écriture dans le fichier CSV
    fprintf(fichier, "%d,%s,%s,%d,%.2f\n", livre.id, livre.titre, livre.auteur, livre.annee, livre.prix);

    fclose(fichier);
    printf("Livre ajouté avec succès.\n");
}

int main() {
    const char *nomFichier = "livres.csv";

    // Création du fichier avec en-tête si inexistant
    FILE *fichier = fopen(nomFichier, "r");
    if (fichier == NULL) {
        fichier = fopen(nomFichier, "w");
        if (fichier != NULL) {
            fprintf(fichier, "id,titre,auteur,annee,prix\n");
            fclose(fichier);
        }
    } else {
        fclose(fichier);
    }

    ajouterLivre(nomFichier);
    return 0;
}
