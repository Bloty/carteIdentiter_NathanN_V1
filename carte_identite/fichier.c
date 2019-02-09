#include "ficher.h"


extern void ecrireFichier (FILE* fichier, tCarte carteIdent, int nI)
{
    char cChaine[100];
    sprintf(cChaine, "%d", carteIdent.nId); //transtypage

    if ((fichier = fopen("carteIdent.txt", "a")) == NULL)
    {
        perror("Erreur de creation de fichier");
    }else
    {
        putc('\n', fichier);
        fputs("carte ", fichier);
        fputs(cChaine, fichier);
        fputc('\n', fichier);
        fputs(&carteIdent.cNom, fichier);
        fputc('\n', fichier);
        fputs(&carteIdent.cPrenom, fichier);
        fputc('\n', fichier);
        fputs(&carteIdent.cAdresse, fichier);
        fputc('\n', fichier);
        fputs(&carteIdent.cCodePoste, fichier);
        fputc('\n', fichier);
        fputs(&carteIdent.cVille, fichier);
        fputc('\n', fichier);
    }
    fclose(fichier);
}

void lire(FILE* fichier)
{
    char chaine[TAILLE_MAX] = "";

    if ((fichier = fopen("carteIdent.txt", "r")) != NULL)
    {
        while (fgets(chaine, TAILLE_MAX, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
        }

        fclose(fichier);
    }
}

