#include "position.h"

Position* creerPosition(int x, int y)
{
    Position nouvellePosition = malloc(sizeof(Position));

    nouvellePosition->x = x;
    nouvellePosition->y = y;

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
