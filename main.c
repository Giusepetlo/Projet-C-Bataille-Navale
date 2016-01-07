#include <stdlib.h>
#include <stdio.h>
#include "partie.h"

Position* entrerPosition();
void afficherResultatPartie(Partie* partie);

int main()
{
    /*Afficher le bandereau de jeu*/
    printf("                     BATAILLE NAVALE");
    printf("                       version 1.0\n\n");

    /*Cr�er un objet de type partie et l'initialise (nom des joueurs + placement bateaux)*/
    Partie* partie = creerPartie();

    /*On fait boucler le  programme tant que les deux joueurs ont encore un(des) bateau(x)*/
    while(aBateaux(grille(joueur1(partie))) && aBateaux(grille(joueur2(partie))))
    {

        Position* cible = entrerPosition();

        //On regarde si un bateau est touch� et on affiche le r�sultat (partie.tour==0 => joueur 1 tir, partie.tour==1 => joueur 2 tir)
        if(tour(partie) == 0)
            tir(grille(joueur2(partie)), cible);

        else
            tir(grille(joueur1(partie)), cible);

        //On change le tour du joueur
        setTourPartie(partie);


        //Pause + cleaner l'�cran
        system("PAUSE");
    }

    //Affiche le r�sultat : joueur gagnant et perdant
    afficherResultatPartie(partie);
}

Position* entrerPosition()
{
    int x, y;

    printf("X?\n");
    scanf("%d", &x);

    printf("Y?\n");
    scanf("%d", &y);

    return creerPosition(x, y);
}

void afficherResultatPartie(Partie* partie)
{
    char* gagnant = ;

    if(!aBateaux(grille(joueur1(partie))))
        gagnant = 2;

    printf("Le joueur %d a gagné! :D")
}
