//
//  test.c
//  TemaLab2-4OOP
//
//  Created by Dragos Mihai Prodan on 21/03/2018.
//  Copyright © 2018 Dragos Mihai Prodan. All rights reserved.
//

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include "Repo.h"
#include "Functionality.h"

struct materie list[100];

void mue(){
    list[0]=creaza("mere", "ana", 6);
    list[1]=creaza("pere", "ana", 9);
    list[2]=creaza("banane", "ana", 16);
    list[3]=creaza("capsuni", "ana", 4);
    list[4]=creaza("caise", "ana", 14);
    
    assert(cautare_nume(list, 5, "mere") == 0);
    
}


int main(){
    mue();
    return 0;
}
