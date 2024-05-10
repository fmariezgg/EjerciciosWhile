#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int i = 100;

    cout << "La suma de los numeros pares entre 100 y 200 es: ";

    while (i <= 200)
    {
        suma += i; // Se suma el valor actual de i a suma
        i += 2;    // Se aumenta i en 2 para obtener los números pares
    }

    cout << suma << endl;

    return 0;
}
