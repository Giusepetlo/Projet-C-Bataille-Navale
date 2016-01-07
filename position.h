#ifndef POSITION_H
#define POSITION_H

//doublet de coordonnées
typedef struct Position Position;
struct Position
{
    int x;
    int y;
};

Position* creerPosition(int x, int y);
void detruirePosition(Position* position);
int X(Position* position);
int Y(Position* position);


#endif
