#include<iostream>
#include<vector>
#include<string>
using namespace std;

void menu(){
    cout<<"**********MENU**********"<<endl;
    cout<<"1.Agendar Contacto"<<endl;
    cout<<"2.Ver Contactos"<<endl;
    cout<<"3.Salir"<<endl;
}

void AgendarContacto(vector<string> &contactos,string name, string number){
    string contacto;
    contacto=name+": "+number;
    contactos.push_back(contacto);
}

void VerContactos(vector<string> &contactos){
    for(int i=0;i<contactos.size();i++){
        cout<<contactos[i]<<endl;
    }
}

int main()
{
    int opcion;
    vector<string> contactos;
    string nombre, numero;
    do{
        menu();
        cout<<"Ingrese una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Ingrese el nombre del contacto: "<<endl;
                cin.ignore();
                getline(cin,nombre);
                cout<<"Ingrese el numero del contacto: "<<endl;   
                getline(cin,numero);
                AgendarContacto(contactos,nombre,numero);
                break;
            case 2:
                VerContactos(contactos);
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                break;
        }        
        }while(opcion!=3);
    
}