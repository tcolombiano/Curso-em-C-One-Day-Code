#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"");
    //Atividade : Criar um algoritmo que leia 3 números inteiros de uma só vez
    //Colocar o resultado da multiplicação entre os 3 em uma variável própria
    //Depois exiba a variável

    //Declaração de variáveis
    int n1,n2,n3,resultado;

//Primeiro tenho que armazenar os 3 números digitados, multiplicar eles, armazenar em outra var e exibir.
    printf("\nDigite os 3 número que devem ser multiplicados:");
    scanf("%d%d%d",&n1,&n2,&n3);// para armazenar 3 variáveis de uma só vez.
    resultado=(n1*n2*n3);//mulplicando e armazenando na variável de saída.
    printf("\nA múlplicação dos números,%d, %d, %d é: %d",n1,n2,n3,resultado);// Imprimindo e mostrando os números digitados pelo usuário e o impresso na tela.
}