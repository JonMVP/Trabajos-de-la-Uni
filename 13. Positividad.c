#include <stdio.h>

int main(){
float num =0.0;

printf("Ingrese el numero: ");
scanf("%f", &num);

if(num >0){
printf("El numero %f es positivo.", num);

}else if(num <0){
printf("El numero %f es negativo.", num);

}else{
printf("El numero es cero.");
}

return 0;
}
