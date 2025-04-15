#include <stdio.h>

int main(){
float p=0.0, a=0.0, imc=0.0;
printf("Ingrese el peso en Kg: ");
scanf("%f",&p);

printf("Ingrese su altura en M: ");
scanf("%f",&a);

imc = p/(a)*(a);

if(imc <=18.5){
printf("Bajo de Peso.");

}else if(imc >=18.5 && imc <=25){
printf("Peso normal.", imc);

}else if(imc >=25 && imc <=29.9){
printf("Sobre peso.");

}else if(imc >30){
printf("Obesidad.");

}else{
printf("Favor de hacar ejercicio ;)");
}

return 0;
}
