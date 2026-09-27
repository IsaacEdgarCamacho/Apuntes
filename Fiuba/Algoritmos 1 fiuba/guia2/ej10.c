#include<stdio.h>
#include<string.h>

int main(){

    char nombre[25] = "" ;
        
    strcpy (nombre, "la puta que te pario\n");
    printf("%s\n",nombre);
    strrev(nombre);
    printf("reversa: %s",nombre);
    return 1;
}