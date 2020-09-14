#include "io.h"

bool isMaiscula(char c){
    if('A' <= c && c <= 'Z'){
        return true;
    }

    return false;
}

bool isDigito(char c){
    if('0' <= c && c <= '9'){
        return true;
    }

    return false;
}

bool validar_placa(char* placa){
    bool resultado = false;
    
    if(strlen(placa) != 8){
        return false;
    }

    if( isMaiscula(placa[0]) && isMaiscula(placa[1]) && isMaiscula(placa[2]) && placa[3] == '-' && isDigito(placa[4]) && isDigito(placa[5]) && isDigito(placa[6]) && isDigito(placa[7]) ){
        resultado = true;
    }

    return resultado;
}

int main(){
    char placa [80];

    printf("Inserir placa do veiculo: ");
    scanf("%s", placa);

    if(validar_placa(placa)){
        printf("resultado = OK");
    }else{
        printf("resultado = NOK");
    }
}