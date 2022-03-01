#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"");
  //Atividade 2: Criar um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas.

 float valor1,valor2,subtracao,valorabsoluto;
  
 //O algoritmo vai consistir em primeiro eu guardar os valores que o usuário digitar no console, depois fazer a subtração dos valores e aplicar valor absoluto no resultado.
  printf("\nDigite o valor um:");
  scanf("%f",&valor1);//guardando o primeiro valor
  printf("\nDigite segundo valor:");
  scanf("%f",&valor2);//guardando o segundo valor
  
  subtracao=valor1-valor2;
  
  valorabsoluto=abs(subtracao);// absoluto da diferença
  printf("\nO valor absoluto da diferença de %f e %f é:%f",valor1,valor2,valorabsoluto);
  
    
}
