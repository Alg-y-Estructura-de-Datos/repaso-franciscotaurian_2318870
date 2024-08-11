#include <iostream>
using namespace std;

bool marcarAsiento(bool &a)
{
    if (a == true)
    {
        return false;
    }
    else
    {
        a = true;
    }
}

int main()
{

    bool asientos[10] = {false}, bandera = true;

    int asiento;
    do
    {
        cout << "Ingrese el asiento que desea reservar, ingrese 11 para ver el listado, 12 para terminar" << endl;
        cin >> asiento;

        do
        {
            if (asiento < 0 || asiento > 12)
            {
                cout << "Ingrese un numero valido" << endl;
                bandera = false;
            }
            else
            {
                bandera = true;
            }
        } while (bandera == false);

        if (asiento == 11)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << asientos[i] << endl;
            }
        }
        else
        {
            if (marcarAsiento(asientos[asiento]) == false)
            {
                cout << "El asiento ya esta reservado" << endl;
            }
            else
            {
                marcarAsiento(asientos[asiento]);
                cout << "El asiento fue reservado" << endl;
            }
        }
    }while (asiento != 12);

        return 0;
    }
