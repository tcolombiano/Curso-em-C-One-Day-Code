#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Função principal do algoritmo
void main(){
  setlocale(LC_ALL,"");
    //Sessão 6 atividade de fixação 1:Crie um algoritmo que leia 3 notas e calcule a média entre elas.
    //Se o valor for maior que 7, informe que aprovado,senão reprovado.//
    
    //Definindo variáveis//
    float n1,n2,n3,media;
    //Armazenando Variáveis//
  printf("\nDigite as notas das unidades.Se a nota for quebrada, use pontos para descrever os decimais.Ex: 7,7.1,8.9. Após digitar cada nota aperte barra de espaço entre elas.");
  scanf("%f %f %f",&n1,&n2,&n3);
 //Operando//
  media=(n1+n2+n3)/3;
 //Imprimindo na tela o primeiro resultado//
  printf("\nO valor da média é: %f",media);
 //Comparando o programa.//
  if (media>=7){printf("\nA média do aluno foi %f e foi aprovado.",media);}
  else {printf("\n A média do aluno foi %f portando pelas normas acadêmicas ele está reprovado.",media);}

}