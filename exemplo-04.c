/*
    Escreva um programa em linguagem C que preencha um vetor com cinco posições 
    e, em seguida, exiba apenas os números pares  existentes no vetor
*/

#include <stdio.h>
#define TAMANHO 5
int main(){
    int numeros[TAMANHO];
    for(int i=0; i<TAMANHO; i++){
        printf("Digite um número: ");
        scanf("%i", &numeros[i]);
    }
    for(int i=0; i<TAMANHO; i++){
        int numero = numeros[i];
        if(numero % 2==0){
            printf("Par: %i, na posição: %i \n", numero, i);
        }
    }

    return 0;
}