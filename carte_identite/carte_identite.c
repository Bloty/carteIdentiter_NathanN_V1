#include "carte_identite.h"


void setCarte (tCarte *carteIdent,int nI)
{
    carteIdent->nId=nI;

    printf("Entrer votre nom : ");
    gets(&carteIdent->cNom);
    fflush(stdin);

    printf("Entrer votre prenom : ");
    gets(&carteIdent->cPrenom);
    fflush(stdin);

    printf("Entrer votre adresse : ");
    gets(&carteIdent->cAdresse);
    fflush(stdin);

    printf("Entrer votre CodePoste : ");
    gets(&carteIdent->cCodePoste);
    fflush(stdin);

    printf("Entrer votre ville : ");
    gets(&carteIdent->cVille);
    fflush(stdin);
}
