# Curso basico de C++


### Leccion 1 - Estructura basica de un programa en C++

```c++
#include<iostream> // Esta es la libreria de input output por consola

using namespace std; // Esto es un nombre de espacio, no se indagara mucho en esta parte por ahora

int main() // Esta es la funcion principal, para que todo programa pueda ser ejecutado necesita un 'main'
{
    return 0;
}
```

### Leccion 2 - Salida de texto en consola

```c++
#include<iostream> // Esta es la libreria de input output por consola

using namespace std; // Esto es un nombre de espacio, no se indagara mucho en esta parte por ahora

int main() // Esta es la funcion principal, para que todo programa pueda ser ejecutado necesita un 'main'
{
    cout << "Este texto se mostrara en console" << endl; // Para poder imprimir texto en consola es necesario usar la palabra 'cout' seguido de los simbolos '<<', 'endl' se usa para dar un salto de linea
    return 0;
}
```

Para poder ejecutar este codigo es necesario usar los siguientes comandos desde la consola:
```bash
gcc nombre_programa.cpp -o nombre_programa.exe
```