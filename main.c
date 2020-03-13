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

char psuedo;
int choixmenuprincipal,choixmenujouer,choixmenuauthentification;



void afficherTitre() {
    printf("----Bataille Navale----\n");
}


int afficherMenuPrincipal() {
    printf("1.JOUER\n");
    printf("2.AIDE\n");
    printf("3.LISTE DES SCORES\n");
    printf("4.QUITTER LE JEU\n\n");
    printf("CHOIX:");
    scanf("%d", &choixmenuprincipal);
    printf("\n");
    return choixmenuprincipal;
}
int afficherchoixdesiredansmenuprincipal(int choixmenuprincipal) {
    switch (choixmenuprincipal) {
        case 1:
            printf("----JOUER----\n");
            printf("1.AUTHENTIFICATION\n");
            printf("2.RETOUR\n\n");
            printf("CHOIX:");
            scanf("%d", &choixmenujouer);
            break;
        case 2:
            printf("----AIDE----\n");
            printf("ecrire l'aide du jeu");
            break;

    }
}


int afficherchoixdesiredansmenujouer(int choixmenujouer) {
    switch(choixmenujouer){
        case 1:
            printf("----AUTHENTIFICATION----\n");
            printf("psuedo 1:");
            scanf("%s",&psuedo);
            break;
    }
}

int main() {




    // afficher le titre
    afficherTitre();

    //afficher le Menu Principal + choix au menu principal
    choixmenuprincipal = afficherMenuPrincipal();

    //afficher le choix desiré + choix au menu jouer
    choixmenujouer = afficherchoixdesiredansmenuprincipal(choixmenuprincipal);

    //afficher l'authentification + entrer son psuedo
    choixmenuauthentification = afficherchoixdesiredansmenujouer(choixmenujouer);




    return 0;
}