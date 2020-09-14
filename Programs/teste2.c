//teste2 - 669678 - Helton_Cruz_Reis - v0.1

#include <stdio.h>

// Definir constantes, métodos, etc.

//Main method to run the program
int main()
{
   //Definir dados
   int x = 5;

   //Identificar
   printf("teste2 - 669678 - Helton_Cruz_Reis - v0.1\n");
   
   //Definir ações
   printf("%s%i\n", "x = ", x);
   
   x = 10;
   printf("x = %i\n", x);
   
   printf("x = %i%c", x, '\n');
   
   printf("Entrar com um valor inteiro: ");
   scanf("%d", &x);
   printf("x = %i%c", x, '\n');
   
   //Encerrar
   printf("Apertar ENTER para continuar...\n");
   getchar();
   return (1);
}

/*
   Anotações e testes:
*/