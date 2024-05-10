#include <iostream>
using namespace std;

#define MAX_ALUMNOS 8
#define NOTA_APROBADA 70
#define NOTA_MAXIMA 100

int main() {
    // Variables
    int notas[MAX_ALUMNOS];
    int cantAlumnos = MAX_ALUMNOS, suma = 0, cantAprobados = 0, cantReprobados = 0; // Seteamos la cantidad predeterminada
    float promedio;
    int i = 0; // Inicializamos el contador

    //Notas
    while (i < cantAlumnos) {
        cout << "Ingrese la nota del alumno " << i + 1 << ": ";
        cin >> notas[i];

        // Validar nota
        if (notas[i] < 0 || notas[i] > NOTA_MAXIMA) {
            cout << "Nota invalida. Intente de nuevo." << endl;
            return 1;
        }

        suma += notas[i];

        // Contar aprobados y reprobados
        if (notas[i] >= NOTA_APROBADA)
            cantAprobados++;
        else
            cantReprobados++;

        i++; // Incrementamos el contador
    }

    // Calcular promedio
    promedio = suma / static_cast<float>(cantAlumnos);

    // Salidas
    cout << "El promedio general del grupo es: " << promedio << endl;
    cout << "La cantidad de alumnos aprobados es: " << cantAprobados << " :)" << endl;
    cout << "La cantidad de alumnos reprobados es: " << cantReprobados << " :(" << endl;

    return 0;
}
