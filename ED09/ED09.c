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

double **createMatrix()
{
  int x = abs(IO_readint("Insira o numero de linhas: "));
  int y = abs(O_readint("Insira o numero de colunas: "));

  double matrix[][y];

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      matrix[i][j] = IO_readdouble("Insira um valor para o elemento da matriz: ");
    }
  }

  return matrix;
}

void freadIntMatrix(chars fileName, int lines, int columns, int matrix[][columns])
{
  int x = 0;
  int y = 0;
  int z = 0;

  FILE *arquivo = fopen(fileName, "rt");

  IO_fscanf(arquivo, "%d", &x);
  IO_fscanf(arquivo, "%d", &y);

  if (lines <= 0 || lines > x ||
      columns <= 0 || columns > y)
  {
    IO_println("ERRO: Valor invalido.");
  }
  else
  {
    x = 0;
    while (!feof(arquivo) && x < lines)
    {
      y = 0;
      while (!feof(arquivo) && y < columns)
      {
        IO_fscanf(arquivo, "%d", &z);
        matrix[x][y] = z;
        y++;
      }
      x++;
    }
  }
}

void e0911()
{
  double matrix[][];

  matrix = createMatrix();

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      IO_printf("%3d\t", matrix[x][y]);
    }
    IO_printf("\n");
  }
}

void e0912(chars fileName, int lines, int columns, int matrix[][columns])
{
  FILE *arquivo = fopen(fileName, "wt");

  IO_fprintf(arquivo, "%d\n", lines);
  IO_fprintf(arquivo, "%d\n", columns);

  for (x = 0; x < lines; x = x + 1)
  {
    for (y = 0; y < columns; y = y + 1)
    {
      IO_fprintf(arquivo, "%d\n", matrix[x][y]);
    }
  }
  fclose(arquivo);
}

void e0913(int columns)
{
  double matrix[][columns];

  matrix = createMatrix();

  for (int i = 0; i < columns; i++)
  {
    IO_printf("%lf\t", matrix[i][i]);
  }
}

void e0914(int columns)
{
  double matrix[][columns];

  matrix = createMatrix();

  for (int i = 0; i < columns; i++)
  {
    IO_printf("%lf\t", a[i][columns - i - 1]);
  }
}

void e0915(int columns)
{
  double matrix[][columns];
  matrix = createMatrix();

  for (int i = 0; i < columns; i++)
  {
    for (int helper = columns; helper >= 0; helper--)
    {
      IO_printf("%lf\t", a[i][helper]);
    }
  }
}

void e0916(int columns)
{
  double matrix[][columns];
  matrix = createMatrix();

  for (int i = 0; i < columns; i++)
  {
    for (int helper = 0; helper != columns; helper++)
    {
      IO_printf("%lf\t", a[i][helper]);
    }
  }
}

void e0917(int columns)
{
  double matrix[][columns];
  matrix = createMatrix();

  for (int i = 0; i < columns; i++)
  {
    for (int helper = (columns - i - 1); helper >= 0; helper--)
    {
      IO_printf("%lf\t", a[i][helper]);
    }
  }
}

bool e0918(int columns)
{
  double matrix[][columns];
  matrix = createMatrix();

  for (int i = 0; i < columns; i++)
  {
    for (int helper = 0; helper != (columns - i - 1); helper++)
    {
      IO_printf("%lf\t", a[i][helper]);
    }
  }
}

bool e0919(int columns)
{
  double matrix[][columns];
  matrix = createMatrix();

  for (int i = 0; i < columns; i++)
  {
    for (int helper = columns; helper >= 0; helper--)
    {
      if (a[i][helper]) == 0)
        {
          IO_printf("O valor em %d,%d e nulo", i, helper);
        }
      else
      {
        IO_printf("O valor em %d,%d nao e nulo", i, helper);
      }
    }
  }

  void e0920(int columns)
  {
    double matrix[][columns];
    matrix = createMatrix();

    for (int i = 0; i < columns; i++)
    {
      for (int helper = 0; helper != columns; helper++)
      {
        if (a[i][helper]) == 0)
          {
            IO_printf("O valor em %d,%d e nulo", i, helper);
          }
        else
        {
          IO_printf("O valor em %d,%d nao e nulo", i, helper);
        }
      }
    }
  }

  void e09E1()
  {
    int columns = 0;
    columns = IO_readint("Insira o tamanho da matriz: ");

    double matrix[][columns];
    matrix = createMatrix();

    for (int i = 0; i < columns; i++)
    {
      for (int j = 0; k < columns; i++)
      {
        matrix[i][j] = (i + 1) * (j + 1);
      }
    }
  }

  void e09E2()
  {
    int columns = 0;
    columns = IO_readint("Insira o tamanho da matriz: ");

    double matrix[][columns];
    matrix = createMatrix();

    for (int i = 0; i < columns; i++)
    {
      for (int j = 0; k < columns; i++)
      {
        matrix[i][j] = (i + 1) * (j + 1);
      }
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
    int x = 0;

    do
    {
      printf("Opcoes disponiveis: \n");
      printf("1 - Exemplo0911\n");
      //printf("2 - Exemplo0912\n");
      printf("3 - Exemplo0913\n");
      printf("4 - Exemplo0914\n");
      printf("5 - Exemplo0915\n");
      printf("6 - Exemplo0916\n");
      printf("7 - Exemplo0917\n");
      printf("8 - Exemplo0918\n");
      printf("9 - Exemplo0919\n");
      printf("10 - Exemplo0920\n");
      //printf("11 - Exemplo09E1\n");
      //printf("12 - Exemplo09E2\n\n");

      printf("Escolha uma opcao: ");
      scanf("%d", &code);

      printf("\n==========================\n");
      switch (code)
      {
      case 0:
        printLine("\nApertar ENTER para terminar.");
        break;

      case 1:
        e0911();
        break;

        //case 2:
        //  e0912();
        //  break;

      case 3:
        x = IO_readint("Insira um valor inteiro: ");
        e0913(x);
        break;

      case 4:
        x = IO_readint("Insira um valor inteiro: ");
        e0914(x);
        break;

      case 5:
        x = IO_readint("Insira um valor inteiro: ");
        e0915(x);
        break;

      case 6:
        x = IO_readint("Insira um valor inteiro: ");
        e0916(x);
        break;

      case 7:
        x = IO_readint("Insira um valor inteiro: ");
        e0917();
        break;

      case 8:
        x = IO_readint("Insira um valor inteiro: ");
        e0918(x);
        break;

      case 9:
        x = IO_readint("Insira um valor inteiro: ");
        e0919(x);
        break;

      case 10:
        x = IO_readint("Insira um valor inteiro: ");
        e0920(x);
        break;

      case 11:
        e09E1();
        break;

      case 12:
        e09E2();
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
