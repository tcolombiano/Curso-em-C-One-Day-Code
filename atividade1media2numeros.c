#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"");
  //Atividade 1: Criar um algoritmo que leia 2 notas e mostre a média entre elas.

  //Definindo variáveis 
  float n1,n2,media;
  
 
  printf("\nDigite a nota da primeira unidade:");
  scanf("%f",&n1);//guardando a nota 1
  printf("\nDigite a nota da segunda unidade:");
  scanf("%f",&n2);//guardando a nota 2
  media=(n1+n2)/2;
  printf("\nA média aritmética das disciplinas que você pegou é: %f",media);
}
