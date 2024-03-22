#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symboles.h"


int taille = 0;
int profondeurMAX = 0;
extern int yylineno;

symbole* init_ts() {
    return malloc(TAILLE*sizeof(symbole*));
}


void print_ts(symbole* tab) {
    int i;
    for (i=0; i < taille; i++) {
        print_symbole(tab[i]);
        printf("\n");
    }
}

int get_taille_ts() {
    return taille;
}

void print_symbole(symbole s) {
    printf("%s (%s, %d, %d) ", s.nomVariable, s.typeVariable, s.initialise, s.profondeur);
}

char * ajouter_symbole(symbole* tab, char* nom, char* type, int decl) {
    if (taille >= TAILLE) {
        yyerror("Débordement pile des symboles\n");
    }
    symbole s = {initialise:decl, profondeur:profondeurMAX};
    strcpy(s.nomVariable, nom);
    strcpy(s.typeVariable, type);
    tab[taille] = s;
    taille++;
    
    char * taille_addr = malloc(3);
    sprintf(taille_addr, "%d", taille-1);
    
    return taille_addr;
}

void supprimer_symbole(symbole * tab) {
    int i;
    int nb = 0;
    for (i=0; i < taille; i++) {
        symbole s = tab[i];
        if (s.profondeur == profondeurMAX) {
            nb++;
        }
    }
    taille -= nb;
}