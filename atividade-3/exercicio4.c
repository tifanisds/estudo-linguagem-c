#include <stdio.h>

int main() {
    int camadas = 5;
    int contador1;
    int contador2;
    int contador3;
    
    for (contador1 = 0; contador1 <= camadas; contador1++) {
        
        for (contador2 = camadas; contador2 > contador1; contador2--) {
            printf(" ");
        }
        
        for (contador3 = 0; contador3 < contador1; contador3++) {
            printf("*");
        }
  
    printf("\n");
    }

    return 0;
}
