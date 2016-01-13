#include <stdlib.h>
#include <stdio.h>
#include "partie.h"

Position* entrerPosition();
void afficherResultatPartie(Partie* partie);
void demanderBateaux(Grille* grille);

int main()
{
    /*Afficher le bandereau de jeu*/
    printf("                     BATAILLE NAVALE");
    printf("                       version 1.0\n\n");

    /*Cr�er un objet de type partie et l'initialise (nom des joueurs + placement bateaux)*/
    Partie* partie = creerPartie();

    demanderBateaux(grille(joueur1(partie))); /*Demande les bateaux au joueur et les place sur sa grille*/
    demanderBateaux(grille(joueur2(partie)));

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
    char *gagnant, *perdant;

    if(!aBateaux(grille(joueur1(partie))))
        gagnant = 2;

    printf("Le joueur %s a gagné! :D\n", gagnant);
    printf("Le joueur %s a perdu! :(\n", perdant);
}

void demanderBateau(Joueur* joueur, int taille)
{
    char direction;
    int isOk = 0;
    Position *depart = NULL, *fin = NULL;

    do
    {
        printf("Vous devez placer un bateau de taille %d\n", taille);

        printf("Veuillez entrer une position de départ:\n");
        depart = entrerPosition();

        while(fin == NULL)
        {
            printf("Veuillez donner la direction du bateau (H/B/G/D):\n");
            scanf("%c", &direction);

            switch(direction)
            {
                case 'H':
                    fin = creerPosition(X(depart), Y(depart)-taille);
                    break;

                case 'B':
                    fin = creerPosition(X(depart), Y(depart)+taille);
                    break;

                case 'G':
                    fin = creerPosition(X(depart)-taille, Y(depart));
                    break;

                case 'D':
                    fin = creerPosition(X(depart) + taille, Y(depart));
                    break;
            }
        }

    }while(!estValide(fin, grille(joueur)));

    ajouteBateau(grille(joueur));
}
