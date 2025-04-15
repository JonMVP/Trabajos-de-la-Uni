#include<stdio.h>
#include<math.h> //Biblioteca (jamas libreria) de funciones Mt

//potencia a^n
//sintaxis
//pow(a,n);
int main(){
	float radio, diam, area1, area2;
	printf("dame el diametro:");
	scanf("%f", &diam);
	radio= diam/2;
	area1=3.141592*pow(radio,2);
	area2=3.141592*pow(diam,2)/4;
	printf("area con radio es: %f\n",area1);
	printf("area con diametro es: %f",area2);
	return 0;
}
