#ifndef FICHER_H_INCLUDED
#define FICHER_H_INCLUDED
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "carte_identite.h"

#define TAILLE_MAX 100

extern void ecrireFichier (FILE* fichier, tCarte carteIdent, int nI);
extern void lire(FILE*fichier);

#endif // FICHER_H_INCLUDED
