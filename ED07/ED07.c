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

double *a0614;
double *a0615;

void printLine(char *msg)
{
  printf(msg);
  getchar();
  getchar();
}

void e0711(int x)
{
  int valores[x];
  int v = 0;

  for (int i = 0; i < x; i++)
  {
    while (v % 3 != 0)
    {
      v = rand();
    }
    valores[i] = v;
  }

  for (int i = 0; i < x; i++)
  {
    v = valores[i];
    printf("Pos %d = %d", i, v);
  }
}

void e0712(int x)
{
  int valores[x];
  int v = 0;

  for (int i = x - 1; i > 0; i--)
  {
    while (v % 3 != 0 && v % 2 == 0)
    {
      v = rand();
    }
    valores[i] = v;
  }

  for (int i = x - 1; i < 0; i--)
  {
    v = valores[i];
    printf("Pos %d = %d", i, v);
  }
}

void e0713(int x)
{
  int valores[x];
  int v = 0;

  valores[0] = 1;
  valores[1] = 3;

  for (int i = 2; i < x; i++)
  {
    valores[i] = valores[i - 1] + 6;
  }

  for (int i = 0; i < x; i++)
  {
    v = valores[i];
    printf("Pos %d = %d", i, v);
  }
}

void e0714(int x)
{
  double v = 0;

  a0614[x - 1] = 1;

  for (int i = x - 1; i < 0; i--)
  {
    a0614[i] = 1.0 / (double)pow(i, 3);
  }

  for (int i = x - 1; i < 0; i--)
  {
    v = a0614[i];
    printf("Pos %d = %lf", i, v);
  };
}

void e0715(int x, double y)
{
  double v = 0;

  a0615[0] = 1;

  for (int i = 1; i < x; i++)
  {
    a0615[i] = 1.0 / (double)pow(y, i + 2);
  }

  for (int i = 0; i < x; i++)
  {
    v = a0615[i];
    printf("Pos %d = %lf", i, v);
  }
}

void e0716(int x, double *a)
{
  FILE *arquivo = fopen("RESULTADO06.TXT", "wt");

  double soma = 0;

  for (int i = 0; i < x; i++)
  {
    if (ARRAY_LENGTH(a) >= i)
    {
      soma += a[i];
    }
  }

  fprintf(arquivo, "Quantidade = %d : Soma = %lf", x, soma);

  fclose(arquivo);
}

void e0717(int x, double *a)
{
  FILE *arquivo = fopen("RESULTADO07.TXT", "wt");

  double soma = 0;

  for (int i = 0; i < x; i++)
  {
    if (ARRAY_LENGTH(a) >= i)
    {
      soma += a[i];
    }
  }

  fprintf(arquivo, "Quantidade = %d : Soma = %lf", x, soma);

  fclose(arquivo);
}

void e0718(int x)
{
  FILE *arquivo = fopen("RESULTADO08.TXT", "wt");

  double soma = 0;
  int t1 = 0;
  int t2 = 1;
  int termo = 0;

  for (int i = 1; i <= x; ++i)
  {
    if (t1 % 2 != 0)
    {
      fprintf(arquivo, "%d \n", t1);
    }

    termo = t1 + t2;
    t1 = t2;
    t2 = termo;
  }

  fclose(arquivo);
}

void e0719(chars fileName)
{
  FILE *arquivo = fopen(fileName, "rt");
  chars linha = IO_new_chars(STR_SIZE);

  strcpy(linha, IO_freadln(arquivo));

  fclose(arquivo);

  int count = 0;

  for (int i = 0; i < strlen(linha); i++)
  {
    if (islower(linha[i]))
    {
      count++;
    }
  }

  FILE *resultado = fopen("RESULTADO09.TXT", "wt");

  fprintf(resultado, "Minusculas na string: %s = %d", linha, count);

  fclose(resultado);
}

void e0720(chars fileName)
{
  FILE *arquivo = fopen(fileName, "rt");
  chars linha = IO_new_chars(STR_SIZE);

  strcpy(linha, IO_freadln(arquivo));

  fclose(arquivo);

  int count = 0;

  for (int i = 0; i < strlen(linha); i++)
  {
    if (isdigit(linha[i]))
    {
      count++;
    }
  }

  FILE *resultado = fopen("RESULTADO09.TXT", "wt");

  fprintf(resultado, "Digitos na string: %s = %d", linha, count);

  fclose(resultado);
}

void e07E1(int x)
{
}

void e07E2(int x)
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
    printf("1 - Exemplo0711\n");
    printf("2 - Exemplo0712\n");
    printf("3 - Exemplo0713\n");
    printf("4 - Exemplo0714\n");
    printf("5 - Exemplo0715\n");
    printf("6 - Exemplo0716\n");
    printf("7 - Exemplo0717\n");
    printf("8 - Exemplo0718\n");
    printf("9 - Exemplo0719\n");
    printf("10 - Exemplo0720\n");
    //printf("11 - Exemplo07E1\n");
    //printf("12 - Exemplo07E2\n\n");

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
      e0711(x);
      break;

    case 2:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0712(x);
      break;

    case 3:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0713(x);
      break;

    case 4:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0714(x);
      break;

    case 5:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      printf("Insira um valor decimal: ");
      scanf("%lf", &y);
      e0715(x, y);
      break;

    case 6:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0716(x, a0615);
      break;

    case 7:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0717(x, a0614);
      break;

    case 8:
      printf("Insira um valor inteiro: ");
      scanf("%d", &x);
      e0718(x);
      break;

    case 9:
      printf("Insira um caminho para um arquivo de texto: ");
      scanf("%d", &s);
      e0719(s);
      break;

    case 10:
      printf("Insira um caminho para um arquivo de texto: ");
      scanf("%d", &s);
      e0719(s);
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