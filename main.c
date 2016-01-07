#include "partie.h"

int main()
{
    /*Afficher le bandereau de jeu*/
    printf("                     BATAILLE NAVALE");
    printf("                       version 1.0\n\n");

    /*Cr�er un objet de type partie et l'initialise (nom des joueurs + placement bateaux)*/
    Partie partie;
    creerPartie(partie);
    initPartie(partie);

    /*On fait boucler le  programme tant que les deux joueurs ont encore un(des) bateau(x)*/
    while(aBateaux(grille(joueur1(partie))) && aBateaux(grille(joueur2(partie))))
    {
        Position position;
        entrerPosition(position);

        //On regarde si un bateau est touch� et on affiche le r�sultat (partie.tour==0 => joueur 1 tir, partie.tour==1 => joueur 2 tir)
        if(tour(partie)==0)
            tir(grille(joueur2(partie)));

        else
            tir(grille(joueur1(partie)));

        //On change le tour du joueur
        setTourPartie(partie);


        //Pause + cleaner l'�cran
        system("PAUSE");
    }

    //Affiche le r�sultat : joueur gagnant et perdant
    afficherResultatPartie(partie);
}
