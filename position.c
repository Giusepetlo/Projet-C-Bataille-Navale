#include "position.h"

Position* creerPosition(int x, int y, int idBateau)
{
    Position nouvellePosition = malloc(sizeof(Position));

    nouvellePosition->x = x;
    nouvellePosition->y = y;
    nouvellePosition->idBateau = idBateau;

    return nouvellePosition;
}

void detruirePosition(Position* position)
{
    free(position);
}

int X(Position* position)
{
    return position->x;
}

int Y(Position* position)
{
    return position->y;
}
