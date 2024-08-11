#include <iostream>
using namespace std;

int factorial(int n1){
    int factorialn=1;
    if (n1==0)
    {
        return factorialn;
    }
    

    for (int i = 1; i <= n1; i++)
    {
        factorialn*=i;
    }
    return factorialn;
}

int main() {
    int num;
    bool bandera=true;
    do{ 
    cout<<"Ingrese un numero positivo"<<endl;
    cin>>num;
    if (num<0)
    {
        bandera=false;
        cout<<"No puede ingresar un numero nagativo"<<endl;
    }
    else
    {
        bandera=true;
    }
    }while(bandera==false);

    cout<<"El factorial es: "<<factorial(num)<<endl;

    return 0;
}
