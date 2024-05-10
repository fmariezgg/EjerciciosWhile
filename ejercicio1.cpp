#include<iostream>
using namespace std;

// Funcion para calcular la suma de los numeros
int ciclo(int cantidad)
{
    int total_suma = 0;
    int x = 1;
    int n;

    while (x <= cantidad)
    {
        cout << "Ingrese el numero " << x << ": ";
        cin >> n;
        total_suma = total_suma + n;
        x++;
    }

    return total_suma;
}

int main()
{
    int cantidad;

    cout << "Dime cuantos numeros quieres sumar: ";
    cin >> cantidad;

    int miciclo = ciclo(cantidad);
    cout << "El total de la suma es: " << miciclo;

    return 0;
}
