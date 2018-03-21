//
//  UI.h
//  TemaLab2-4OOP
//
//  Created by Dragos Mihai Prodan on 21/03/2018.
//  Copyright © 2018 Dragos Mihai Prodan. All rights reserved.
//

#ifndef UI_h
#define UI_h

#include <stdio.h>

struct date {
    int cantitate;
    char nume[20];
    char producator[20];
};

void meniu(void);

struct date citire(void);

int citire_int(void);

struct date citire_array(void);

void clearR (void);

void print_ceva(char var[100]);

char citire_char(void);

#endif /* UI_h */
