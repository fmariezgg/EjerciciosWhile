#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int suma = 0;
    int i = 1;
    
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: ";
    
    while (i <= 100)
    {
        suma += pow(i,2);
        i++;
    }
    
    cout << suma << endl;

    return 0;
}
