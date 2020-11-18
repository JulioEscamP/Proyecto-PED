#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

enum Necesidad{Ropa,Cama,Medicina,LimpiezaPersonal};
enum Albergue{NJ01,NJ02,NJ03,SS01,SS02,SS03,AC01,AC02};
enum Injurie{Hueso_roto,Laceraciones,Enfermedad_respiratoria, Herida_craneal,Enfermedad_grave};

struct Herido
{
    string nombre;
    string apellido;
    int edad;
    Injurie in;
    string hospital;
}; 

struct Afectado
{
    string nombre;
    string apellido;
    int edad;
    Necesidad nc;
    Albergue alb;
}; 

struct Desaparecido
{
    string nombre;
    string apellido;
    int edad;
}; 

void damnificados(list <Afectado> Damnificados){
    bool m=true, continuar=true, continuar2=true;
    int option, n, o;
    struct Afectado afectado;
    while (m)
    {
        cout << "\n***Menu de registro de Damnificados***\n" << endl;
        cout << "1. Ingresar una persona a un albergue " << endl;
        cout << "2. Eliminar a una persona de algún albergue" << endl;
        cout << "3. Mostrar lista de los damnificados" << endl;
        cout << "4. Volver" << endl;
        cout << "*Introduzca el numero de la accion a realizar*" << endl;
        
        cin >> option;cout<<endl;
        switch (option)
        {
        case 1:
           cout << "Ingrese primer y segundo nombre \n";
           getline(cin, afectado.nombre); cout << endl;
           cout << "Ingrese primer y segundo apellido \n";
           getline(cin, afectado.apellido); cout << endl;
           cout << "Ingrese edad \n";
           cin.ignore();
           cin >> afectado.edad;

           cout << "Ingrese necesidad que presenta: \n 1. Ropa\n 2.Cama\n 3.Medicina\n 4.LimpiezaPersonal  \n";
           cin>>n; cout<<endl;
           switch(n){
               case 1 : afectado.nc = Ropa; continuar = false; 
               break;
               case 2 : afectado.nc = Cama; continuar = false; 
               break;
               case 3 : afectado.nc = Medicina; continuar = false; 
               break;
               case 4 : afectado.nc = LimpiezaPersonal; continuar = false; 
               break;
               default :
               cout<<"opcion no valida";
               break;
           }
           cout << "Ingrese necesidad que presenta: \n NJ01,NJ02,NJ03,SS01,SS02,SS03,AC01,AC02  \n";
           cin>>o; cout<<endl;
           switch(o){
               case 1 : afectado.alb = NJ01; continuar2 = false; 
               break;
               case 2 : afectado.alb = NJ02; continuar2 = false; 
               break;
               case 3 : afectado.alb = NJ03; continuar2 = false; 
               break;
               case 4 : afectado.alb = SS01; continuar2 = false; 
               break;
               case 5 : afectado.alb = SS02; continuar2 = false; 
               break;
               case 6 : afectado.alb = SS03; continuar2 = false; 
               break;
               case 7 : afectado.alb = AC01; continuar2 = false; 
               break;
               case 8 : afectado.alb = AC01; continuar2 = false; 
               break;
               default :
               cout<<"opcion no valida";
               break;
           }
            Damnificados.insert(Damnificados.end(), afectado);
           
            break;
        case 2:
         cout << "Ingrese nombre de la persona que ya recibió atención\n";
           getline(cin, afectado.nombre); cout << endl;

        cout<<endl<<" Elimnando  persona recuperada..."<<endl; 
            for(auto iter = Damnificados.begin(); iter != Damnificados.end(); ++iter)
                if(iter->nombre == afectado.nombre){
                  iter = Damnificados.erase(iter);
                   break;
            }
            break;
        
        case 3:
        cout<<endl<<"Mostrandlo lista: "<<endl;
            for (Afectado i : Damnificados) {
                cout <<"Nombres: "<< i.nombre << " ";
                cout <<"Apellidos: "<< i.apellido << " ";
                cout <<"Edad: "<< i.edad << endl;
                cout <<"Necesidad: "<< i.nc << " ";
                cout <<"Albergue: "<< i.alb << endl;
           }
            
            break;

        
        case 4:
            m=false;
            break;
        
        default:
            cout<<"Opcion no valida\n";
            break;
        }

    }
}
void heridos( list <Herido> Heridos){
    bool m=true, continuar=true;
    int option, n;
    struct Herido herido;
    while (m)
    {
        cout << "\n***Menu de registro de Heridos***\n" << endl;
        cout << "1. Ingresar una persona para tratamiento " << endl;
        cout << "2. Eliminar una persona que ya ha recibido tratamiento" << endl;
        cout << "3. Ver lista de personas heridas" << endl;
        cout << "4. Volver" << endl;
        cout << "*Introduzca el numero de la accion a realizar*" << endl;

        cin >> option;cout<<endl;
        switch (option)
        {
        case 1:
         cout << "Ingrese primer y segundo nombre \n";
           getline(cin, herido.nombre); cout << endl;
           cout << "Ingrese primer y segundo apellido \n";
           getline(cin, herido.apellido); cout << endl;
           cout << "Ingrese edad \n";
           cin.ignore();
           cin >> herido.edad;

           cout << "Ingrese Problema que presenta\n 1. Hueso_roto 2.Laceraciones 3.Enfermedad_respiratoria 4.Herida_craneal 5.Enfermedad_grave \n";
           cin>>n;cout<<endl;
           switch(n){
               case 1 : herido.in = Hueso_roto; continuar = false; 
               break;
               case 2 : herido.in = Laceraciones; continuar = false; 
               break;
               case 3 : herido.in = Enfermedad_respiratoria; continuar = false; 
               break;
               case 4 : herido.in = Herida_craneal; continuar = false; 
               break;
               case 5 : herido.in = Enfermedad_grave; continuar = false; 
               break;
               case 6 : cout<<"Opcion no valida\n";
               break;
           }
           cout << "Ingrese al hospital al que se le llevara \n";
           getline(cin, herido.hospital); cout << endl;
           Heridos.insert(Heridos.end(), herido);
            
            break;
        case 2:
        cout << "Ingrese nombre de la persona que ya recibió atención\n";
           getline(cin, herido.nombre); cout << endl;

        cout<<endl<<" Elimnando  persona recuperada..."<<endl; 
            for(auto iter = Heridos.begin(); iter != Heridos.end(); ++iter)
                if(iter->nombre == herido.nombre){
                  iter = Heridos.erase(iter);
                   break;
            }
        break;

        case 3:
        cout<<endl<<"Mostrandlo lista: "<<endl;
            for (Herido i : Heridos) {
                cout <<"Nombres: "<< i.nombre << " ";
                cout <<"Apellidos: "<< i.apellido << " ";
                cout <<"Edad: "<< i.edad << endl;
                cout <<"Problema que presenta: "<< i.in << " ";
           }
           
            break;
        case 4:
            m=false;
            break;
        
        default:
            cout<<"Opcion no valida\n";
            break;
        }

    }
}
void desaparecidos(list <Desaparecido> Desaparecidos){
    bool m=true;
    int option;
    struct Desaparecido desaparecido;
    while (m)
    {
        cout << "\n***Menu de registro de Desaparecidos***\n" << endl;
        cout << "1. Ingresar una persona desaparecida " << endl;
        cout << "2. Eliminar una persona de la lista(Encontrada)" << endl;
        cout << "3. Mostrar lista" << endl;
        cout << "4. Volver" << endl;
        cout << "*Introduzca el numero de la accion a realizar*" << endl;

        cin >> option;cout<<endl;
        switch (option)
        {
        case 1:
           cout << "Ingrese primer y segundo nombre \n";
           getline(cin, desaparecido.nombre); cout << endl;
           cout << "Ingrese primer y segundo apellido \n";
           getline(cin, desaparecido.apellido); cout << endl;
           cout << "Ingrese edad \n";
           cin.ignore();
           cin >> desaparecido.edad;
           Desaparecidos.insert(Desaparecidos.end(), desaparecido);
            break;
        case 2:
        cout << "Ingrese nombre de la persona que ya fue encontrada\n";
           getline(cin, desaparecido.nombre); cout << endl;

        cout<<endl<<" Elimnando  persona recuperada..."<<endl; 
            for(auto iter = Desaparecidos.begin(); iter != Desaparecidos.end(); ++iter)
                if(iter->nombre == desaparecido.nombre){
                  iter = Desaparecidos.erase(iter);
                   break;
            }
        
            
            break;
        case 3:
        cout<<endl<<"Mostrandlo lista: "<<endl;
            for (Desaparecido i : Desaparecidos) {
                cout <<"Nombres: "<< i.nombre << " ";
                cout <<"Apellidos: "<< i.apellido << " ";
                cout <<"Edad: "<< i.edad << endl;
           }
            
            break;
        case 4:
            m=false;
            break;
        
        default:
            cout<<"Opcion no valida\n";
            break;
        }

    }
}
void menu(list <Afectado> Damnificados, list <Herido> Heridos, list <Desaparecido> Desaparecidos){
     bool m = true;
     int option;
     Afectado afec;

    while (m)
    {
        cout << "\n***Menu de registro de afectados***\n" << endl;
        cout << "1. Registro de Damnificado" << endl;
        cout << "2. Registro de Herido" << endl;
        cout << "3. Registro de Desaparecido" << endl;
        cout << "4. Salir" << endl;
        cout << "*Introduzca el numero de la accion a realizar*" << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            damnificados(Damnificados);
            break;
        case 2:
            heridos(Heridos);
            break;
        case 3:
            desaparecidos(Desaparecidos);
            break;
        case 4:
            cout << "\nCerrando... Tenga buen dia\n";
            m=false;
            break;
        
        default:
            cout<<"Opcion no valida\n";
            break;
        }

    }
}

int main(void){
 list <Afectado> Damnificados;
 list <Herido> Heridos;
 list <Desaparecido> Desaparecidos;

 menu(Damnificados,Heridos,Desaparecidos);

 return 0;
}