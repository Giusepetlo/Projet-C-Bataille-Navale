#ifndef PARTIE_H
#define PARTIE_H

#include "joueur.h"

//Contient les deux joueurs + mémorise le tour du joueur actuel
typedef struct Partie Partie;
struct Partie
{
    int tour;
    Joueur* joueur1;
    Joueur* joueur2;
};

//Retourne le J1 de la partie
Joueur* joueur1(Partie* partie);
//Retourne le J2 de la partie
Joueur* joueur2(Partie* partie);

//Retourne le tour (0 si j1 joue, 1 si j2 joue)
int tour(Partie* partie);

//MaJ du tour (mise a 0 si il valait 1, 1 si il valait 0)
Partie setTourPartie(Partie* partie);

//Crée et renvoie un objet de type partie
Partie* creerPartie();

/*Fonction ajoutée pour désallouer l'objet*/
void detruirePartie(Partie* partie);

#endif
