#include <stdio.h>
#include <math.h>

int main(){
	// o = opcion
	// a y b = numero
	// r = resultado
	int o = 0;
	float a = 0.0;
	float b = 0.0;
	float r = 0.0;
	printf("*******************************\n");
	printf("**Bienvenido a la calculadora**\n");
	printf("*******************************\n");
	printf("¿Que operacion deseas?\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Divicion\n");
	printf("5. Potencia\n");
	printf("6. Raiz\n");
	scanf("%d", &o);
	
	switch(o){
		case 1:
			printf("\nElegiste SUMA\n");
			    printf("Dame los numeros que vas a sumar: a + b\n");
			    printf("a: ");
			    scanf("%f", &a);
			    printf("b: ");
			    scanf("%f", &b);
			    r = a + b;
			    printf("El resultado de la suma %.2f + %.2f es %.2f", a,b,r);
			    break;
			
			case 2:
			printf("\nElegiste RESTA\n");
			    printf("Dame los numeros que vas a resta: a - b\n");
			    printf("a: ");
			    scanf("%f", &a);
			    printf("b: ");
			    scanf("%f", &b);
			    r = a - b;
			    printf("El resultado de la resta %.2f - %.2f es %.2f", a,b,r);
			    break;
			
			case 3:
			printf("\nElegiste MULTIPLICASION\n");
			    printf("Dame los numeros que vas a multiplicar: a * b\n");
			    printf("a: ");
			    scanf("%f", &a);
			    printf("b: ");
			    scanf("%f", &b);
			    r = a * b;
			    printf("El resultado de la multiplicasion %.2f * %.2f es %.2f", a,b,r);
			    break;
			
			case 4:
			printf("\nElegiste DIVISION\n");
			    printf("Dame los numeros que vas a dividir: a / b\n");
			    printf("a: ");
			    scanf("%f", &a);
			    printf("b: ");
			    scanf("%f", &b);
			    if(b == 0){
				printf("ADVERTENCIA");
				printf("Division entre cero, adios");
				break;
			}else{ r = a / b;
			    printf("El resultado de la division %.2f / %.2f es %.2f", a,b,r);
			    break;
			}
			
			
			case 5:
			printf("\nElegiste POTENCIA\n");
			    printf("Dame los numeros que le vas a sacar potencia: a ^ b\n");
			    printf("a: ");
			    scanf("%f", &a);
			    printf("b: ");
			    scanf("%f", &b);
			    r = pow(a, b);
			    printf("El resultado de la potencia %.2f ^ %.2f es %.2f", a,b,r);
			    break;
			    
			
			case 6:
			printf("\nElegiste RAIZ\n");
			    printf("Dame los numeros que le vas a sacar raiz: ");
			    printf("a: ");
			    scanf("%f", &a);
			    printf("Dame el índice de la raíz (ejemplo: 2 para raíz cuadrada, 3 para raíz cúbica): ");
			    scanf("%f", &b);
				if (b == 2){
					r = sqrt(a);
			}else {
					r = pow(a, 1.0 / b);
				}
				printf("La raiz %.0f de %.2f es $.2f\n", b, a, r);
				break;
	}
	
	return 0;
}
