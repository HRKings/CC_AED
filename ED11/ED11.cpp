/**
  ED v0.1
  @author Helton Reis
  @version 0.1
  @date //
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits>   // std::numeric_limits
#include <string>   // para cadeias de caracteres

using namespace std;
// ----------------------------------------------- definicoes globais
void pause(std::string text)
{
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl
              << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl
              << std::endl;
} // end pause ( )



// ----------------------------------------------- classes
#include "myarray.hpp"

// ----------------------------------------------- metodos

void e0911()
{
    int n;
    int min;
    int max;

    cout << "Digite uma quantidade n" << endl;
    cin >> n;

    cout << "Digite o valor minimo" << endl;
    cin >> min;

    cout << "Digite o valor maximo" << endl;
    cin >> max;

    Array<int> arranjo(n);

    for (int i = 0; i < arranjo.getLength(); i++)
    {
        int valor = arranjo.randomInt(min, max);
        arranjo.set(i, valor);
    }

    arranjo.fprint("DADOS.txt");
}

void e0911()
{
    Array<int> arranjo;
    arranjo.fread("DADOS.txt");
    int maior = arranjo.getBigest();
    cout << "O maior e " << maior << endl;
}

void e0911()
{
    Array<int> arranjo;
    arranjo.fread("DADOS.txt");
    int menor = arranjo.getSmallest();
    cout << "O menor e " << menor << endl;
}

void e0911()
{
    Array<int> arranjo;
    arranjo.fread("DADOS.txt");
    int valor = arranjo.getSum();
    cout << "A soma e " << valor << endl;
}

void e0911()
{
    Array<int> arranjo;
    arranjo.fread("DADOS.txt");
    float valor = arranjo.getAverage();
    cout << "A media e " << valor << endl;
}

void e0911()
{
    Array<int> arranjo;
    arranjo.fread("DADOS.txt");
    bool b = arranjo.isZero();
    if (b)
        cout << "Todos os valores sao zero" << endl;
    else
        cout << "Nem todos os valores sao zero" << endl;
}

void e0911()
{
    Array<int> arranjo(10);
    arranjo.read();
    bool b = arranjo.isSorted();
    if (b)
        cout << "Esta ordenado" << endl;
    else
        cout << "Nao esta ordenado" << endl;
}

void e0911()
{
    Array<int> arranjo;
    arranjo.fread("DADOS.txt");

    int procurado;

    cout << "Digite um valor a ser procurado" << endl;
    cin >> procurado;

    bool existe = arranjo.findValue(procurado, 0, 5);

    if (existe)
        cout << "existe" << endl;
    else
        cout << "Nao existe" << endl;
}

void e0911()
{
    Array<int> arranjo;
    arranjo.fread("DADOS.txt");

    int constante;

    cout << "Digite uma constante" << endl;
    cin >> constante;

    Array<int> novo;
    novo = arranjo.scale(constante);

    novo.print();
}

void e0911()
{
    Array<int> arranjo;
    arranjo.fread("DADOS.txt");

    arranjo.print();

    cout << endl;

    arranjo.sort();
    arranjo.print();
}

int main(int argc, char **argv)

    int o = 0;

    do
    {
        // identificar
        cout << "ED11 - Programa - v0.1\n" << endl;
        // mostrar opcoes
        cout << "1 - Exemplo0911" << endl;
        cout << "2 - Exemplo0912" << endl;
        cout << "3 - Exemplo0913" << endl;
        cout << "4 - Exemplo0914" << endl;
        cout << "5 - Exemplo0915" << endl;
        cout << "6 - Exemplo0916" << endl;
        cout << "7 - Exemplo0917" << endl;
        cout << "8 - Exemplo0918" << endl;
        cout << "9 - Exemplo0919" << endl;
        cout << "10 - Exemplo0920" << endl;

        // ler do teclado
        cout << endl
             << "Escolha uma opcao: ";
        cin >> x;

        switch (x)
        {
        case 0:
            e0911();
            break;
        case 1:
            e0912();
            break;
        case 2:
            e0913();
            break;
        case 3:
            e0914();
            break;
        case 4:
            e0915();
            break;
        case 5:
            e0916();
            break;
        case 6:
            e0917();
            break;
        case 7:
            e0918();
            break;
        case 8:
            e0919();
            break;
        case 9:
            e0920();
            break;

        default:
            cout << endl
                 << "ERRO: Opcao invalida." << endl;
        } // fim escolher
    } while (x != 0);

    // encerrar
    pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )
