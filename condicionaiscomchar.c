#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"");
 //Definindo variáveis
 char letra='x';

 //Condicional simples
  if(letra=='x'){printf("\n A letra é X",letra);}

  printf("\nCódigo da letra = %d",letra);//assim em vez de imprimir um char ele vai imprimir o equivalente a letra na tabela ASCII.
  if(letra==120){printf("\nA letra equivalente é x",letra);}
  //nesse caso a letra.
}