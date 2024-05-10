#include <iostream>

using namespace std;

int main()
{
    // Declaramos las matrices
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizResultado[3][3];

    // Ingresando datos para la matriz A
    cout << "Ingrese los elementos de la matriz A" << endl;
    int filaA = 0, columnaA = 0;
    while (filaA < 3)
    {
        columnaA = 0;
        while (columnaA < 3)
        {
            cout << "Para la fila " << filaA + 1 << " y la columna " << columnaA + 1 << ": ";
            cin >> matrizA[filaA][columnaA];
            columnaA++;
        }
        filaA++;
        cout << endl;
    }
    cout << endl;

    // Ingresando datos para la matriz B
    cout << "Ingrese los elementos de la matriz B" << endl;
    int filaB = 0, columnaB = 0;
    while (filaB < 3)
    {
        columnaB = 0;
        while (columnaB < 3)
        {
            cout << "Para la fila " << filaB + 1 << " y la columna " << columnaB + 1 << ": ";
            cin >> matrizB[filaB][columnaB];
            columnaB++;
        }
        filaB++;
        cout << endl;
    }
    cout << endl;

    // Mostrando la matriz A
    cout << "Matriz A..." << endl;
    filaA = 0;
    while (filaA < 3)
    {
        columnaA = 0;
        while (columnaA < 3)
        {
            cout << matrizA[filaA][columnaA] << "\t";
            columnaA++;
        }
        filaA++;
        cout << endl << endl;
    }

    // Mostrando la matriz B
    cout << "Matriz B..." << endl;
    filaB = 0;
    while (filaB < 3)
    {
        columnaB = 0;
        while (columnaB < 3)
        {
            cout << matrizB[filaB][columnaB] << "\t";
            columnaB++;
        }
        filaB++;
        cout << endl << endl;
    }

    // Realizando la multiplicación de matrices
    int filaR = 0;
    while (filaR < 3)
    {
        int columnaR = 0;
        while (columnaR < 3)
        {
            matrizResultado[filaR][columnaR] = (matrizA[filaR][columnaR]) * (matrizB[filaR][columnaR]);
            columnaR++;
        }
        filaR++;
    }
    //asegurarnos de mantener un control adecuado de las filas para recorrer las matrices
    // Mostrando el resultado de la multiplicación
    cout << endl << "Matriz Resultado de la Multiplicación..." << endl;
    filaR = 0;
    while (filaR < 3)
    {
        int columnaR = 0;
        while (columnaR < 3)
        {
            cout << matrizResultado[filaR][columnaR] << "\t";
            columnaR++;
        }
        filaR++;
        cout << endl << endl;
    }

    return 0;
}
