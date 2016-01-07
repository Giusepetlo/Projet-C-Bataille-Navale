#ifndef JOUEUR_H
#define JOUEUR_H

#include "grille.h"

//Contient le nom du joueur, sa grille de bateaux et sa grille de positions tirées
typedef struct Joueur Joueur;
struct Joueur
{

};

//Crée un joueur (rentre son nom)
Joueur creerJoueur();

//Retourne la grille d'un joueur
Grille grille(Joueur joueur);

#endif
