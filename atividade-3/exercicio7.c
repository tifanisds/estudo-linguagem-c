#include <stdio.h>

int main() {
    int numeros[9] = { 2, 3, 1, 4, 6, 8, 8, 3, 7 };
    int contador;
    int sequencia = 0;
    int maiorSequencia = 0;

    for(contador = 0; contador < 8; contador++) {
        if (numeros[contador] % 2 == 0) {
            sequencia++;
        } 
        else {
            if (sequencia > maiorSequencia) {
                maiorSequencia = sequencia; 
            }
            
            sequencia = 0; 
        }
    }
    
    printf("A maior sequencia da lista teve %d numeros", maiorSequencia);

    return 0;
}
