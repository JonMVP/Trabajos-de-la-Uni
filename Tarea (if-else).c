#include <stdio.h>

int main() {
    int num1, num2, num3;
    int mayor, menor;

    // Entrada de datos
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingresa el tercer numero: ");
    scanf("%d", &num3);

    // Verificar si los tres números son iguales
    if (num1 == num2 && num2 == num3) {
        printf("Todos los numeros son iguales.\n");
        printf("No existe diferencia entre mayor y menor.\n");
		} else {
        // Comparar para encontrar el mayor
        if (num1 >= num2 && num1 >= num3) {
            mayor = num1;
        } else if (num2 >= num1 && num2 >= num3) {
            mayor = num2;
        } else {
            mayor = num3;
        }

        // Comparar para encontrar el menor
        if (num1 <= num2 && num1 <= num3) {
            menor = num1;
        } else if (num2 <= num1 && num2 <= num3) {
            menor = num2;
        } else {
            menor = num3;
        }

        // Mostrar los resultados
        printf("El numero mayor es: %d\n", mayor);
        printf("El numero menor es: %d\n", menor);
    }

    return 0;
}
