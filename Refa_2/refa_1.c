#include "io.h"

void strfrac(chars palavra, int x){
  if(palavra != null && x >= 0){
    strfrac(palavra, x + 1);

    int i = 0;

    do{
      IO_printf("%c", palavra[i]);
      i++;
    }while(i <= x);

    IO_printf(" ");

    for(int j = i; i < strlen(palavra); i++){
      IO_printf("%c", palavra[j]);
    }

    IO_printf("\n");
  }
}

int main(){
  int x = 0;
  char palavra [80];
  
  printf("Inserir uma palavra: ");
  scanf("%s", char);

  printf("Inserir a primeira posicao: ");
  scanf("%d", &x);

  strfac(palavra, x);
}