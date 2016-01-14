#include "grille.h"

Grille* creerGrille(int taille)
{
    Grille* nouvelleGrille = malloc(sizeof(Grille));
    
    nouvelleGrille->suiteGrille = NULL;
    nouvelleGrille->position = NULL;
    nouvelleGrille->taille = taille;

    return nouvelleGrille;
}

void detruireGrille(Grille* grille)
{
    detruirePosition(grille->position);
    if(grille->suiteGrille != NULL)
        detruireGrille(grille->suiteGrille);
    free(grille);
}



int estValide(Position* position, Grille* grille)
{
    return(position->x > 0 && position->x < grille->taille && position->y > 0 && position->y < grille->taille);
    
}

Grille ajoutePosition(Grille* grille, Position* position)
{
    if(grille)
    Grille nouvellegrille =  malloc(sizeof(Grille));
    grille->suiteGrille = nouvellegrille;
    nouvellegrille->position = position;
}

int aBateau(Grille* grille)
{
    int result = 0, continuer = 1;

    if(grille == NULL)
        return 0;

    while (grille != NULL && continuer)
    {
        if (grille->position!=NULL)
        {
            result=1;
            continuer = 0;
        }

        grille = grille->suiteGrille;
    }

    return result;
}


/*void SupprimerGrille*/

