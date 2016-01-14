#ifndef POSITION_H
#define POSITION_H

//doublet de coordonn�es
typedef struct Position Position;
struct Position
{
    int x;
    int y;
    int tailleBateau; /*On identifie les bateaux par leur taille en consid�rant qu'il n'y aura qu'un b�teau de chaque taille (2,3,4,5)*/
};

Position* creerPosition(int x, int y);
void detruirePosition(Position* position);
int X(Position* position);
int Y(Position* position);


#endif
