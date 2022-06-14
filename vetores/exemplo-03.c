#include <stdio.h>
int main(){
  int idades[15];
  scanf("%d", &idades[0]); //0 -> idades[0]
  scanf("%d", &idades[14]); //4 -> idades[4]
  for(int i=0; i<15; i++){
    printf("%i\n", idades[i]);
  }

  return 0; 
}