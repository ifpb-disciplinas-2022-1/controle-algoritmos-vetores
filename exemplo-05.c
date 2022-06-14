/*
    Escreva um programa em linguagem C que leia dez números inteiros e, 
    após finalizar a leitura, imprima todos os números lidos na ordem inversa 
    em que eles foram digitados.
*/
#include <stdio.h>
int main(){
    int numeros[10]; // 13 14 15
    for(int i=0; i<10;i++){
        scanf("%i", &numeros[i]);
    }
    // 15 14 13
    for(int i=9; i>=0;i--){
        printf("%i ", numeros[i]);
    }
    printf("\n");
    return 0;
}