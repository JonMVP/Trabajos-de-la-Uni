// Escribe un programa que indique si hace frio o calor.
// Si la temperatura es menor o igual 7 grados
// Celsius, entonces "Hace frio", de lo contrario,
// indica "La temperatura es agradable"

// Variables: --> Tipo
// Temperatura --> float
// Entrada:
// Temperatura actual
// Salida:
// Mensaje que indique si hace frio o es agradable
// Mensaje "Hace frio" o "Agradable" segun el criterio

#include <stdio.h>

int main(){
// Declarando las variables
    float temperatura =0.0;
    printf("Ingresa la temp actual HP: ");
    scanf("%f", &temperatura);

    if(temperatura <= 7){
        printf("Hace frio.");
    
	}else{
        printf("La temperatura es agradable.");   
	}

    return 0;
}
