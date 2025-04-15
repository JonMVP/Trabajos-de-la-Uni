#include <stdio.h>

int main() {
    int plato, bebida;
    float precio_plato, precio_bebida, total;

    // Menu de platos
    printf("#######################################\n");
    printf("############ BIENVENIDO A #############\n");
    printf("########### 'EL BUEN SABOR' ###########\n");
    printf("#######################################\n");
    printf("\n");
    printf("Seleccione su plato principal:\n");
    printf("1. Pollo al horno - $8.50\n");
    printf("2. Carne asada    - $10.00\n");
    printf("3. Pescado frito  - $9.00\n");
    printf("4. Ensalada mixta - $7.25\n");
    printf("5. Pasta Alfredo  - $8.75\n");
    printf("Ingrese su opcion (1-5): ");
    scanf("%d", &plato);

    // Asignar precio del plato
    switch(plato) {
        case 1:
            precio_plato = 8.50;
            printf("Has seleccionado Pollo al horno.\n");
            break;
        case 2:
            precio_plato = 10.00;
            printf("Has seleccionado Carne asada.\n");
            break;
        case 3:
            precio_plato = 9.00;
            printf("Has seleccionado Pescado frito.\n");
            break;
        case 4:
            precio_plato = 7.25;
            printf("Has seleccionado Ensalada mixta.\n");
            break;
        case 5:
            precio_plato = 8.75;
            printf("Has seleccionado Pasta Alfredo.\n");
            break;
        default:
            precio_plato = 0;
            printf("Opcion invalida de plato principal.\n");
            break;
    }

    // Menu de bebidas
    printf("\nSeleccione su bebida:\n");
    printf("1. Agua mineral   - $1.00\n");
    printf("2. Refresco       - $1.50\n");
    printf("3. Jugo natural   - $2.00\n");
    printf("4. Cerveza        - $2.50\n");
    printf("Ingrese su opcion (1-4): ");
    scanf("%d", &bebida);

    // Asignar precio de las bebidas
    switch(bebida) {
        case 1:
            precio_bebida = 1.00;
            printf("Has seleccionado Agua mineral.\n");
            break;
        case 2:
            precio_bebida = 1.50;
            printf("Has seleccionado Refresco.\n");
            break;
        case 3:
            precio_bebida = 2.00;
            printf("Has seleccionado Jugo natural.\n");
            break;
        case 4:
            precio_bebida = 2.50;
            printf("Has seleccionado Cerveza.\n");
            break;
        default:
            precio_bebida = 0;
            printf("Opcion invalida de bebida.\n");
            break;
    }

    // Operacion del total
    total = precio_plato + precio_bebida;
    printf("\nTotal a pagar: $%.2f\n", total);

    return 0;
}
