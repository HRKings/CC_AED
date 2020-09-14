#include "io.h"

void calcularConta(int n){
    double valores [4] = { };
    int cod = 0;

    double valor = 0.0;

    for(int i =0; i < n; i++){
        printf("Digite o código da compra: ");
        scanf("%d", &cod);

        if(cod < 4){
            printf("Digite o valor da compra: ");
            scanf("%lf", &valor);
            valores[cod] += abs(valor);
        }else{
            printf("Digite um codigo valido. \n");
            i--;
        }
    }

    //Calcular aniversariante
    valor = (valores[0]/3.0) + (valores[2]/2.0);
    printf("O aniversariante pagara: %lf \n", valor);

    //Calcular amigo 2
    valor = (valores[0]/3.0) + ( (valores[1]/2.0)/2.0 ) + valores[2];
    printf("O Amigo 2 pagara: %lf \n", valor);

    //Calcular amigo 3
    valor = (valores[0]/3.0) + ( (valores[1]/2.0)/2.0 ) + valores[2];
    printf("O Amigo 3 pagara: %lf \n", valor);
}

int main(){
    int x = 0;

    printf("Insira a quantidade de compras dos 3 amigos: ");
    scanf("%d", &x);

    calcularConta(x);

    return 0;
}