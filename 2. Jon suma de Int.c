#include<stdio.h>

int main (){
	int num1, num2, suma;//Declarando variables
	printf("Ingrese el primer numero:");
	//leyendo el primer numero y guardandolo en num1
	scanf("%i", &num1);
	printf("Ingrese el segundo numero:");
	//leyendo el segundo numero y guardandolo en num2
	scanf("%i", &num2);
	//calculando la suma 
	suma= num1+num2;
	printf("La suma es:%i\n", suma);
	return 0;
}
