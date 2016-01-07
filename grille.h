#ifndef GRILLE_H
#define GRILLE_H

#include "position.h"
#include "resultat.h"

//Contient la grille d'un joueur (bateaux) ou ses positions tirees
typedef struct Grille Grille;
struct Grille
{
    int taille;
};

//Crée une grille de bateaux
Grille* creerGrille(int taille);

void detruireGrille(Grille* grille);

//Ajoute un bateau
Grille* ajouteBateau(Grille* grille);

//Supprime un bateau
Grille* supprimeBateau(Grille* grille);

//execute un tir, regarde si le bateau est touché
Grille* tir(Grille* grille);


//Ajoute Position tirée
Grille* ajoutePosition(Grille* grille, Position* position);

//Regarde s'il reste des bateaux dans la grille
int aBateaux(Grille* grille);

//Regarde si la position est valide (dans la grille)
int estValide(Position* position, Grille* grille);


#endif
