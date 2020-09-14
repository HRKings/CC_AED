/**
  ED v0.1
  @author Helton Reis
  @version 0.1
  @date //
*/

// lista de dependencias
#include <stdio.h>   // para entradas e saida
#include <stddef.h>  // para definicoes basicas
#include <stdlib.h>  // para a biblioteca padrao
#include <string.h>  // para cadeias de caracteres
#include <stdarg.h>  // para tratar argumentos
#include <stdbool.h> // para definicoes logicas
#include <ctype.h>   // para tipos padroes
#include <math.h>    // para definicoes matematicas
#include <time.h>    // para medir tempo

void printLine(char *msg)
{
  printf(msg);
  getchar();
  getchar();
}

void e0411()
{
  double start = 0;
  double end = 0;
  int count = 0;

  int inside = 0;
  int outside = 0;
  double test = 0;

  printf("-Insira o inicio do intervalo: ");
  scanf("%lf", &start);

  printf("-Insira o fim do intervalo: ");
  scanf("%lf", &end);

  printf("Quantos valores serao testados: ");
  scanf("%d", &count);

  for (int i = 0; i < count; i++)
  {
    printf("-Insira um valor: ");
    scanf("%lf", &test);

    if (test > start && test < end)
    {
      inside++;
    }
    else
    {
      outside++;
    }
  }
  printf("Existem %d valores dentro do intervalo e %d valores fora dele.\n", inside, outside);
}

void e0412()
{
  char input[80];
  int count = 0;

  printf("-Insira uma palavra: ");
  scanf("%s", input);

  for (int i = 0; i < strlen(input); i++)
  {
    if (isupper(input[i]))
    {
      count++;
    }
  }

  printf("Existem %d letras maiusculas na palavra.", count);
}

int countUpper(char* input){
  int count = 0;

  for (int i = 0; i < strlen(input); i++)
  {
    if (isupper(input[i]))
    {
      count++;
    }
  }
  
  return count;
}

void e0413(){
  char word[80];
  printf("-Insira uma palavra: ");
  scanf("%s", word);
  printf("Existem %d letras maiusculas na palavra.", countUpper(word));
}

void e0414(){
  char word[80];
  printf("-Insira uma palavra: ");
  scanf("%s", word);

  for (int i = 0; i < strlen(word); i++)
  {
    if (isupper(word[i]))
    {
      printf("%c ", word[i]);
    }
  }
}

void splitUpper(char* input){

  printf("Letras maisculas: ");
  for (int i = 0; i < strlen(input); i++)
  {
    if (isupper(input[i]))
    {
      printf("%c ", input[i]);
    }
  }
  
}

void e0415(){
  char word[80];
  printf("-Insira uma palavra: ");
  scanf("%s", word);
  splitUpper(word);
}

void splitLower(char* input){

  printf("Letras minusculas: ");
  for (int i = 0; i < strlen(input); i++)
  {
    if (islower(input[i]))
    {
      printf("%c ", input[i]);
    }
  }
  
}

void e0416(){
  char word[80];
  printf("-Insira uma palavra: ");
  scanf("%s", word);
  splitUpper(word);
  printf("\n");
  splitLower(word);
}

void e0417(){
  char input[80];
  int count = 0;

  printf("-Insira uma cadeia de numeros: ");
  scanf("%s", input);

  printf("Os digitos sao: ");
  for(int i = 0; i < strlen(input); i++)
  {
    if(isdigit(input[i])){
      if((input[i] - '0') % 2 != 0){
        printf("%c ", input[i]);
        count++;
      }
    }
  }
  
  printf("\nExistem %d numeros impares", count);

}

int countAlphanumeric(char* input){
  int count = 0;

  for(int i = 0; i < strlen(input); i++)
  {
    if(isalpha(input[i]) || isdigit(input[i])){
      count++;
    }
  }
  
  return count;
}

void e0418(){
  char input[80];

  printf("-Insira uma cadeia de caracteres: ");
  scanf("%s", input);

  printf("Existem %d caracteres alfanumericos na cadeia", countAlphanumeric(input));
}

void splitAlphanumeric(char* input){
  int count = 0;

  printf("Simbolos alfanumericos: ");
  for(int i = 0; i < strlen(input); i++)
  {
    if(isalpha(input[i]) || isdigit(input[i])){
      printf("%c ", input[i]);
    }
  }
}

void e0419(){
  char input[80];

  printf("-Insira uma cadeia de caracteres: ");
  scanf("%s", input);

  splitAlphanumeric(input);
}

void e0420(){
  int tests = 0;
  int countTotal = 0;
  char input[80];

  printf("-Quantas cadeias de caracteres serao testadas: ");
  scanf("%d", &tests);

  for(int i = 0; i < tests; i++)
  {
    printf("-Insira uma cadeia de caracteres: ");
    scanf("%s", input);
    printf("Existem %d caracteres alfanumericos na cadeia\n", countAlphanumeric(input));
    countTotal += countAlphanumeric(input);
  }

  printf("Existem %d caracteres alfanumericos em todas as cadeias", countTotal);
}

void e04E1(){
  int tests = 0;
  int countTotal = 0;
  char input[80];

  printf("-Quantas cadeias de caracteres serao testadas: ");
  scanf("%d", &tests);

  for(int i = 0; i < tests; i++)
  {
    printf("-Insira uma cadeia de caracteres: ");
    scanf("%s", input);
    printf("Existem %d caracteres alfanumericos na cadeia\n", countAlphanumeric(input));
    countTotal += countAlphanumeric(input);
  }

  printf("Existem %d caracteres alfanumericos em todas as cadeias", countTotal);
}

void e04E2(){
  char input[80];
  char input2[80];
  printf("-Insira uma cadeia de caracteres: ");
    scanf("%s", input);

    printf("-Insira outra cadeia de caracteres: ");
    scanf("%s", input2);

  if(strlen(input) == strlen(input2)){
    printf("As duas sao iguais");
  }else if(strlen(input) > strlen(input2)){
    printf("A Primeira cadeia e maior que a Segunda");
  }else{
    printf("A Segunda cadeia e maior que a Primeira");
  }
}

/**
  Acao principal.
*/
int main()
{
  // definir dados/resultados

  // identificar
  printf("Programa - Versao 0.1 - 2019\n");
  printf("669678 - Helton Reis\n");
  printf("\n");

  int code = 0;

  do
  {
    printf("Opcoes disponiveis: \n");
    printf("1 - Exemplo0411\n");
    printf("2 - Exemplo0412\n");
    printf("3 - Exemplo0413\n");
    printf("4 - Exemplo0414\n");
    printf("5 - Exemplo0415\n");
    printf("6 - Exemplo0416\n");
    printf("7 - Exemplo0417\n");
    printf("8 - Exemplo0418\n");
    printf("9 - Exemplo0419\n");
    printf("10 - Exemplo0420\n");
    printf("11 - Exemplo04E1\n");
    printf("12 - Exemplo04E2\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &code);

    printf("\n==========================\n");
    switch (code)
    {
    case 0:
      printLine("\nApertar ENTER para terminar.");
      break;

    case 1:
      e0411();
      break;

    case 2:
      e0412();
      break;

    case 3:
      e0413();
      break;

    case 4:
      e0414();
      break;

    case 5:
      e0415();
      break;

    case 6:
      e0416();
      break;

    case 7:
      e0417();
      break;

    case 8:
      e0418();
      break;

    case 9:
      e0419();
      break;

    case 10:
      e0420();
      break;

    case 11:
      e04E1();
      break;

    case 12:
      e04E2();
      break;

    default:
      printf("Opcao invalida.\n");
      break;
    }
    printf("\n==========================\n");

  } while (code != 0);

  // encerrar
  return (0);
} // fim main ( )