//
//  main.c
//  ManejoDinámicoDeLaMemoria
//
//  Created by Miguel Ángel Butrón López on 2/26/19.
//  Copyright © 2019 Miguel Ángel Butrón López. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


int main(void){
    setlocale(LC_ALL, "");
    char exit[2]= "  ";
    char *buffer;
    char *direc_alma;
    char space[2] = " ";
    
    direc_alma = (char*)malloc(sizeof(char));
    
    if( direc_alma == NULL )    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    
    else{
        strcpy(direc_alma, "");
    }
    
    printf("Introduzca un texto: (Presione la barra espaciadora dos veces y enter para salir)\n");
    
    while (strcmp(buffer, exit)!=0) {
        
        gets(buffer);
        direc_alma = (char*)realloc(direc_alma, (sizeof(char)*(strlen(buffer)+strlen(direc_alma))));
        direc_alma = strcat(direc_alma,space);
        direc_alma = strcat(direc_alma,buffer);
        
        if (strcmp(buffer, exit)==0) {
            break;
        }
    }
    printf("Rescultado: %s\n", direc_alma);
    free(direc_alma);
    return 0;
}
