#ifndef __STRUCT__
#define __STRUCT__
#include "evenements.c"

typedef struct boolGenerale BoolGenerale;

struct boolGenerale
{
char fin;
char clavier_enfonce;
char clavier_releve;
char clic_souris;
};

#endif