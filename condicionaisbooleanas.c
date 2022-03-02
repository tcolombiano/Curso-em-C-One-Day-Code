#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"");
  //Definindo variáveis
  bool a= true, b= false;
  //Se a for verdadeiro
  if(a){printf("\nA é verdadeiro");}
  //Se b for falso
  if(b){printf("\nB é verdadeiro");}//implicitamente
  else{printf("\nB é falso");}
  //Comparando uma falsidade
  if(!b){printf("\nB é falso");}//! é se não, no caso se 
  não b, imprima b é falso
  
}