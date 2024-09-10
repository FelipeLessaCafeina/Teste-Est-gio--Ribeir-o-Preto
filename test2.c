/*2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, 
além de informar a quantidade de vezes em que ela ocorre. 

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser 
previamente definida no código; */


#include<stdio.h>
#define N  16 //especifique o tamanho da string se desejar;
int main()
{
    int x=0,y=0;
    char str[N]="Target Sistemas";
    while(x<N)
    {
        if((str[x]=='a')||(str[x]=='A') )
        {
            y++;
        }
        x++;
    }
    printf("A letra 'a' ocorre %d vezes no string\n",y);

    return 0;
}