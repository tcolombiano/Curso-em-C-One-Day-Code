#include <stdio.h>
#include <stdlib.h>

void main(){
    // Definindo uma variável
    int a= 5;
    int b;
    //Imprimindo a variável a
    printf("%d\n",a); 
    
    //Concatenação-escrever frase com variáveis
    printf("\nO valor da variável a é:%d",a);
    
     //Mudando o valor de a
     a=15;
     printf("\nO valor da variável a é:%d",a);
    
     //Lendo valores
     printf("\nDigite o valor da variável b:");
     scanf("%d",&b);//Esse & quer dizer que ele vai ler o que o usuário vai digitar e armazenar na mémória do computador que tem a variável b
     printf("\nO valor da variável b é:%d",b);
     
     // Pula linha
    printf("\n");
    
    //Imprimindo uma variável
    printf("Teste1");
    
    //Pausando o sistema
    system("pause");
    
