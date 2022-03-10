#include <iostream>

using namespace std;

double impuesto;
double subTotal;
double totalapagar;

string listaProductos;



void agregarProducto (string descripcion, int cantidad, double precio)
{
	
	listaProductos = listaProductos + descripcion + '\n';
	subTotal = subTotal + (cantidad * precio );
	impuesto = impuesto + (precio * 0.20);
	totalapagar = subTotal + impuesto;	
	
}


void imprimirFactura()
{
	
	system("cls");
	cout << " ************ " << endl;
	cout << " FACTURA " << endl;
	cout << " ************ " << endl;
	cout << endl;
	
	cout << " PRODUCTO " << endl;
	cout << listaProductos;
	
	cout << endl;
	cout << " TOTAL A PAGAR : " <<  totalapagar << endl;
	system("PAUSE");
	
}