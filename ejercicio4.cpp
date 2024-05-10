#include <iostream>
using namespace std;

#define MAX 10

float nota[MAX];
float suma = 0, promedio;

int main()
{
    cout << "Proporcione las notas de los 10 estudiantes: " << endl;

    int i = 0;
    while (i < MAX) // Leer las notas de los estudiantes
    {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> nota[i];
        cout << endl;
        i++;
    }

    int j = 0;
    while (j < MAX) // Calcular la suma de las notas
    {
        suma += nota[j];
        j++;
    }

    promedio = suma / MAX;
    cout << "************************************************" << endl;
    cout << "El promedio general de la seccion es: " << promedio << endl;
    cout << "************************************************" << endl;

    return 0;
}
