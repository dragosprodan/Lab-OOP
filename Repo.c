//
//  Repo.c
//  TemaLab2-4OOP
//
//  Created by Dragos Mihai Prodan on 15/03/2018.
//  Copyright © 2018 Dragos Mihai Prodan. All rights reserved.
//

#include "Repo.h"
#include <string.h>




struct materie creaza(char nume[], char producator[], int cantitate){
    struct materie a;
    strcpy(a.nume, nume);
    strcpy(a.producator, producator);
    a.cantitate = cantitate;
    return a;
}

