/**
  ED v0.1
  @author Helton Reis
  @version 0.1
  @date //
*/

// // lista de dependencias
// #include <stdio.h>   // para entradas e saida
// #include <stddef.h>  // para definicoes basicas
// #include <stdlib.h>  // para a biblioteca padrao
// #include <string.h>  // para cadeias de caracteres
// #include <stdarg.h>  // para tratar argumentos
// #include <stdbool.h> // para definicoes logicas
// #include <ctype.h>   // para tipos padroes
// #include <math.h>    // para definicoes matematicas
// #include <time.h>    // para medir tempo

#include "io.h"

#define ARRAY_LENGTH(x) (sizeof(x) / sizeof((x)[0]))

void printLine(char *msg)
{
  printf(msg);
  getchar();
  getchar();
}

int readInt()
{
  int x = 0;
  printf("Insira um valor inteiro: ");
  scanf("%d", &x);

  return x;
}

char *readString()
{
  char *s;
  printf("Insira um valor inteiro: ");
  scanf("%s", s);

  return s;
}

int randBetween(int min, int max)
{
  //srand(time(NULL));
  return min + rand() / ((RAND_MAX + 1u) / max);
}

void e0811()
{
  int x = 0;
  x = readInt();

  int array[x] = {};

  int y = 0;

  for (int i = 0; i < x; i++)
  {
    y = abs(readInt());
    array[i] = y;
  }
}

void e0812(char *fileName, int *array)
{
  int x = 0;
  x = readInt();

  int y = 0;

  FILE *arquivo = fopen(fileName, "rt");

  fscanf(arquivo, "%d", &x);

  while (!feof(arquivo))
  {
    fscanf(arquivo, "%d", &x);

    if (x > 0 && y < ARRAY_LENGTH(array))
    {
      array[y] = x;
    }

    y++;
  }

  fclose(arquivo);
}

void e0813(int min, int max)
{
  int x = 0;
  x = readInt();

  int array[x] = {};

  for (int i = 0; i < x; i++)
  {
    array[i] = randBetween(min, max);
  }

  FILE *arquivo = fopen("DADOS.TXT", "wt");
  fprintf(arquivo, "%d\n", x);

  for (int i = 0; I < ARRAY_LENGTH(array); i++)
  {
    fprintf(arquivo, "%d\n", array[i]);
  }

  fclose(arquivo);
}

void e0814(char *fileName, int *array)
{
  e08612(fileName, array);

  int x = 0;

  for (int i = 0; i < ARRAY_LENGTH(array); i++)
  {
    if (array[i] > x)
    {
      x = array[i];
    }
  }
}

void e0815(char *fileName, int *array)
{
  e08612(fileName, array);

  int x = 0;

  for (int i = 0; i < ARRAY_LENGTH(array); i++)
  {
    if (array[i] < x)
    {
      x = array[i];
    }
  }
}

void e0816(char *fileName, int *array)
{
  e08612(fileName, array);

  double media = 0.0;

  int arrayMaior [ARRAY_LENGTH(array)] = {};
  int arrayMenor [ARRAY_LENGTH(array)] = {};

  for (int i = 0; i < ARRAY_LENGTH(array); i++)
  {
    media += array[i];
  }

  media = media / ARRAY_LENGTH(array);

  for (int i = 0; i < ARRAY_LENGTH(array); i++)
  {
    if(array[i] >= media){
      arrayMaior[i] = array[i]; 
    }else{
      arrayMenor[i] = array[i];
    }
  }

  FILE *arquivo = fopen("DADOS_MAIOR.TXT", "wt");
  fprintf(arquivo, "%d\n", x);

  for (int i = 0; I < ARRAY_LENGTH(arrayMaior); i++)
  {
    fprintf(arquivo, "%d\n", arrayMaior[i]);
  }

  fclose(arquivo);

  FILE *arquivo = fopen("DADOS_MENOR.TXT", "wt");
  fprintf(arquivo, "%d\n", x);

  for (int i = 0; I < ARRAY_LENGTH(arrayMenor); i++)
  {
    fprintf(arquivo, "%d\n", arrayMenor[i]);
  }

  fclose(arquivo);

}

bool e0817(int *array)
{
 bool resultado = true;

  for (int i = 0; i < ARRAY_LENGTH(array); i++)
  {
    if (array[i + 1] != NULL)
    {
      if (array[i] > array[i + 1])
      {
        resultado = false;
      }
    }
  }

  return resultado;
}

bool e0818(char *fileName, int *array)
{
  e08612(fileName, array);

  int x = 0;
  x = readInt();

  int pos = 0;
  pos = abs(readInt());

  bool resultado = false;

  if(pos >= ARRAY_LENGTH(array)){
    resultado = false;
  }

  for (int i = pos; i < ARRAY_LENGTH(array); i++){
    if(array[i] == x){
      resultado = true;
    }
  }

  return resultado;
}

bool e0819(char *fileName, int *array)
{
  e08612(fileName, array);

  int x = 0;
  x = readInt();

  int pos = 0;
  pos = abs(readInt());

  bool resultado = false;

  if(pos >= ARRAY_LENGTH(array)){
    resultado = false;
  }

  for (int i = pos; i < ARRAY_LENGTH(array); i++){
    if(array[i] == x){
      printf("Achado na posicao: %d", i);
      resultado = true;
    }
  }

  return resultado;
}

void e0820(char *fileName, int *array)
{
   e08612(fileName, array);

  int x = 0;
  x = readInt();

  int pos = 0;
  pos = abs(readInt());

  int count = 0;

  bool resultado = false;

  if(pos >= ARRAY_LENGTH(array)){
    resultado = false;
  }

  for (int i = pos; i < ARRAY_LENGTH(array); i++){
    if(array[i] == x){
      resultado = true;
      count++;
    }
  }

  printf("Foi achado: %d vezes", count);
  return resultado;
}

void e08E1(int x)
{
}

void e08E2(int x)
{
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
  int x = 0;
  double y = 0;

  char s[STR_SIZE];

  do
  {
    printf("Opcoes disponiveis: \n");
    printf("1 - Exemplo0811\n");
    printf("2 - Exemplo0812\n");
    printf("3 - Exemplo0813\n");
    printf("4 - Exemplo0814\n");
    printf("5 - Exemplo0815\n");
    printf("6 - Exemplo0816\n");
    printf("7 - Exemplo0817\n");
    printf("8 - Exemplo0818\n");
    printf("9 - Exemplo0819\n");
    printf("10 - Exemplo0820\n");
    //printf("11 - Exemplo08E1\n");
    //printf("12 - Exemplo08E2\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &code);

    printf("\n==========================\n");
    switch (code)
    {
    case 0:
      printLine("\nApertar ENTER para terminar.");
      break;

    case 1:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0811(x);
      break;

    case 2:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0812(x);
      break;

    case 3:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0813(x);
      break;

    case 4:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0814(x);
      break;

    case 5:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      printf("Insira um valor decimal: ");
      scanf("%lf", &y);
      e0815(x, y);
      break;

    case 6:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0816(x, a0615);
      break;

    case 7:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0817(x, a0614);
      break;

    case 8:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0818(x);
      break;

    case 9:
      printf("Insira um caminho para um arquivo de texto: ");
      scanf("%d", &s);
      e0819(s);
      break;

    case 10:
      printf("Insira um caminho para um arquivo de texto: ");
      scanf("%d", &s);
      e0819(s);
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