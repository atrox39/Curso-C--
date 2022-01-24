#include<iostream> // Esta es la libreria de input output por consola

using namespace std; // Esto es un nombre de espacio, no se indagara mucho en esta parte por ahora

int main() // Esta es la funcion principal, para que todo programa pueda ser ejecutado necesita un 'main'
{
    string nombre; // Esta variable permitira almacenar el nombre que introduzca el usuario por consola
    cout << "Escriba su nombre: "; // Mostramos un mensaje al usuario para que pueda identificar el comportamiento del programa
    cin >> nombre; // Asignamos el valor introducido por el usuario en la consola a la variable nombre
    cout << "Su nombre es: " << nombre << endl; // Mostramos el valor que introdujo por consola
    return 0;
}