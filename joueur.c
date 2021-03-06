#include "joueur.h"

Joueur* creerJoueur(char* nomJoueur, Grille* grille)
{
    Joueur* nouveauJoueur = malloc(sizeof(Joueur));
    nouveauJoueur->nom = nomJoueur;
    nouveauJoueur->grille = grille;
}

void detruireJoueur(Joueur* joueur)
{
    free(joueur);
}

Grille* grille(Joueur* joueur)
{
    return joueur->grille;
}
