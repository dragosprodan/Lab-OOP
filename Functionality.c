//
//  Functionality.c
//  TemaLab2-4OOP
//
//  Created by Dragos Mihai Prodan on 21/03/2018.
//  Copyright © 2018 Dragos Mihai Prodan. All rights reserved.
//

#include "Functionality.h"
#include <string.h>
#include <stdlib.h>


// Comun===========================================================

int cautare_nume(struct materie list[], int index, char nume[]){
    
    int i;
    for (i=0; i<index; i++) {
        //printf("\n CMP: %d \n", strcmp(list[i].nume, nume));
        if (strcmp(list[i].nume, nume) == 0) {
            return index;
        }
    }
    return -1;
}

//Partea 3===========================================================

int sterge_element(struct materie list[], int index, int care){
    if (care > index) {
        return 1;
    }
    int i;
    for (i = care-1; i<index-1; i++) {
        list[i] = list[i+1];
    }
    return 0;
}


// Partea 5===========================================================

int ordonare_nume(struct materie list[], int index){
    qsort(list, index, sizeof(struct materie), strcmp);
    return 0;
}

int compare (struct materie *a, struct materie *b)
{
    //printf("%d, %d",a->cantitate,b->cantitate);
    return ( b->cantitate - a->cantitate );
}

int compared (struct materie *a, struct materie *b)
{
    return ( a->cantitate - b->cantitate );
}

int string_inv(struct materie *a, struct materie *b){
    a =-(strcmp(a->nume, b->nume));
    return a;
}

int ordonare_nume_inv(struct materie list[], int index){
    qsort(list, index, sizeof(struct materie), string_inv);
    return 0;
}


int ordonare_cantitate(struct materie list[], int index){
    qsort (list, index, sizeof(struct materie), compare);
    return 0;
}

int ordonare_cantitate_d(struct materie list[], int index){
    qsort (list, index, sizeof(struct materie), compared);
    return 0;
}

//Partea 4===========================================================


int este_peste(struct materie obj, int peste){
    if (obj.cantitate > peste) {
        return 1;
    }
    return 0;
}

int incepe_cu(struct materie obj, char cu){
    if (obj.nume[0] == cu) {
        return 1;
    }
    return 0;
}



