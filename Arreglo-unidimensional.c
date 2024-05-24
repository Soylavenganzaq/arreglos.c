#include <stdio.h>
#define SIZE 88

int main() {
    int array[SIZE];
    int startNumber;
    int searchNumber;
    int found = 0;

    // Llenar el arreglo con números secuenciales a partir de un número dado
    printf("Ingrese el número inicial para llenar el arreglo: ");
    scanf("%d", &startNumber);
    for(int i = 0; i < SIZE; i++) {
        array[i] = startNumber + i;
    }

    // Solicitar al usuario un número para buscar en el arreglo
    printf("Ingrese el número a buscar en el arreglo: ");
    scanf("%d", &searchNumber);

    // Buscar el número en el arreglo
    for(int i = 0; i < SIZE; i++) {
        if(array[i] == searchNumber) {
            printf("valor encontrado en la posición %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("No encontrado\n");
    }

    return 0;
}
