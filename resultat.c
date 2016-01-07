#include "resultat.h"

int estTouche(Resultat* res)
{
    return res == TOUCHE;
}

int estEnVue(Resultat* res)
{
    return res == EN_VUE;
}

int estCoule(Resultat* res)
{
    return res == COULE;
}

int estRate(Resultat* res)
{
    return res == RATE;
}
