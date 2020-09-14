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

void e0511(int x)
{
  for (int i = 0; i < x; i++)
  {
    if (i % 3 == 0)
    {
      printf("%d ", i);
    }
  }
}

void e0512(int x)
{
  for (int i = 0; i < x; i++)
  {
    if (i % 3 == 0 && i % 2 == 0)
    {
      printf("%d ", i);
    }
  }
}

void e0513(int x)
{
  for (int i = x; i > 0; i--)
  {
    if (i % 3 == 0 && i % 2 != 0)
    {
      printf("%d ", i);
    }
  }
}

void e0514(int x)
{
  int y = 3;

  for (int i = 0; i <= x; i++)
  {
    printf("1/%d=%.1lf ", y, (1 / (double)y));
    y += 3;
  }
}

void e0515(int x, double y)
{
  for (int i = 1; i <= x; i++)
  {
    printf("1/%.1lf^%d=%.1lf ", y, i, (1 / (pow(y, i))));
  }
}

void e0516(int x)
{
  int y = 0;
  int first = 0;
  for (int i = 0; i <= x; i++)
  {
    if (i > 0 && i % 2 == 0 && i % 3 != 0)
    {
      first = i;
      while (first >= 10)
      {
        first /= 10;
      }

      if (first == 2)
      {
        printf("%d + ", i);
        y += i;
      }
    }
  }

  printf("= %d", y);
}

void e0517(int x)
{
  int first = 0;
  for (int i = 0; i <= x; i++)
  {
    if (i > 0 && i % 2 == 0 && i % 3 != 0)
    {
      first = i;
      while (first >= 10)
      {
        first /= 10;
      }

      if (first == 2)
      {
        printf("1/%d=%.1lf ", i, (1 / (double)i));
      }
    }
  }
}

void e0518(int x)
{
  int first = 0;
  int y = 0;

  for (int i = 0; i <= x; i++)
  {
    first = i;
    while (first >= 10)
    {
      first /= 10;
    }

    if (first == 1)
    {
      printf("%d + ", i);
      y += i;
    }
  }

  printf("= %d", y);
}

void e0519(int x)
{
  int first = 0;
  int y = 1;

  for (int i = 0; i <= x; i++)
  {
    first = i;
    while (first >= 10)
    {
      first /= 10;
    }

    if (first == 1)
    {
      printf("%d^2 + ", i);
      y += pow(i, 2);
    }
  }

  printf("= %d", y);
}

void e0520(int x)
{
  int first = 0;
  double y = 0;

  for (int i = 0; i <= x; i++)
  {
    first = i;
    while (first >= 10)
    {
      first /= 10;
    }

    if (first == 1)
    {
      printf("1/%d=%.2lf + ", i, (1 / (double)i));
      y += (1 / (double)i);
    }
  }

  printf("= %.2lf", y);
}

int n_factor_show(int n)
{
  if (n > 1)
  {
    printf("%d * ", (n - 1));
    n *= n_factor_show(n - 1);
  }

  return n;
}

int n_factor(int n)
{
  if (n > 1)
  {
    n *= n_factor(n - 1);
  }

  return n;
}

void e05E1(int x)
{
  int y = 0;

  printf("%d * ", x);
  y = n_factor_show(x);

  printf("= %d", y);
}

void e05E2(int x)
{
  double d = 1;

  int y = 3;
  int z = 2;

  for (int i = 0; i < x; i++)
  {
    d *= (1 + ((double)y / (double)n_factor(z)));
    printf("(1 + %d/%d!(%d)) * ", y, z, n_factor(z));
    y++;
    z++;
  }

  printf("= %.2lf", d);
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

  do
  {
    printf("Opcoes disponiveis: \n");
    printf("1 - Exemplo0511\n");
    printf("2 - Exemplo0512\n");
    printf("3 - Exemplo0513\n");
    printf("4 - Exemplo0514\n");
    printf("5 - Exemplo0515\n");
    printf("6 - Exemplo0516\n");
    printf("7 - Exemplo0517\n");
    printf("8 - Exemplo0518\n");
    printf("9 - Exemplo0519\n");
    printf("10 - Exemplo0520\n");
    printf("11 - Exemplo05E1\n");
    printf("12 - Exemplo05E2\n\n");

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
      e0511(x);
      break;

    case 2:

      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0512(x);
      break;

    case 3:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0513(x);
      break;

    case 4:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0514(x);
      break;

    case 5:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      printf("Insira um valor real: ");
      scanf("%lf", &y);
      e0515(x, y);
      break;

    case 6:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0516(x);
      break;

    case 7:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0517(x);
      break;

    case 8:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0518(x);
      break;

    case 9:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0519(x);
      break;

    case 10:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e0520(x);
      break;

    case 11:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e05E1(x);
      break;

    case 12:
      printf("Insira uma quantidade inteira: ");
      scanf("%d", &x);
      e05E2(x);
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