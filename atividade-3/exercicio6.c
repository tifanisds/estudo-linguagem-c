#include <stdio.h>

int main() {
    int numeros[6] = { 2, 2, 2, 3, 3, 3 };
    int numerosPar = 0;
    int numerosImpar = 0;
    int contador;

    for(contador = 0; contador < 6; contador++) {
        if (numeros[contador] % 2 == 0) {
            numerosPar++;
        }
        else {
            numerosImpar++;
        }
    }
    
    printf("Essa lista contém %d numeros pares e %d numeros impares", numerosPar, numerosImpar);

    return 0;
}
