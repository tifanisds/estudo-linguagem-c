#include <stdio.h>

  int main() {
    int agulha = 11;
    int palheiro[6] = { 2, 3, 1, 33, 11, 2 };
    int contador = 0;
    int existeNumero = 0;
  
    while (contador < 6){
      if (palheiro[contador] == agulha) {
        existeNumero = 1;
      } 
      
      contador++;
    }
  
    if (existeNumero == 1) {
      printf("Encontrei a agulha no palheiro");
    } else {
      printf("Não encontrei a agulha no palheiro");
    }
    
      return 0;
  }
