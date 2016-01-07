#ifndef RESULTAT_H
#define RESULTAT_H

/*contient "en vue","touché","touché-coulé",ou "a l'eau"*/
typedef enum Resultat Resultat;
enum Resultat {TOUCHE, EN_VUE, RATE, COULE};

/*Ces fonctions permettent de tester la valeur du résultat de tir*/
int estTouche(Resultat* res);
int estEnVue(Resultat* res);
int estCoule(Resultat* res);
int estRate(Resultat* res);


#endif
