#include "grille.h"

Grille* creerGrille(int taille)
{
    Grille* nouvelleGrille = malloc(sizeof(Grille));
    nouvelleGrille->taille = taille;

    return nouvelleGrille;
}

void detruireGrille(Grille* grille)
{
    free(grille);
}



int estValide(Position* position, Grille* grille)
{
    if(position->x > 0 && position->x < grille->taille &&
       position->y > 0 && position->y < grille->taille)
        return 1;

    else
        return 0;
}

Grille ajoutePosition(Grille* grille, Position* position)
{

}
