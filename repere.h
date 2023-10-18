#ifndef REPERE_H
#define REPERE_H
#define MAX_LABEL_LENGTH 50 // Assurez-vous que cette constante est définie correctement

typedef struct
{
    double min;
    double max;
    double pas; // Vérifiez si ce membre est présent
    int inc;    // Vérifiez si ce membre est présent
    char label[MAX_LABEL_LENGTH + 1]; // Vérifiez si ce membre est présent
    int xmin;
    int xmax;
    int ymin;
    int ymax;
} t_axe;

void repere(t_axe* p_axeX, t_axe* p_axeY);
void aller(double x, double y);
void ligne(double x, double y);

int REPY(int y); // Déclaration de la fonction REPY

void xamMoveTo(int x, int y); // Déclaration de la fonction xamMoveTo
void xamLineTo(int x, int y); // Déclaration de la fonction xamLineTo

#endif // REPERE_H