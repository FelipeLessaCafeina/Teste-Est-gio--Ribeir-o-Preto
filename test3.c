/*3) Observe o trecho de código abaixo:
 int INDICE = 12, SOMA = 0, K = 1; 
 enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
 imprimir(SOMA); 

Ao final do processamento, qual será o valor da variável SOMA? */
#include <stdio.h>

int main()
{
    int INDICE = 12, SOMA = 0, K = 1;
    while(K <INDICE)
    {
        K=K+1;
        SOMA = SOMA+K;
    }
    printf("%d",SOMA);
    return 0;
}
//o valor é 77