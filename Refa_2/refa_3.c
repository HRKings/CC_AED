#include "io.h"

int main(){
    char fileName [80];
    char palavra [80];
    bool ocorrencia = 0;

    fileName = IO_readstring("Insira o nome de um arquivo:");

    FILE* arquivo = fopen(fileName, "rt");

    palavra = IO_freadln(arquivo);

    while (!feof(arquivo) && !ocorrencia && strcmp(palavra, "PARAR") != 0){
        palavra = IO_freadln(arquivo);

        if(strcmp(palavra, "PARAR") == 1){
            ocorrencia = 1;
        }
    }

    fclose(arquivo);

    if(ocorrencia){
        IO_printf("Existe outra ocorrencia da primeira palavra");
    }else{
        IO_printf("Nao existe outra ocorrencia da primeira palavra");
    }

    return 0;
}