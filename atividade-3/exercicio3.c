#include <stdio.h>

int main() {
    int camadas = 5;
    int contador1;
    int contador2;

    for (contador1 = 0; contador1 <= camadas; contador1++) {
        
        
        for (contador2 = 0; contador2 < contador1; contador2++) {
            printf("*");
        }
  
    printf("\n");
    }

    return 0;
}
