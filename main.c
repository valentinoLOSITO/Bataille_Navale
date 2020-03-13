#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#pragma execution_character_set ("utf-8")

/** \author Valentino losito
 *  \date 13.03.2020
 *  \version 0.1
 *  \description jeu de la bataille navale
 *  \return fin du programme.
 */

void afficherTitre() {
    printf("----Bataille Navale----\n");
}
void afficherMenuPrincipal(){
    printf("1.JOUER\n");
    printf("2.AIDE\n");
    printf("3.LISTE DES SCORES\n");
    printf("4.QUITTER LE JEU\n");
}

int main() {

    // afficher le titre
    afficherTitre();

    //afficher le Menu Principal
    afficherMenuPrincipal();

    //

    return 0;
}