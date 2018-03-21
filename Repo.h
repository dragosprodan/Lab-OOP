//
//  Repo.h
//  TemaLab2-4OOP
//
//  Created by Dragos Mihai Prodan on 15/03/2018.
//  Copyright © 2018 Dragos Mihai Prodan. All rights reserved.
//

#ifndef Repo_h
#define Repo_h

#include <stdio.h>

struct materie{
    // declarare variabile
    char nume[10];
    char producator[20];
    int cantitate;
};

//Create a materie struct and returns it
struct materie creaza(char nume[], char producator[], int cantitate);

#endif /* Repo_h */



