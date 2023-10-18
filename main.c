#include <stdio.h>
#include <string.h>
#include <xamgraph.h>
#include "repere.h"

#define REPORTHO_VERSION "RepOrtho v0.1"

int main(int argc, char** argv )
{
    puts( REPORTHO_VERSION ) ;

    // Déclaration et initialisation de l'axe X
    t_axe axeX;
    axeX.min = -10;
    axeX.max = 10;
    axeX.pas = 1.0;
    axeX.inc = 2;
    strncpy(axeX.label, "Axe X", MAX_LABEL_LENGTH);
    axeX.label[MAX_LABEL_LENGTH] = '\0';

    // Déclaration et initialisation de l'axe Y
    t_axe axeY;
    axeY.min = 0;
    axeY.max = 100;
    axeY.pas = 10.0;
    axeY.inc = 5;
    strncpy(axeY.label, "Axe Y", MAX_LABEL_LENGTH);
    axeY.label[MAX_LABEL_LENGTH] = '\0';

    xamCreateGraph( 800, 600, REPORTHO_VERSION ) ;
    
    repere(&axeX, &axeY);

    xamUpdateScreen() ;
    xamRun() ;
    xamCloseGraph() ;
    return 0 ;
}