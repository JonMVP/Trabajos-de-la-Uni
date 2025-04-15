#include<stdio.h>

int main(){
    float radio, area,;
    // float: diam, area1, area2, radio;  
    printf("Radio del circulo");

    // printf("Dame el diametro:");
    scanf("%f", &radio);

    // scanf("%f", &diam); 

    // radio = diametro *0.5;
    // radio = diam /2;
    
    // Calcular el area 
    area = 3.141592 * radio * radio;

    //Mostrar el area
    printf("Area del circulo: %f\n", area);
    return 0;
}
