#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
// Função principal do algoritmo
void main() {
  setlocale(LC_ALL, "");
//Crie um algoritmo que leia 3 valores e informe se eles são iguais entre si para formarem um triângulo equilátero.  

// Definindo variáveis//
    int a,b,c;

    //Obtendo dados
    printf("\nDigite o primeiro número inteiro para fazer o triângulo equilátero:");
    scanf("%d",&a);
    printf("\nDigite o segundo número inteiro para fazer o triângulo equilátero:");
    scanf("%d",&b);
    printf("\nDigite o terceiro número inteiro para fazer o triângulo equilátero:");
    scanf("%d",&c);

//Lógica:
    if(a==b && b==c && c==a) { // se uma das situações forem falsas vai sair do IF e cair no Else
            printf("\nO triângulo é equilátero");
        }
    else {
        printf("\nO triângulo não é equilátero");
    }
}  
