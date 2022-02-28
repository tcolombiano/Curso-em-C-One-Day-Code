#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    
  setlocale(LC_ALL,"");//permitir acentuação
  printf("Olá\n");//imprime olá no console do sistema, na     tela para o usuário ver
  //Lendo valor inteiro
  int a= 50;
    printf("\nO valor de a é = %d ",a);
    printf("\nDigite um novo valor para a:");
    scanf("%d",&a);
    printf("\nO valor de a mudou para %d",a);
  //Lendo valor flutuante
  float b= 99.99;
    printf("\nO valor de a é = %f ",b);
    printf("\nDigite um novo valor para b:");
    scanf("%f",&b);
    printf("\nO valor de a mudou para %f",b);
  //Lendo Letra
  char letra;
  printf("\nDigite o novo valor para letra:,%c",letra);
  fflush(stdin);
  scanf(" %c",&letra);//precisei colocar um espaço entre o %c porque estava fechando o programa sem capturar o que o usuário digitou. Acredito que seja devido ao espaço contar como Caracter.
  printf("\nO valor de letra é:%c", letra);
  
}
