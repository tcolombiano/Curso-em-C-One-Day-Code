#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Função principal do algoritmo
void main() {
  setlocale(LC_ALL, "");
//Crie um algoritmo que leia 2 valores e depois um menu para a //pessoa escolher qual operação quer fazer:
//1-Somar, 2- Subtrair, 3-Multiplicação, 4-Divisão, 5-raiz quadrada
// Definindo variáveis//
    
  float valor1,valor2,valor3,somar,subtrair,multiplicar,dividir,raiz,sqrt1,sqrt2,sqrt3,potencia1,potencia2,potencia3,potencia;
    int opdesejada;
  
  // Programação:
   printf("\nPor favor, digite o primeiro número");
  scanf("%f",&valor1);
   printf("\nPor favor, digite o segundo número");
  scanf("%f",&valor2);
   printf("\nPor favor, digite o terceiro número");
  scanf("%f",&valor3);
  printf("\n Escolha uma operação:1-Somar, 2- Subtrair, 3-Multiplicação, 4-Divisão, 5-raiz quadrada, 6-potência");
  scanf("%d",&opdesejada);

  switch(opdesejada){
    case 1:
    somar=valor1+valor2+valor3;
    printf("\nO valor da soma é:%f",somar);
    break;

    case 2:
    subtrair=(valor1)-(valor2)-(valor3);
    printf("\nO valor da subtração é:%f",subtrair);
    break;
    
    case 3:
    multiplicar=valor1*valor2*valor3;
    printf("\nO valor da multiplicação é:%f",multiplicar);
    break;

    case 4:
    dividir=(valor1/valor2)/valor3;
    printf("\nO valor da divisão é:%f",dividir);
    break;

    case 5:
    sqrt1=sqrt(valor1);
    sqrt2=sqrt(valor2);
    sqrt3=sqrt(valor3);
    printf("\nO valor da raiz quadrada de cada um dos números digitados respectivamente é:%f , %f, %f",sqrt1,sqrt2,sqrt3);
    break;

    case 6:
    
    printf("\nVocê quer elevar a que potência? Digite um valor e se ele for fracionado,com vígula,use pontos.Ex: 2.5:");
    scanf("%f",&potencia);
    potencia1=pow(valor1,potencia);
    potencia2=pow(valor2,potencia);
    potencia3=pow(valor3,potencia);
    printf("\nO valor potência de cada um dos números digitados respectivamente é:%f , %f, %f",potencia1,potencia2,potencia3);
    break;
  }
  
}
