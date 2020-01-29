#include <stdio.h>

#define OK  1
#define ERROR -1

long factorial(long n){
    long counter = 1;

    for (int i = 1; i <= n; i++){
        counter *= i;

    }
    return counter;
}

int main(int argc, char *argv[]){

    if(factorial(6) == 720)
        printf("paso la prueba\n");
    else
        printf("no paso la prueba\n");


    if(factorial(-1) == 1)
        printf("paso la prueba\n");
    else
        printf("no paso la prueba\n");        



    if(factorial(11) == 39916800)
        printf("paso la prueba\n");
    else
        printf("no paso la prueba\n");
    return OK;
}