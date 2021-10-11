//
// Created by Laszlo Diana on 06/10/2021.
//

#ifndef TP5_MESSTRUCTURES_H
#define TP5_MESSTRUCTURES_H

typedef struct NombreRationnel{
    int numerateur;
    int denominateur;
}NR;

struct NombreRationnel affichage( NR c);
struct NombreRationnel saisie ();
struct NombreRationnel multiplication(NR a, NR b);
struct NombreRationnel addition(NR a, NR b);



#endif //TP5_MESSTRUCTURES_H
