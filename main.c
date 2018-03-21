//
//  main.c
//  TemaLab2-4OOP
//
//  Created by Dragos Mihai Prodan on 15/03/2018.
//  Copyright © 2018 Dragos Mihai Prodan. All rights reserved.
//

#include <stdio.h>
#include "Repo.h"
#include "UI.h"
#include "Functionality.h"


int main(int argc, const char * argv[]) {
    int obt, index = 0;
    struct materie list[100];
    
    while (1) {
        meniu();
        obt = citire_int();
        
        if (obt > 9 || obt < 1) {
            obt = 0;
        }
        
        if (obt == 6) {
            return 0;
        }
        
        //Varianta 1=============================================================================
        if (obt == 1) {
            struct date obiect;
            while (1) {
                obiect = citire();
                if (obiect.cantitate > 0) {
                    break;
                }
            }
            int aux = cautare_nume(list, index, obiect.nume);
            //printf("\n muee %d \n", aux);
            if (aux != -1) {
                list[aux-1].cantitate+=obiect.cantitate;
                //printf("\n muee \n");
            } else {
                list[index] = creaza(obiect.nume, obiect.producator, obiect.cantitate);
                index++;
            }
        }
        
        // Varianta 2=============================================================================
        if (obt == 2) {
            struct date obiect, obiect2;
            obiect = citire();
            int aux = cautare_nume(list, index, obiect.nume);
            if (aux == -1) {
                print_ceva("Nu exista acest produs.");
            } else {
                obiect2 = citire();
                list[aux-1] = creaza(obiect2.nume, obiect2.producator, obiect2.cantitate);
            }
        }
        
        //Varianta 3=============================================================================
        if (obt == 3) {
            int aux;
            print_ceva("Al catalea element:\n");
            aux = citire_int();
            if (aux > 0 && aux < index) {
                sterge_element(list, index, aux+1);
            } else {
                print_ceva("Nu este posibil.\n");
            }
        }
        
        //Varianta 4=============================================================================
        if (obt == 4) {
            int aux,i;
            print_ceva("1.Incepe cu\n2.Mai mare ca\n");
            aux = citire_int();
            if (aux == 1) {
                char cu;
                print_ceva("Incepe cu char:\n");
                fflush(stdin);
                cu = citire_char();
                for (i=0; i<index; i++) {
                    if (incepe_cu(list[i], cu)) {
                        printf("Produs: %s, Producator: %s, Cantitate: %d. \n",list[i].nume, list[i].producator, list[i].cantitate);
                    }
                }
            }
            if (aux == 2) {
                int peste;
                print_ceva("Peste val:\n");
                peste = citire_int();
                for (i=0; i<index; i++) {
                    if (este_peste(list[i], peste)) {
                        printf("Produs: %s, Producator: %s, Cantitate: %d. \n",list[i].nume, list[i].producator, list[i].cantitate);
                    }
                }
            }
        }
        
        //Varianta 5=============================================================================
        if (obt == 5) {
            print_ceva("1. Nume\n2.Cantitate\n3. Nume(invers)\n4.Cantitate(invers)\n");
            obt = citire_int();
            
            if (obt == 1) {
                int i;
                ordonare_nume(list, index);
                print_ceva("\n");
                for (i=0; i<index; i++) {
                    printf("Produs: %s, Producator: %s, Cantitate: %d. \n",list[i].nume, list[i].producator, list[i].cantitate);
                }
            }
            
            if (obt == 2) {
                ordonare_cantitate(list, index);
                print_ceva("\n");
                int i;
                for (i=0; i<index; i++) {
                    printf("Produs: %s, Producator: %s, Cantitate: %d. \n",list[i].nume, list[i].producator, list[i].cantitate);
                }
            }
            
            if (obt == 3) {
                int i;
                ordonare_nume_inv(list, index);
                print_ceva("\n");
                for (i=0; i<index; i++) {
                    printf("Produs: %s, Producator: %s, Cantitate: %d. \n",list[i].nume, list[i].producator, list[i].cantitate);
                }
            }
            
            if (obt == 4) {
                ordonare_cantitate_d(list, index);
                print_ceva("\n");
                int i;
                for (i=0; i<index; i++) {
                    printf("Produs: %s, Producator: %s, Cantitate: %d. \n",list[i].nume, list[i].producator, list[i].cantitate);
                }
            }
        }
    }
}
