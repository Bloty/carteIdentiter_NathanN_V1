#ifndef CARTE_IDENTITE_H_INCLUDED
#define CARTE_IDENTITE_H_INCLUDED
#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef struct tCarte
{
    int nId;
    char cNom[50];
    char cPrenom[50];
    char cAdresse[100];
    char cCodePoste[10];
    char cVille[50];
}tCarte;

extern void setCarte (tCarte *carteIdent,int nI);


#endif // CARTE_IDENTITE_H_INCLUDED
