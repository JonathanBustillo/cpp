#include <iostream>

using namespace std;

int main()
{
	
    int subtotal=0;
    int total=0;
    int impuesto=0;
    
    char estaexenta;
  
    cout<<"INGRESE EL SUBTOTAL DE LA FACTURA"<<endl;
    cin>>subtotal;
  
    cout<<"FACTURA EXENTA? S/N"<<endl;
    cin>>estaexenta;
    
    if(estaexenta == 'S' || estaexenta == 's')
  {
    total=subtotal;
  }
  else 
{
	total=subtotal+(subtotal*0.15);
}
    cout<<"TOTAL A PAGAR ES:"<<total;
	return 0;	
}