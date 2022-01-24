#include<iostream> // Esta es la libreria de input output por consola

using namespace std; // Esto es un nombre de espacio, no se indagara mucho en esta parte por ahora

int main() // Esta es la funcion principal, para que todo programa pueda ser ejecutado necesita un 'main'
{
    int variableNumerica = 10; // Int es un tipo de dato de numeros enteros tanto negativos como positivos, solo acepta numeros sin punto flotante (no nomeros fraccionarios)
    float variableFraccionaria = 10.14; // Float es un tipo de dato de numeros fraccionarios negativos y positivos, estos si aceptan punto flotante (fraccionarios)
    char caracter = 'a'; // Este tipo de dato acepta unicamente carateres en donde se utilizan comillas simples para contener el caracter y solo 1 caracter
    string texto = "este es un texto simple"; // Este tipo de dato se utiliza para contener texto y se utilizan las comillas dobles para contener el texto
    cout << "Variable numerica: " << variableNumerica << endl; // Para poder imprimir texto en consola es necesario usar la palabra 'cout' seguido de los simbolos '<<', 'endl' se usa para dar un salto de linea
    cout << "Variable fraccionaria: " << variableFraccionaria << endl; // Para poder imprimir texto en consola es necesario usar la palabra 'cout' seguido de los simbolos '<<', 'endl' se usa para dar un salto de linea
    cout << "Variable tipo caracter: " << caracter << endl; // Para poder imprimir texto en consola es necesario usar la palabra 'cout' seguido de los simbolos '<<', 'endl' se usa para dar un salto de linea
    cout << "Variable de texto: " << texto << endl; // Para poder imprimir texto en consola es necesario usar la palabra 'cout' seguido de los simbolos '<<', 'endl' se usa para dar un salto de linea
    return 0;
}