#include<iostream>

using namespace std;

int main()
{
    int variableNumerica = 10;
    int variableNumerica2 = 20;
    int variableResultado = variableNumerica + variableNumerica2;
    float tipoDeCambio = 20.12;
    char caracter = 'c';
    char texto[] = "Texto";
    char texto2[] = {'T','e','x','t','o'};

    texto2[0] = 't';

    cout << texto2 << endl;
    cout << "Ejemplo 1" << endl;
    return 0;
}