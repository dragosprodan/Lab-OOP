//
//  UI.c
//  TemaLab2-4OOP
//
//  Created by Dragos Mihai Prodan on 21/03/2018.
//  Copyright © 2018 Dragos Mihai Prodan. All rights reserved.
//

#include "UI.h"
#include <string.h>

void meniu(){
    printf("--------Meniu--------\n");
    printf("1. adaugare consumabile\n");
    printf("2. modificare consumabile\n");
    printf("3. stergere consumabile\n");
    printf("4. vizualizare consumabile(criteriu)\n");
    printf("5. vizualizare consumabile(ordonate)\n");
    printf("6. exit\n");
}

void clearR (){
    while ( getchar() != '\n' );
}

struct date citire(){
    struct date a, b;
    int x;
    printf("--> Nume ");
    b = citire_array();
    strcpy(a.nume, b.nume);
    //clearR();
    printf("--> Producator ");
    b = citire_array();
    strcpy(a.producator, b.nume);
    //clearR();
    printf("--> Cantitate(Kg) ");
    x=citire_int();
    a.cantitate = x;
    return a;
}


int citire_int(){
    int a;
    while (1) {
        printf("Introdu numarul: ");
        scanf("%d", &a);
        return a;
        if (a != "") {
            break;
        }
    }
}

struct date citire_array(){
    struct date a;
    char nume[20];
    printf("Introdu string-ul: ");
    scanf("%s", nume);
    strcpy(a.nume, nume);
    return a;
}

char citire_char(){
    char a;
    printf("Introdu char: ");
    scanf("%c", &a);
    scanf("%c", &a);
    return a;
}

void print_ceva(char var[100]){
    printf("%s", var);
}
