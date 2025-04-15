#include <stdio.h>
#include <stdlib.h> //Opcional
#include <math.h>

int main(){
    int a=0, b=0, c=0;
	float x1=0.0, x2=0.0;
	
	printf("Dame el resultado de a:");
	scanf("%d", &a);
	
	printf("Dame el resultado de b:");
	scanf("%d", &b);
	
	printf("Dame el resultado de c:");
	scanf("%d", &c);
	
	x1 = (-b +sqrt((b * b) - (4 * a * c))) / (2 * a);
	x2 = (-b -sqrt((b * b) - (4 * a * c))) / (2 * a);
	
	printf("x1=%f/n", x1);
	printf("x2=%f/n", x2);
	
	return 0;
}
