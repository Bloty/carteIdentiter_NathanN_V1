#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "carte_identite.h"
#include "ficher.h"
int main()
{
    tCarte carteIdent;
    FILE* fichier = NULL;

    int nI=1,nCpt=0,nChoix=0;

    char chaine[TAILLE_MAX] = "";


    if ((fichier = fopen("carteIdent.txt", "r")) != NULL)
    {
        while (fgets(chaine, TAILLE_MAX, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            if (nCpt%7==1)
            {
                nI++;
            }
            nCpt++;
        }
        fclose(fichier);
    }

    do{
        system("cls");
        printf("Entrer 1 : Entrer une carte d\'identite\nEntrer 2 : Afficher les cartes d\'identites\nEntrer 0 : Quitter\n");
        scanf("%d",&nChoix);
        fflush(stdin);
        system("cls");

        switch(nChoix)
        {
        case 1:
            setCarte (&carteIdent,nI);
            nI++;
            ecrireFichier (fichier,carteIdent,nI);
            break;
        case 2:
            lire(fichier);
            system("PAUSE");
        }
    }while(nChoix!=0);

    return 0;
}
