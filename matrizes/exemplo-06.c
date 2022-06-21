/*
Este algoritmos simula o jogo de batalha naval. 
*/
#include <stdio.h>
#define LINHAS 6
#define COLUNAS 8
int main(){
    int acertos[6][2] = {{0, 1},{3, 3},{4, 2},{5, 1},{3, 1}, {0, 5}};
    char tabuleiro[LINHAS][COLUNAS];
    int l, c;
    //inicializar o tabuleiro
    for( int linha=0; linha < LINHAS; linha++){ 
        for( int coluna=0; coluna < COLUNAS; coluna++){
            tabuleiro[linha][coluna] = ' ';
        }
    }
    //controlar as escolhas do usuário
    do{ 
        // imprimir o cabeçalho
        for( int linha=0; linha<LINHAS; linha++){ 
            printf("  %i", linha);
        }
        printf("\n");
        // imprimir tabuleiro
        for( int linha=0; linha<LINHAS; linha++){ 
            for( int coluna=0; coluna<COLUNAS; coluna++){
                if(coluna==0){
                    printf("%i ", linha);
                }else{
                    printf(" ");
                }
                printf("%c ", tabuleiro[linha][coluna]);
            }
            printf("\n");
        }
        printf("Digite a linha e coluna: ");
        scanf("%i %i", &l, &c);
        // verificar se as posições informadas estão corretas
        if((l>=0 && l<LINHAS) && (c>=0 && c<COLUNAS)){ //apenas valores maiores que zero são analisados
            char valor = '-';
            for(int i=0; i<6; i++){
                if(acertos[i][0] == l && acertos[i][1] == c){
                    valor = 'X'; 
                }
            }
            // atualizar o tabuleiro
            tabuleiro[l][c] = valor;
        }
    }while(l>=0 && c>=0);
    return 0;
}