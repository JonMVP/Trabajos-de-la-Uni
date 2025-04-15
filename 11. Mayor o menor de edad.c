#include <stdio.h>

int main(){
    int edad=0;
    printf("Dame tu edad HP: ");
    scanf("%d", &edad);

    if(edad >=18){
        printf("Todo ok, ya es legal.");
    } else{
        printf("Huye de ahi soldado.");
    }
    return 0;
}
