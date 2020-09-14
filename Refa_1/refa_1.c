#include "io.h"

double calcularPI(int n){
  double resposta = 0.0;

  if(n > 0){
    double vPI = 0.0;
    int x = 1;

    for(int i = 1; i <= n; i++){
      if(i % 2 == 0){
        vPI -= 4.0/x;
      }else{
        vPI += 4.0/x; 
      }

      x += 2;
    }

    double aPI = 0.0;
    
    for(int i = 0; i<=n; i++){
      aPI += 1.0/(4.0*i+1) - 1.0/(4*i+3);
    }

    if(abs(3.1415 - vPI) < abs(3.1415 - aPI)){
      resposta = vPI;
    }else{
      resposta = aPI;
    }

    if(abs(3.1415 - vPI) < abs(3.1415 - aPI)){
      resposta = vPI;
    }
  }
  
  return resposta;
}

int main(){
  int x = 0;
  
  printf("Inserir uma quantidade de termos: ");
  scanf("%d", &x);

  printf("O valor aproximado de PI é: %lf", calcularPI(x));
}