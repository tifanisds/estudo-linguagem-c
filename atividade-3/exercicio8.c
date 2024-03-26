#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numeros[12] = { 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1 };
    int contador1 = 0;
    int contador2 = 0;
    int numerosOrganizados[9];

    while (contador1 < 12){
      if (numeros[contador1] == 0){
        numerosOrganizados[contador2++] = numeros[contador1];
      }

    contador1++;
    }

    contador1 = 0;

    while (contador1 < 12){
      if (numeros[contador1] == 1){
      numerosOrganizados[contador2++] = numeros[contador1];
      }

    contador1++;
    }

    contador1 = 0;

    printf("O novo array contem os números ");

    while (contador1 < 12){
      printf("%d ", numerosOrganizados[contador1]);
      contador1++;
    }

    return 0;
}
