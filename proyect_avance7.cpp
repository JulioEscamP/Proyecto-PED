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
    list<Necesidad>necesi;
    Albergue alb;
}; 

struct Desaparecido
{
    string nombre;
    string apellido;
    int edad;
}; 

void damnificados(list <Afectado> Damnificados){
    bool m = true, continuar = true, continuar2=true;
    int option, n, o;
    char c;
    struct Afectado afectado;
    list <Necesidad> nec = afectado.necesi;
    

    while (m)
    {
        printf("\n***Men%c de registros de Damnificados***\n",163);
        cout << "1. Ingresar una persona a un albergue " << endl;
        printf( "2. Eliminar a una persona de alg%cn albergue\n",163); 
        cout << "3. Mostrar lista de los damnificados" << endl;
        cout << "4. Volver" << endl;
        printf("*Introduzca el n%cmero de la ",163);
        printf("acci%cn a realizar*\n",162);

        cin >> option; cout<<endl; cin.ignore();
        switch (option)
        {
        case 1:
            cout << "Ingrese primer y segundo nombre \n";
           getline(cin, afectado.nombre); cout << endl;
           cout << "Ingrese primer y segundo apellido \n";
           getline(cin, afectado.apellido); cout << endl;
           cout << "Ingrese edad \n";
           cin>>afectado.edad;
        
           printf("Ingrese necesidad que presenta: \n 1. Ropa\n 2.Cama\n 3.Medicina\n 4. Art%cculos de limpieza personal\n",161);
           while (continuar)
            {cin >> n;
           switch(n){
               case 1 : nec.insert(nec.end(),Ropa);
               cout << "Existe otra necesidad? (y/n)";
               cin >> c;
               if (c == 'n') continuar = false;
               break;

               case 2 : nec.insert(nec.end(),Cama); 
               cout << "Existe otra necesidad? (y/n)";
               cin >> c;
               if (c == 'n') continuar = false;
               break;

               case 3 : nec.insert(nec.end(),Medicina);
               cout << "Existe otra necesidad? (y/n)";
               cin >> c;
               if (c == 'n') continuar = false;
               break;

               case 4 : nec.insert(nec.end(),LimpiezaPersonal);
               cout << "Existe otra necesidad? (y/n)";
               cin >> c;
               if (c == 'n') continuar = false;
               break;

               default :
               printf("\nOpci%cn no ",162);
                    printf("v%clida\n",160);
               break;
           } 
        }

           printf("Ingrese donde sera albergado:\n1. Centro Escolar Aldea de las Mercedes (Nejapa) \n2. Iglesia Evang%clica Silo%c (Nejapa) \n3. Centro Escolar Jos%c Mat%cas Delgado (San salvador) \n4. Cancha de F%ctbol Chapupo Rodr%cguez (San salvador) \n5. Parque Dr. Carlos Antonio Herrera Rebollo (San salvador) \n6. Iglesia Cat%clica Don Rua (San salvador) \n7. Centro educativo Walter Thilo Deininger (Antiguo Cuscatl%cn) \n8. Complejo Deportivo La sultana (Antiguo Cuscatl%cn)\n",130,130,130,161,163,161,162,160,160);
           cin>>o; cout<<endl;
           switch(o){
               case 1 : afectado.alb = NJ01;  
               break;
               case 2 : afectado.alb = NJ02; 
               break;
               case 3 : afectado.alb = NJ03; 
               break;
               case 4 : afectado.alb = SS01;  
               break;
               case 5 : afectado.alb = SS02; 
               break;
               case 6 : afectado.alb = SS03; 
               break;
               case 7 : afectado.alb = AC01;
               break;
               case 8 : afectado.alb = AC01; 
               break;
               default :
               printf("\nOpci%cn no ",162);
                    printf("v%clida\n",160);
               break;
           }
            Damnificados.insert(Damnificados.end(), afectado);

            break;
            case 2:
            cout << "Ingrese el primer y segundo nombre de la persona que ya recibió atención\n";
            getline(cin, afectado.nombre); cout << endl;

            cout << "Ingrese primer y segundo apellido \n";
            getline(cin, afectado.apellido); cout << endl;

            cout << "Ingrese edad \n";
            cin >> afectado.edad;
                 
            for(auto iter = Damnificados.begin(); iter != Damnificados.end(); ++iter)
                if(iter->nombre == afectado.nombre && iter->apellido == afectado.apellido 
                && iter->edad == afectado.edad){
                    iter = Damnificados.erase(iter);
                    cout<<endl<<" Eliminando datos de la persona atendida..."<<endl;
                    break;
                } else cout<<endl<<" No se ha encontrado en la lista..."<<endl;
                       
            break;

        case 3:
        cout<<endl<<"Mostrandlo lista: "<<endl;
            for (Afectado i : Damnificados) {
                cout <<"\n Nombres: "<< i.nombre << " ";
                cout <<"\n Apellidos: "<< i.apellido << " ";
                cout <<"\n Edad: "<< i.edad << endl;
                for (Necesidad j: nec){
                cout <<"\n Necesidad: ";
                 switch(j){
                  case Ropa: cout << "Ropa" << " "; break;
                  case Cama: cout << "Cama" << " "; break;
                  case Medicina: cout << "Medicina" << " "; break;
                  case LimpiezaPersonal: cout << "LimpiezaPersonal" << " "; break;
                 }
                }
                cout <<" Albergue: ";
                switch(i.alb){
                  case NJ01: cout << "Centro Escolar Aldea de las Mercedes (Nejapa)" << endl; break;
                  case NJ02: printf("Iglesia Evang%clica Silo%c (Nejapa)\n",130,130); break;
                  case NJ03: printf("Centro Escolar Jos%c Mat%cas Delgado (San salvador)\n",130,161); break;
                  case SS01: printf("\n4. Cancha de F%ctbol Chapupo Rodr%cguez (San salvador) \n",163,161); break;
                  case SS02: cout << "Parque Dr. Carlos Antonio Herrera Rebollo (San salvador)" << endl; break;
                  case SS03: printf("Iglesia Cat%clica Don Rua (San salvador) \n",162); break;
                  case AC01: printf("Centro educativo Walter Thilo Deininger (Antiguo Cuscatl%cn)\n",160);; break;
                  case AC02: printf("Complejo Deportivo La sultana (Antiguo Cuscatl%cn)\n",160); break;
                }
           }
           cout<<endl;
        
            break;


        case 4:
            printf("Men%c anterior ->",163);
            m = false;
            break;

        default:
            cout<<"Opcion no valida\n";
            break;
        }

    }
}
void heridos( list <Herido> Heridos){
    bool m = true, continuar = true;
    int option, n;
    struct Herido herido;
    while (m)
    {
        printf("\n***Men%c de registros de Heridos***\n",163);
        cout << "1. Ingresar una persona para tratamiento " << endl;
        cout << "2. Eliminar una persona que ya ha recibido tratamiento" << endl;
        cout << "3. Ver lista de personas heridas" << endl;
        cout << "4. Volver" << endl;
        printf("*Introduzca el n%cmero de la ",163);
        printf("acci%cn a realizar*\n",162);

        cin >> option;cout<<endl;cin.ignore();
        switch (option)
        {
        case 1:
           cout << "Ingrese primer y segundo nombre \n";
           getline(cin, herido.nombre); cout << endl;
           cout << "Ingrese primer y segundo apellido \n";
           getline(cin, herido.apellido); cout << endl;
           cout << "Ingrese edad \n";
           cin >> herido.edad;
           cin.ignore();
           printf("Ingrese al hospital al que se le llevar%c\n",160);
            getline(cin, herido.hospital); cout << endl;
           cout << "Ingrese Problema que presenta\n 1. Hueso_roto\n 2.Laceraciones\n 3.Enfermedad_respiratoria\n 4.Herida_craneal\n 5.Enfermedad_grave \n";
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
               case 6 : printf("\nOpci%cn no ",162);
                    printf("v%clida\n",160);
               break;
           }
           
            Heridos.insert(Heridos.end(), herido);

            break;
        case 2:
            cout << "Ingrese nombre de la persona que ya recibió atención\n";
            getline(cin, herido.nombre); cout << endl;

            cout << "Ingrese primer y segundo apellido \n";
            getline(cin, herido.apellido); cout << endl;

            cout << "Ingrese edad \n";
            cin >> herido.edad;  
            
            for(auto iter = Heridos.begin(); iter != Heridos.end(); ++iter)
                if(iter->nombre == herido.nombre && iter->apellido == herido.apellido 
                && iter->edad == herido.edad){
                    iter = Heridos.erase(iter);
                    cout << endl << " Eliminando datos de la persona recuperada..."<<endl;
                    break;
                } else cout << endl <<" No se ha encontrado en la lista..."<<endl;
                    break;
                               
            break;

        case 3:
        cout<<endl<<"Mostrandlo lista: "<<endl;
            for (Herido i : Heridos) {
                cout <<"Nombres: "<< i.nombre << " ";
                cout <<"Apellidos: "<< i.apellido << " ";
                cout <<"Edad: "<< i.edad << endl;
                cout <<"Problema que presenta: ";
                switch(i.in){
                  case Hueso_roto: cout << "Hueso_roto" << endl; break;
                  case Laceraciones: cout << "Ropa" << endl; break;
                  case Enfermedad_respiratoria: cout << "Ropa" << endl; break;
                  case Herida_craneal: cout << "Ropa" << endl; break;
                  case Enfermedad_grave: cout << "Ropa" << endl; break;
                }
                cout<<endl;
           }

            break;
        case 4:
            printf("Men%c anterior ->",163);
            m=false;
            break;

        default:
            printf("\nOpci%cn no ",162);
            printf("v%clida\n",160);
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
        printf("\n***Men%c de registros de Desaparecidos***\n",163);
        cout << "1. Ingresar una persona desaparecida" << endl;
        cout << "2. Eliminar una persona de la lista(Encontrada)" << endl;
        cout << "3. Mostrar lista" << endl;
        cout << "4. Volver" << endl;
        printf("*Introduzca el n%cmero de la ",163);
        printf("acci%cn a realizar*\n",162);
        cin >> option;cout<<endl;cin.ignore();
        switch (option)
        {
        case 1:
           cout << "Ingrese primer y segundo nombre \n";
           getline(cin, desaparecido.nombre); cout << endl;
           cout << "Ingrese primer y segundo apellido \n";
           getline(cin, desaparecido.apellido); cout << endl;
           cout << "Ingrese edad \n";
           cin >> desaparecido.edad;
           Desaparecidos.insert(Desaparecidos.end(), desaparecido);
            break;
        case 2:
            cout << "Ingrese nombre de la persona que ya fue encontrada\n";
            getline(cin, desaparecido.nombre); cout << endl;
        
           cout << "Ingrese primer y segundo apellido \n";
           getline(cin, desaparecido.apellido); cout << endl;

           cout << "Ingrese edad \n";
           cin >> desaparecido.edad;

            for(auto iter = Desaparecidos.begin(); iter != Desaparecidos.end(); ++iter)
                if(iter->nombre == desaparecido.nombre && iter->apellido == desaparecido.apellido 
                && iter->edad == desaparecido.edad){
                    iter = Desaparecidos.erase(iter);
                    cout << endl << " Eliminando datos de la persona encontrada..."<<endl;
                    break;
                } else cout << endl <<" No se ha encontrado en la lista..."<<endl;

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
        printf("Men%c anterior ->",163);
            m=false;
            break;

        default:
            printf("\nOpci%cn no ",162);
            printf("v%clida\n",160);
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
        printf("\n***Men%c de registros de afectados***\n",163);
        cout << "1. Registro de Damnificados" << endl;
        cout << "2. Registro de Heridos" << endl;
        cout << "3. Registro de Desaparecidos" << endl;
        cout << "4. Salir" << endl;
        printf("*Introduzca el n%cmero de la ",163);
        printf("acci%cn a realizar*\n",162);

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
            printf("\nCerrando... Tenga buen d%ca\n\n",161);
            m=false;
            break;

        default:
            printf("\nOpci%cn no ",162);
            printf("v%clida\n",160);
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