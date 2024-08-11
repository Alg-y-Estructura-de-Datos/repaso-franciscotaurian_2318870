#include <iostream>
using namespace std;

void intercambiarJugos(float &v1, float &v2)
{

    float aux;
    aux = v1;
    v1 = v2;
    v2 = aux;
}

int main()
{

    float vaso1, vaso2;
    bool bandera = true;
    do
    {
        cout << "Ingrese la cantidad de jugo de manzana en ml" << endl;
        cin >> vaso1;
        if (vaso1 < 0)
        {
            bandera = false;
            cout << "La cantidad no puede ser negativa" << endl;
        }
        else{ 
        bandera=true;
        }
    } while (bandera==false);

    do
    {
        cout << "Ingrese la cantidad de jugo de naranja en ml" << endl;
        cin >> vaso2;
        if (vaso2 < 0)
        {
            bandera = false;
            cout << "La cantidad no puede ser negativa" << endl;
        }
        else{ 
        bandera=true;
        }
    } while (bandera==false);

    intercambiarJugos(vaso1, vaso2);

    cout << "La cantidad de jugo de manzana es: " << vaso1 << endl;
    cout << "La cantidad de jugo de naranja es: " << vaso2 << endl;

    return 0;
}
