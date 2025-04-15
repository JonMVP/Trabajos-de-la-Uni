// Proceso de validacion

#include <stdio.h>

int main (){
int num =0;
float temp =0.0;

printf("Ingrese el numero ENTERO: ");
if(scanf("%f", &temp) != 1){
		printf("ERROR: Entrada no numerica.");

	}else{
		if ((int)temp == temp){
			num = (int)temp;
			printf("Numero %d entero valido.", num);
			
		}else{
			printf("ERROR el numero %f es decimal.", temp);
		}
	}
	
	return 0;
}
