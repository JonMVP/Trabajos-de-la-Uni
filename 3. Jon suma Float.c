#include<stdio.h>

int main (){
	float num1, num2, suma;//Declarando variables
	printf("Ingrese el primer numero:");
	//leyendo el primer numero y guardandolo en num1
	scanf("%f", &num1);
	printf("Ingrese el segundo numero:");
	//leyendo el segundo numero y guardandolo en num2
	scanf("%f", &num2);
	//calculando la suma 
	suma= num1+num2;
	printf("La suma es:%f\n", suma);
	return 0;
}
