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

void printLine(char *msg)
{
  printf(msg);
  getchar();
  getchar();
}

void e0611(int x, int y)
{
  if (x <= (y * 2) + 1)
  {
    if (x % 2 != 0)
    {
      printf("%d ", x);
    }
    e0611(x + 1, y);
  }
}

void e0612(int x)
{
  if (x > 0)
  {
    int y = x * 3;
    printf("%d ", y);
    e0612(x - 1);
  }
}

void e0613(int x, int y)
{
  if (x < y)
  {
    if (x == 0)
    {
      printf("1 ");
      e0613(x + 1, y);
    }
    else
    {
      int z = x * 3;
      printf("%d ", z);
      e0613(x + 1, y);
    }
  }
}

void e0614(int x)
{
  if (x > 0)
  {
    int y = pow(3, x);
    printf("1/%d ", y);
    e0614(x - 1);
  }
  if (x == 0)
  {
    printf("1 ");
  }
}

void e0615(int x, char *palavra)
{
  if (x < strlen(palavra))
  {
    printf("%c\n", palavra[x]);
    e0615(x + 1, palavra);
  }
}

double e0616(int x)
{
  if (x < 5)
  {
    x = 5;
  }

  if (x % 2 == 0)
  {
    x++;
  }

  if (x == 5)
  {
    printf("%d", x);
    return x;
  }

  printf("%d ", x);
  return e0616(x - 2) + x;
}

double e0617(int x)
{
  if (x < 5)
  {
    x = 5;
  }

  if (x % 2 == 0)
  {
    x++;
  }

  if (x == 5)
  {
    printf("1/%d ", x);
    return 1.0 / x;
  }

  printf("1/%d ", x);
  return e0617(x - 2) + (1.0 / x);
}

int e0618(int x)
{
  if (x == 0)
  {
    return 0;
  }

  if (x == 1)
  {
    return 1;
  }

  return e0618(x - 1) + e0618(x - 2);
}

int e0619(int x, char *palavra, int z)
{
  if (x < strlen(palavra))
  {
    if(isdigit(palavra[x])){
      if((palavra[x] - '0') % 2 != 0){
        z++;
      }
    }
    e0619(x + 1, palavra, z);
  }

 printf("%d ", z);
}

void e0620(int x)
{
   if (x < strlen(palavra))
  {
    if(isalpha(palavra[x])){
      if(isupper(palavra[x])){
        z++;
      }
    }
    e0619(x + 1, palavra, z);
  }

 printf("%d ", z);
}

void e06E1(int x)
{
}

void e06E2(int x)
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
  double y = 0.0;
  int buffer = 0;
  char palavra[80];

  do
  {
    printf("Opcoes disponiveis: \n");
    printf("1 - Exemplo0611\n");
    printf("2 - Exemplo0612\n");
    printf("3 - Exemplo0613\n");
    printf("4 - Exemplo0614\n");
    printf("5 - Exemplo0615\n");
    printf("6 - Exemplo0616\n");
    printf("7 - Exemplo0617\n");
    printf("8 - Exemplo0618\n");
    printf("9 - Exemplo0619\n");
    printf("10 - Exemplo0620\n");
    printf("11 - Exemplo06E1\n");
    printf("12 - Exemplo06E2\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &code);

    printf("\n==========================\n");
    switch (code)
    {
    case 0:
      printLine("\nApertar ENTER para terminar.");
      break;

    case 1:

      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0611(3, x);
      break;

    case 2:

      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0612(x);
      break;

    case 3:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0613(0, x);
      break;

    case 4:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0614(x);
      break;

    case 5:
      printf("Insira uma cadeia de caracteres: ");
      scanf("%s", palavra);
      e0615(0, palavra);
      break;

    case 6:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      y = e0616(x);
      printf(" = %lf", y);
      break;

    case 7:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      y = e0617(x);
      printf(" = %lf", y);
      break;

    case 8:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      printf("%d", e0618(x));
      break;

    case 9:
      printf("Insira uma cadeia de caracteres: ");
      scanf("%s", palavra);
      e0619(0, palavra, 0);
      break;

    case 10:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0620(x);
      break;

    case 11:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e06E1(x);
      break;

    case 12:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e06E2(x);
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