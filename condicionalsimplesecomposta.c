#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"");

//Definição de Variáveis
  int a=5,opcao=2;//está atribuindo o valor 5 na variável a
  float b=2.5;
  char c='x';
  
  
  //Condicional Simples
  if(a==5) {printf("\nA variável a=5");}
  
  if(b == 2.0){
      printf("\nA variável b=2.5");
  }
    if(c == 'x'){
      printf("\nA variável c é %c",c);
  }
//Condição composta
  if (opcao == 1) {

    printf("\nA opção selecionada foi 1");}
  else if (opcao == 2){ 
    
    printf("\nA opção selecionada não foi 1");
  }
    
  //Número par ou ímpar
  if(a%2==1){printf("\nA variável é ímpar");}
  else( printf("\nO número é par"));

}