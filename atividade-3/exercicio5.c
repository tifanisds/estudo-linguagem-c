#include <stdio.h>

int main() {
    int numero = 6;
    int fatorial = 1;

    while (numero > 1) {
        fatorial *= numero--;
    }
    
    printf("%d", fatorial);

    return 0;
}
