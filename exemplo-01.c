#include <stdio.h>
int main(){
  int idades[5];
  // 18 17 25 32 28
  for(int i=0; i<5; i++){
     printf("Digite a idade: ");
     scanf("%d", &idades[i]); //i=0 -> idades[0]
  }
  return 0; 
}