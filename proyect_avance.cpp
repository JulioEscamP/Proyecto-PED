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
    bool m=true, continuar=true;
    int option, n;
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
               case 5 : cout<<"Opcion no valida\n";
               break;
           }
            Damnificados.insert(Damnificados.end(), afectado);
           
            break;
        case 2:
            
            break;
        case 3:
            
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
           
            break;
        case 3:
            
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
            
            break;
        case 3:
            
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