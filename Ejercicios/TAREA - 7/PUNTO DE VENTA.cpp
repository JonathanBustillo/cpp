#include <iostream>
#include "venta.h"

using namespace std;


int main(int argc, char const *argv[])
{
    menu ();
    

    return 0;
}

//Factura

#include <iostream>

using namespace std;

double subtotal, totalCompra;
int impuesto;
string listaProductos;


void agregarProducto (string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = 0.20 * subtotal;
    totalCompra = subtotal + impuesto;
}

void imprimirFactura ()
{
    system ("cls");
    cout << "**********"  << endl; 
    cout << " FACTURA  "  << endl; 
    cout << "**********"  << endl;
    cout << endl;

    cout << "PRODUCTOS: " << endl;
    cout <<  listaProductos;

    cout << endl;
    cout << "SUBTOTAL: " << subtotal;
    cout << endl;
    cout << "IMPUESTO: " << impuesto;
    cout << endl;
    cout << endl;
    cout << "EL TOTAL A PAGAR ES: " << totalCompra;
    cout << endl;
    cout << endl;

    system ("PAUSE");
}

//Menu

#include <iostream>
#include  "venta.h"

using namespace std;

void menu ()
{
    int opcion = 0;

    while (true)
    {
        system ("cls");
        cout << "********";
        cout << "  MENU  ";
        cout << "********";
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1 -- BEBIDAS CALIENTES" << endl;
        cout << "2 -- BEBIDAS FRIAS" << endl;
        cout << "3 -- REPOSTERIA" << endl;
        cout << "4 -- IMPRIMIR FACTURA" << endl;
        cout << "0 -- SALIR" << endl;


        cout << endl;
        cout << "IGRESE UNA OPCION: ";
        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }

        if (opcion == 4)
        {
            imprimirFactura ();
            break;
        } else {
            productos (opcion);
        }

        
    }
}

//Productos

#include <iostream>
#include "venta.h"

using namespace std;


void productos (int opcion)
{
    system ("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - CAPUCCINO" << endl;
        cout << "2 - LATE" << endl;
        cout << "3 - CHOCOLATE" << endl;
        cout << "4 - MOCACCINO" << endl;
        cout << endl;

        cout << "INGRESE UNA OPCION: ";
        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 CAPUCCINO - L 55.00", 1, 55);
            break;
                        
        case 2:
            agregarProducto ("1 LATE -  L 35.00", 1, 35);
            break;
                        
        case 3:
            agregarProducto ("1 CHOCOLATE -  L 45.00", 1, 45);
            break;
                        
        case 4:
            agregarProducto ("1 MOCACCINO -  L 60.00", 1, 60);
            break;
                        
        default:
            {
                cout << "OPCION NO VALIDA";
                return;
                break;
            }
        }

        cout << endl;
        cout << "PRODUCTO AGREGADO" << endl << endl;
        system ("PAUSE");

        break;
        
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - COCA COLA" << endl;
        cout << "2 - PEPSI" << endl;
        cout << "3 - SALUT" << endl;
        cout << "4 - BAREFOOT" << endl;
        cout << endl;
        

        cout << "INGRESE UNA OPCION: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 COCA COLA - L 25.00", 1, 25);
            break;
                        
        case 2:
            agregarProducto ("1 PEPSI -  L 25.00", 1, 25);
            break;
                        
        case 3:
            agregarProducto ("1 SALUT -  L 30.00", 1, 30);
            break;
                        
        case 4:
            agregarProducto ("1 BAREFOOT -  L 280.00", 1, 280);
            break;
                        
        default:
            {
                cout << "OPCION NO VALIDA";
                return;
                break;
            }
        }

        cout << endl;
        cout << "PRODUCTO AGREGADO" << endl << endl;
        system ("PAUSE");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - PASTEL DE QUESO" << endl;
        cout << "2 - PASTELITO DE PIÑA" << endl;
        cout << "3 - FLAN" << endl;
        cout << "4 - GALLETA" << endl;
        cout << endl;

        cout << "INGRESE UNA OPCION: ";
        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 PASTEL DE QUESO - L 55.00", 1, 55);
            break;
                        
        case 2:
            agregarProducto ("1 PASTELITO DE PIÑA -  L 20.00", 1, 20);
            break;
        
        case 3:
            agregarProducto ("1 FLAN - L 25.00", 1, 25);
            break;
        
        case 4:
            agregarProducto ("1 GALLETA - L 25.00", 1, 25);
            break;
         
                        
        default:
            {
                cout << "OPCION NO VALIDA";
                return;
                break;
            }
        }

        cout << endl;
        cout << "PRODUCTO AGREGADO" << endl << endl;
        system ("PAUSE");
        break;
    }

    default:
        break;
    }

}


//venta


void menu ();
void agregarProducto (string descripcion, int cantidad, double precio);
void productos (int opcion);
void imprimirFactura ();