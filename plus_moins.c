#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver) {
    if (choix_joueur < valeur_a_trouver) {
        printf("plus\n");
    } else if (choix_joueur > valeur_a_trouver) {
        printf("moins\n");
    } else {
        printf("Bingo\n");
    }
}

int main() {
    int valeur_a_trouver, choix_joueur;
    
    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires
    // rand() génère un grand nombre pseudo-aléatoire.
    valeur_a_trouver = rand() % 101; // Génère un nombre entre 0 et 100
    
    printf("Devinez le nombre mystère : ");
    scanf("%d", &choix_joueur);
    
    plus_moins(choix_joueur, valeur_a_trouver);
    
    return 0;
}

