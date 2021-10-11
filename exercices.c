//
// Created by Laszlo Diana on 06/10/2021.
//
#include "stdio.h"
#include "exercices.h"
#include "mesStructures.h"
#include "mesTableaux.h"
#define TAILLE_MAX 100
#define NB_LIGNES_MAX 3
#define NB_COLONNES_MAX 4
void exercice1(){
    NR c;
    affichage(c) ;
    return ;

}

void exercice2(){
    int tabEntiers[TAILLE_MAX]={0}; // initialisation à 0 de toutes les cases :
    int tailleN=0;
    int i=0;
    printf("combien voulez vous d'entiers ? \n");   //demannde utilisateur le nombre d'entiers qu'il veut dans son tableau
    scanf("%d",&tailleN);
    if (tailleN<=TAILLE_MAX) { //si on veut moins d'entiers que de cases dispo dans le tableau alors :
        for (i = 0; i < tailleN; i++) {
            printf("saisissez la valeur pour la case %d : ", i); // on rentre chaques valeur a la main
            scanf("%d", &tabEntiers[i]);
        }
    }
    else{   //sinon :
        printf("vous ne souhaitez donc pas remplir de tableau ?");
    }
    // On affiche le tableau :
    printf("le tableau final est :\n");
    for (i=0; i<tailleN;i++){
        printf("%d", tabEntiers[i]);
        printf("\n");
    }


    return;
}

void exercice3() {
    int tab2DEntiers[NB_LIGNES_MAX][NB_COLONNES_MAX] = {{0}}; // initialisation à 0 de toutes les cases
    int i = 0, j = 0;
    printf(" Entrez les %d éléments de tableau : ",NB_LIGNES_MAX*NB_COLONNES_MAX);
    for(i = 1; i <= NB_LIGNES_MAX; i++){
        for(j = 1; j <= NB_COLONNES_MAX; j++){
            scanf("%d",&tab2DEntiers[i][j]);
        }
    }
    printf(" le tableau 2D est : \n");
    for(i=0; i < NB_LIGNES_MAX; i++){
        for(j = 0; j < NB_COLONNES_MAX; j++){
            printf("%4d",tab2DEntiers[i][j]);
        }
        printf("\n");
    }
    return;
    }
