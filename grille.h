#ifndef GRILLE_H
#define GRILLE_H

#include "position.h"
#include "resultat.h"

//Contient la grille d'un joueur (bateaux) ou ses positions tirees
typedef struct Grille Grille;
struct Grille
{

};

//Crée une grille de bateaux
Grille creerGrilleBat();

//Crée une grille de positions tirées
Grille creerGrillePos();

//Ajoute un bateau
Grille ajouteBateau(Grille grille);

//Supprime un bateau
Grille supprimeBateau(Grille grille);

//execute un tir, regarde si le bateau est touché
Grille tir(Grille grille);


//Ajoute Position tirée
Grille ajoutePosition(Grille grille);

//Regarde s'il reste des bateaux dans la grille
int aBateaux(Grille grille);

//Regarde si la position est valide (dans la grille)
int estValide(Position pos);


#endif
