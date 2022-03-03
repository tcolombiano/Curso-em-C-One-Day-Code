#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// Função principal do algoritmo
void main() {
  setlocale(LC_ALL, "");
  // Definindo variáveis//
  int a = 20;

  // Conectivo lógico E (AND) se uma comparação for falsa, não entra no bloco
  if (a > 5 && a > 15) {
    printf("\nA variável a está entre 5 e 15");
  }
  // Conectivo Lógico OU(OR). se uma ocorrer já entra no bloco
  if (a > 5 || a > 15) {
    printf("\nA variável é maior que 5 ou  15");
  } // pipe | pode ser digitado no teclado por Alt+124, tabela ASCII é vida <3

 // Misturando Conectivos
    if ((a>5 && a<15)|| a==20){printf("\nA variável a está entre 5 e 15 ou ela vale 20");
        
    } 

    
    
    
}
