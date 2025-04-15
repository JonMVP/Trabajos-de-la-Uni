#include <stdio.h>

int main(){
	
int edad;
char pago;
float tarifa = 0.0;
float descuento = 0.0;
float total = 0.0;

//Entrada de la edad
printf("Introduce tu edad: ");
scanf("%d", &edad);

//Determinar la tarifa segun la dad (if/else)
if(edad <= 12){
	tarifa = 40;
	printf("Categoria: Nino/a\n");

}else if(edad >= 12 && edad <= 17){
	tarifa = 60;
	printf("Categoria: Joven\n");

}else if(edad >= 18 && edad <= 64){
	tarifa = 65;
	printf("Categoria: Adulto\n");

}else if(edad >= 65){
	tarifa = 45;
	printf("Categoria: Adulto Mayor\n");

}else{
	printf("Edad no valida");	
	return 0;
}

//Tarifa antes del descuento (si lo hubiera)
printf("Tarifa Original: $%.2f\n", tarifa);

//MENU DE PAGO
printf("#####################################\n");
printf("######      FORMA DE PAGO      ######\n");
printf("#####################################\n");
printf("C: Tarjeta de Credito\n");
printf("E: Efectivo\n");
printf("x: Cupon\n");
printf("Introduce tu opcion de pago: ");
scanf(" %c", &pago); //Nota el espacio antes del %c para evitar problemas

//Determinar el descuento segun su forma de pago
//Usando swhitch

switch(pago){
// C: tarjeta de credito
// Descuento 5%
case 'C':
case 'c': 
descuento = tarifa * 0.05;
printf("Pago con tarjeta de credito\n");
printf("Descuento: %f", descuento);
}

return 0;
}

