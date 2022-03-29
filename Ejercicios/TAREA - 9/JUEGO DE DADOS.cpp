#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1,dado2;
string lanzar;



int main()
{
    while (true)
    {
        cout<<"--- JUEGO DE DADOS, SE GANA CON LOS NUMEROS 4 , 6 , 8 Y SE PIERDE CON LOS NUMEROS 2 y 12 ---"<<endl<<endl;
        cout<<"PRESIONE CUALQUIER TECLA PARA LANZAR LOS DADOS: "<<endl;
        cin>>lanzar;
        system ("cls");
        for (int i=0;i<=1;i++)
        {
            srand (time (0));
            dado1=rand()%(6)+1;
            dado2=rand()%(6)+1; 
        }
        cout<<"DADO 1 ["<<dado1<<"]";
        cout<<" DADO 2 ["<<dado2<<"]"<<endl;
        cout<<"LA SUMA DE LOS DADOS ES: ["<<dado1+dado2<<"]"<<endl;
        if (dado1+dado2 == 4 or dado1+dado2 == 6 or dado1+dado2 == 8)
        {
            cout<<"\n°°° EL JUGADOR GANA, LA CASA PIERDE °°°"<<endl;
            break;
        }
        if (dado1+dado2 == 2 or dado1+dado2 == 12)
        {
            cout<<"\n*** LA CASA GANA, EL JUGADOR PIERDE ***"<<endl;
            break;
        }
        cout<<"\n--- VUELVA A LANZAR ---"<<endl;
        system("PAUSE");
        system ("cls");
    }   
    return 0;
}