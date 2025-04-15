//Descuento
#include<stdio.h>

int main(){
    float compra =0.0;
    printf("Ingresa tu monto de compra HP: ");
    scanf("%f", &compra);

    if(compra >500){
        printf("Hay descuento");
    
	}else{
        printf("No hay descuento");
    }
    
    return 0;
}
