#include "partie.h"

Joueur* joueur1(Partie* partie)
{
    return partie->joueur1;
}

Joueur* joueur2(Partie* partie)
{
    return partie->joueur2;
}

int tour(Partie* partie)
{
    return partie->tour;
}

Partie setTourPartie(Partie* partie)
{
    if(partie->tour == 0)
        partie->tour = 1;
    else if(partie->tour == 1)
        partie->tour = 0;

    return partie;
}

Partie* creerPartie(char* nomJoueurUn, char* nomJoueurDeux)
{
    Partie* nouvellePartie = malloc(sizeof(Partie));

    nouvellePartie->tour = 0;
    nouvellePartie->joueur1 = creerJoueur(nomJoueurUn);
    nouvellePartie->joueur2 = creerJoueur(nomJoueurDeux);

    return nouvellePartie;
}

void detruirePartie(Partie* partie)
{
    detruireJoueur(partie->joueur1);
    detruireJoueur(partie->joueur2);
    free(partie);
}
