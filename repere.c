#include "repere.h"

int REPY(int y);

double rapx, rapy; // Variables pour le rapport entre valeurs réelles et physiques
int posx, posy; // Variables pour la position de l'origine du repère en pixels

void repere(t_axe* p_axeX, t_axe* p_axeY)
{
    // Calcul des valeurs nécessaires pour initialiser les variables globales rapx, rapy, posx et posy
    
    double xmin_reel = p_axeX->min;
    double xmax_reel = p_axeX->max;
    double ymin_reel = p_axeY->min;
    double ymax_reel = p_axeY->max;
    
    double xmin_pixel = p_axeX->xmin;
    double xmax_pixel = p_axeX->xmax;
    double ymin_pixel = p_axeY->ymin;
    double ymax_pixel = p_axeY->ymax;
    
    rapx = (xmax_pixel - xmin_pixel) / (xmax_reel - xmin_reel);
    rapy = (ymin_pixel - ymax_pixel) / (ymax_reel - ymin_reel);
    
    posx = (int)(xmin_pixel - xmin_reel * rapx);
    posy = (int)(ymax_pixel - ymin_reel * rapy);
    
    // Implémentation de la fonction repere
    // À compléter selon vos besoins
    // Par exemple, vous pouvez utiliser les valeurs contenues dans p_axeX et p_axeY pour dessiner le repère
}

void aller(double x, double y)
{
    x = posx + rapx * x;
    y = REPY(posy + rapy * y);
    xamMoveTo((int)x, (int)y);
}

void ligne(double x, double y)
{
    x = posx + rapx * x;
    y = REPY(posy + rapy * y);
    xamLineTo((int)x, (int)y);
}