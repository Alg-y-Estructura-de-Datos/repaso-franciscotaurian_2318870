#include <iostream>
#include <cmath>
using namespace std;

void menu(){
    cout<<"--MENU--"<<endl;
    cout<<"1 SUMAR"<<endl;
    cout<<"2 AREA CIRCULO"<<endl;
    cout<<"3 POTENCIA"<<endl;
}

int sumar(int a , int b){
    int suma;
    suma=a+b;
    return suma;
}
int area(int r){
    int ar;
    ar=3.1416*pow(r,2);
    return ar;
}

int potencia(int b, int e){
    int pot;
    pot=pow(b,e);
    return pot;
}


int main(){
    int opcion,n1,n2,radio,base,exponente;
    do{
    menu();
    cout<<"Ingrese una opcion"<<endl;
    cin>>opcion; 
    switch (opcion)
    {
    case 1:
        cout<<"Ingrese dos numeros"<<endl;
        cin>>n1>>n2;
        cout<<"La suma de los numeros es: "<<sumar(n1,n2)<<endl;
        break;
    case 2:
        cout<<"Ingrese el radio del circulo"<<endl;
        cin>>radio;
        cout<<"El area es: "<<area(radio)<<endl;;
        break;

    default:
    case 3:
        cout<<"Ingrese la base y el exponente"<<endl;
        cin>>base>>exponente;
        cout<<"El resultado es: "<<potencia(base,exponente)<<endl;
        break;
    }
    }while(opcion!=0);
    return 0;
}
