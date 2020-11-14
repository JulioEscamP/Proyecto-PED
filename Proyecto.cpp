#include <iostream>
#include <list>
#include <string>
using namespace std;


void menu();

enum Necesidad{Ropa,Cama,Medicina,LimpiezaPersonal};
enum Albergue{NJ01,NJ02,NJ03,SS01,SS02,SS03,AC01,AC02};


struct Afectado
{
    string nombre;
    string apellido;
    int edad;
    list <Necesidad> nc;
    Albergue alb;
};

struct Desaparecido
{
    string nombre;
    string apellido;
    int edad;
};

int main()
{

list <Afectado> Damnificados;
list <Afectado> Heridos;
list <Afectado> Desaparecidos;
menu(Damnificados,Heridos,Desaparecidos);

return 0;

}

void menu(list <Afectado> a, list <Afectado> b, list <Afectado> c)
{
    bool m = true;
    int n;
    Afectado afec;

    while (m)
    {
        cout << "***Menu de registro de afectados***" << endl;
        cout << "1. Registro de Damnificado" << endl;
        cout << "2. Registro de Herido" << endl;
        cout << "3. Registro de Desaparecido" << endl;
        cout << "4. Salir" << endl;
        cout << "*Introduzca el numero de la accion a realizar*" << endl;

        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Registro de Damnificado";
            submenuRegistro(a, afec);
            
            break;
        case 2:
            cout << "Registro de Heridos";
            submenuRegistro(a, afec);
            
            break;
        case 3:
            cout << "Registro de desaparecidos";
            submenuRegistro(a, afec);
            
            break;
        
        
        default:
            break;
        }

    }
    

}

void submenuRegistro(list <Afectado> x, Afectado y)
{
    bool j = true;
    int e, i;

    cout << "Ingrese primer y segundo nombre \n";
    getline(cin, y.nombre); cout << endl;
    cout << "Ingrese primer y segundo apellido \n";
    getline(cin, y.apellido); cout << endl;
    cout << "Ingrese edad \n";
    cin.ignore();
    cin >> y.edad;

    // Terminen el mini menu de la enumeracion Porfavor.

    while (j)
    {
        cout << "Ingrese la necesidad del afectado -> \n";
        cout << "1. -- \n";
        cout << "2. -- \n";
        cout << "3. -- \n";
        cout << "4. -- \n";
        cout << "5. Retroceder\n";

        switch (e)
        {
        case 1:
            /* code */
            break;

        case 2:
            /* code */
            break;

        case 3:
            /* code */
            break;

        case 4:
            /* code */
            break;

        case 5:
            cout << "Menu Anterior -> \n";
            j = false;
            break;

        default:
            cout << "Opcion no valida, intente de nuevo";
            
            break;
        }
    }
    
    cout << "Ingrese el albergue donde se quedara el afectado \n";
    //Inventense la ubicaciones de los albergues xd

    //3 albergues de Nejapa
    cout << "1. " << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;

    //3 albergues de SanSalvador
    cout << "4. " << endl;
    cout << "5. " << endl;
    cout << "6. " << endl;

    //2 albergues de Antiguo Cuscatlan
    cout << "7. " << endl;
    cout << "8. " << endl;

    cin >> i;
    switch (i)
    {
    case 1:
        y.alb = NJ01;
        cout << "Se le asigno Albergue --";
        break;

    case 2:
        y.alb = NJ02;
        cout << "Se le asigno Albergue --";
        break;
    case 3:
        y.alb = NJ03;
        cout << "Se le asigno Albergue --";
        break;
    case 4:
        y.alb = SS01;
        cout << "Se le asigno Albergue --";
        break;
    case 5:
        y.alb = SS02;
        cout << "Se le asigno Albergue --";
        break;
    case 6:
        y.alb = SS03;
        cout << "Se le asigno Albergue --";
        break;
    case 7:
        y.alb = AC01;
        cout << "Se le asigno Albergue --";
        break;
    case 8:
        y.alb = AC02;
        cout << "Se le asigno Albergue --";
        break;
    //Probando introducir changes para github
    default:
    cout << "Opcion no valida, intente de nuevo";
        break;
    }
}