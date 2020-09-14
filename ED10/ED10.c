/**
  ED v0.1
  @author Helton Reis
  @version 0.1
  @date //
*/

#include "io.h"

typedef struct s_int_Array
{
    int length;
    ints data;
    int ix;
} int_Array;

typedef int_Array *ref_int_Array;

ref_int_Array new_int_Array(int n)
{
    ref_int_Array tpmArray = (ref_int_Array)malloc(sizeof(int_Array));

    if (tpmArray == NULL)
    {
        IO_printf("\nERRO: Falta de espaco.\n");
    }
    else
    {
        tpmArray->length = 0;
        tpmArray->data = NULL;
        tpmArray->ix = -1;
        if (n > 0)
        {
            tpmArray->length = n;
            tpmArray->data = (ints)malloc(n * sizeof(int));
            tpmArray->ix = 0;
        }
    }
    return (tpmArray);
}

void free_int_Array(ref_int_Array tpmArray)
{
    if (tpmArray != NULL)
    {
        free(tpmArray->data);
        free(tpmArray);
    }
}

void printIntArray(int_Array array)
{
    for (array.ix = 0; array.ix < array.length; array.ix++)
    {
        printf("%2d: %d\n", array.ix, array.data[array.ix]);
    }
}

void e0911()
{
    int min = 0;
    int max = 0;
    int quantity = 0;

    min = IO_readint("Digite o valor minimo: ");
    max = IO_readint("Digite o valor maximo: ");
    quantity = IO_readint("Digite a quantidade de valores: ");

    if (quantity < 1 || max <= min)
        printf("Limite invalido");
    else
    {
        ref_int_Array valores = new_int_Array(quantity);
        rseed();
        for (int i = 0; i < valores->length; i++)
            valores->data[i] = random_range(min, max);

        fprintIntArray("DADOS.txt", *valores);
    }
}

int ProcurarNumero(ref_int_Array valores, int n)
{
    int value = -1;

    for (valores->ix = 0; valores->ix < valores->length; valores->ix++)
    {
        if (valores->data[valores->ix] == n)
            value = valores->ix;
    }
    return value;
}

void e0912()
{
    int valor = 0;
    valor = IO_readint("Digite o valor a ser procurado: ");

    ref_int_Array arranjo;
    arranjo = new_int_Array(freadArraySize("DADOS.txt"));

    *arranjo = fIO_readintArray("DADOS.txt");

    int index = ProcurarNumero(arranjo, valor);

    printf("\nO numero esta na posicao %d\n", index);
    free_int_Array(arranjo);
}

bool CompararArray(ref_int_Array array1, ref_int_Array array2)
{
    bool resposta = FALSE;

    if (array1->length == array2->length)
    {
        resposta = TRUE;
        for (array1->ix = 0; array1->ix < array1->length; array1->ix++)
        {
            if (array1->data[array1->ix] != array2->data[array1->ix])
                resposta = FALSE;
        }
    }

    return resposta;
}

void e0913()
{
    ref_int_Array array1;
    ref_int_Array array2;

    array1 = new_int_Array(freadArraySize("DADOS1.txt"));
    array2 = new_int_Array(freadArraySize("DADOS2.txt"));

    *array1 = fIO_readintArray("DADOS1.txt");
    *array2 = fIO_readintArray("DADOS2.txt");

    bool resposta = FALSE;

    resposta = CompararArray(arranjo1, arranjo2);
    printf("%s\n", resposta ? "Os arrays sao iguais" : "Os arrays nao sao iguais");
}

ref_int_Array SomarArrays(ref_int_Array array1, ref_int_Array array2)
{
    ref_int_Array tpmArray;

    tmpArray = new_int_Array(array1->length);

    if (array1->length == array2->length)
    {
        for (array1->ix = 0; a1->ix < array1->length; array1->ix++)
        {
            tpmArray->data[array1->ix] = array1->data[array1->ix] + array2->data[array1->ix];
        }
    }

    return tpmArray;
}

void e0914()
{
    ref_int_Array array1;
    ref_int_Array array2;

    ref_int_Array resposta;

    array1 = new_int_Array(freadArraySize("DADOS1.txt"));
    array2 = new_int_Array(freadArraySize("DADOS2.txt"));

    resposta = new_int_Array(array1->length);

    *array1 = fIO_readintArray("DADOS1.txt");
    *array2 = fIO_readintArray("DADOS2.txt");

    resposta = SomarArrays(array1, array2);

    printIntArray(*resposta);
}

bool IsArrayOrdenado(ref_int_Array valores)
{
    for (valores->ix = 1; valores->ix < valores->length; valores->ix++)
    {
        if (valores->data[valores->ix] < valores->data[valores->ix - 1])
            return FALSE;
    }

    return TRUE;
}

void e0915()
{
    ref_int_Array array1;
    array1 = new_int_Array(freadArraySize("DADOS.txt"));

    *array1 = fIO_readintArray("DADOS.txt");

    bool resposta = FALSE;
    resposta = IsArrayOrdenado(array1);

    printf("%s\n", resposta ? "O array esta ordenado" : "O array nao esta ordenado");

    free_int_Array(array1);
}

void e0916()
{
}

void e0917()
{
}

bool e0918()
{
}

bool e0919()
{
}

void e0920(
{
}

void e09E1()
{
}

void e09E2()
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

    do
    {
        printf("Opcoes disponiveis: \n");
        printf("1 - Exemplo0911\n");
        printf("2 - Exemplo0912\n");
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

        case 2:
            e0912();
            break;

        case 3:
            e0913();
            break;

        case 4:
            e0914();
            break;

        case 5:
            e0915();
            break;

        case 6:
            e0916();
            break;

        case 7:
            e0917();
            break;

        case 8:
            e0918();
            break;

        case 9:
            e0919();
            break;

        case 10:
            e0920();
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
