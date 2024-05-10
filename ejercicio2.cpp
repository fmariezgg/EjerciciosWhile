#include<iostream>
using namespace std;

void ciclo(){
    int i = 100;
    while (i >= 1)
    {
        if(i % 2 != 0)
        {
            cout << i << "\n";
        }
        i--;
    }
}

int main()
{
    cout << "Numeros impares entre 1 y 100" << endl;
    ciclo();
    return 0;
}
