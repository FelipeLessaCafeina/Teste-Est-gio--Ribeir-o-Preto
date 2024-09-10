/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma 
dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem
 que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando 
 se o número informado pertence ou não a sequência. 

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser 
previamente definido no código;*/

#include<stdio.h>

int main ()
{
    int fib1=0,fib2=1,x,y;
    printf("Informe um numero inteiro:\n");
    scanf("%d",&x);
    while(fib1<x)
    {
        y=fib2;
        fib2+=fib1;
        fib1=y;
    }
    if(fib1==x)
    {
        printf("O numero informado faz parte da sequencia de Fibonnaci\n");

    }
    else
    {
        printf("O numero informado nao pertence a sequencia de Fibonnacci\n");
    }

    return 0;
}
