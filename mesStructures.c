//
// Created by Laszlo Diana on 06/10/2021.
//

#include "mesStructures.h"
#include "stdio.h"

//struct NombreRationnel(){

//}

struct NombreRationnel saisie () {
    NR a;
    printf("saisissez un numérateur et un dénominateur pour le rationel");
    scanf("%d",&a.numerateur);
    scanf("%d",&a.denominateur);
    return (a);

}

struct NombreRationnel affichage( NR c){
    c=saisie();
    printf("le nombre rationel est: %d/%d ",c.numerateur,c.denominateur);
    return (c) ;
}

struct NombreRationnel multiplication(NR a, NR b){
    NR c;
    c.numerateur= a.numerateur * b.numerateur;
    c.denominateur=a.denominateur * b.denominateur;
    printf("%d/%d", c.numerateur, c.denominateur);
    return (c);

}
struct NombreRationnel addition(NR a, NR b){
    NR c;
    c.numerateur=a.numerateur*b.denominateur+a.denominateur*b.numerateur;
    c.denominateur=a.denominateur*b.denominateur;
    printf("%d/%d", c.numerateur,c.denominateur);
    return(c);
}