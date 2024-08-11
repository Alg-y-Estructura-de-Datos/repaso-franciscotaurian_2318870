#include <iostream>
using namespace std;

void menu()
{
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir" << endl;
}

class calculadora
{
private:
    float numA;
    float numB;

public:
    calculadora();
    float sumar(float numA, float numB);
    float restar(float numA, float numB);
    float multiplicar(float numA, float numB);
    float dividir(float numA, float numB);
};

calculadora::calculadora()
{
    numA = 0;
    numB = 0;
}

float calculadora::sumar(float numA, float numB)
{
    return numA + numB;
}

float calculadora::restar(float numA, float numB)
{
    return numA - numB;
}

float calculadora::multiplicar(float numA, float numB)
{
    return numA * numB;
}

float calculadora::dividir(float numA, float numB)
{
    if (numB == 0)
    {
        cout << "No se puede dividir por 0" << endl;
        return 0;
    }
    else
    {
        return numA / numB;
    }
}

int main()
{
    float num1, num2;
    int option;

    do
    {
        cout << "Ingrese una opcion: " << endl;
        menu();
        cin >> option;

        calculadora calc1;

        switch (option)
        {
        case 1:
            cout << "Ingrese el primer numero: " << endl;
            cin >> num1;
            cout << "Ingrese el segundo numero: " << endl;
            cin >> num2;
            cout << "La suma es: " << calc1.sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Ingrese el primer numero: " << endl;
            cin >> num1;
            cout << "Ingrese el segundo numero: " << endl;
            cin >> num2;
            cout << "La resta es: " << calc1.restar(num1, num2) << endl;
            break;
        case 3:
            cout << "Ingrese el primer numero: " << endl;
            cin >> num1;
            cout << "Ingrese el segundo numero: " << endl;
            cin >> num2;
            cout << "La multiplicacion es: " << calc1.multiplicar(num1, num2) << endl;
            break;
        case 4:
            cout << "Ingrese el primer numero: " << endl;
            cin >> num1;
            cout << "Ingrese el segundo numero: " << endl;
            cin >> num2;
            cout << "La division es: " << calc1.dividir(num1, num2) << endl;
            break;
        default:
            break;
        };
    } while (option != 5);

    return 0;
}