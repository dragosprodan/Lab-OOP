//
//  Functionality.h
//  TemaLab2-4OOP
//
//  Created by Dragos Mihai Prodan on 21/03/2018.
//  Copyright © 2018 Dragos Mihai Prodan. All rights reserved.
//

#ifndef Functionality_h
#define Functionality_h

#include <stdio.h>
#include "Repo.h"


//Search the given name from the given list, returns the index, returns -1 if no name is find
int cautare_nume(struct materie list[], int index, char nume[]);

//Delete one elemnt of the list, returns 1 if ok else returns 0
int sterge_element(struct materie list[], int index, int care);

//Sort the list of structs by name returns 0
int ordonare_nume(struct materie list[], int index);

//Sort the list of structs by quantity returns 0
int ordonare_cantitate(struct materie list[], int index);

//Sort the list of structs by quantity from lower to highest returns 0
int ordonare_cantitate_d(struct materie list[], int index);

//Sort the list of structs by name from z to a returns 0
int ordonare_nume_inv(struct materie list[], int index);

//Returns 1 if the quantity of a struct is bigger then some number else 0
int este_peste(struct materie obj, int peste);

//Returns 1 if the name of a struct is equal to one given char else 0
int incepe_cu(struct materie obj, char cu);



#endif /* Functionality_h */
