#define TAILLE 1000

typedef struct symbole {
    char nomVariable[16];
    char typeVariable[16];
    int initialise;
    int profondeur;
} symbole;

void yyerror(char *s);
void yywarning(char *s);
char * depiler_verifier_symbole(symbole * ts, int errno);
void raise_redefinition_error(symbole * ts, char* name);

symbole* init_ts();

void print_ts(symbole* tab);
void print_symbole(symbole s);
int get_taille_ts();

char* ajouter_symbole(symbole* tab, char* nom, char* typ, int declare);
void supprimer_symbole(symbole* tab);

