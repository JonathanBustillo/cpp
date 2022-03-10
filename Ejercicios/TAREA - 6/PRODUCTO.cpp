#include <iostream>

using namespace std;

extern void agregarProducto (string descripcion, int cantidad, double precio);

int agregarproducto;
 void producto(int opcion)
 {
	
	
	system("cls");
	
	int opcionProducto = 0;
	
	
	switch (opcion)
	{
		
	case 1:	
	{
	
	
		cout << " BEBIDAD CALIENTES	" << endl;
		cout << " ******** "<< endl;
	   	cout << " 1 - CAPUCCINO " << endl;
		cout << " 2 - LATE " << endl;
		cout << " 3 - CHOCOLATE " << endl;
		cout << endl;
		
		cout << " INGRESE UNA OPCION ";
		cin >> opcionProducto;
		
		   switch (opcionProducto)
		   {
		     case 1:	
		   	    agregarProducto ("1 - CAPUCCINO - L 55.00", 1 , 55);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - LATE - L 35.00", 1 , 35);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - CHOCOLATE - L 45.00", 1 , 45);
                break;
			 default:
		        {
				  cout << " OPCION NO VALIDA ";
			     return;
				 break;
		        }
			}  
	
	    cout << endl;
		cout << " PRODUCTO AGREGADO " << endl << endl;
		system("PAUSE");
	
		break; 
	}		
	case 2:	
	{
		cout << " BEBIDAS FRIAS " << endl;
		cout << " ******** "<< endl;
		cout << " 1 - COCA COLA " << endl;
		cout << " 2 - PEPSI " << endl;
		cout << " 3 - SALUT " << endl;
		cout << endl;
		
		cout << " INGRESE UNA OPCION ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
		{
		     case 1:	
		   	    agregarProducto ("1 - COCA COLA - L 25.00", 1 , 25);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - PEPSI - L 25.00", 1 , 25);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - SALUT - L 30.00", 1 , 25);
                break;
			    default:
		        {
				 cout << " OPCION NO VALIDA ";
			     return;
				 break;
		        }
		}  

        
        cout << endl;
		cout << " PRODUCTO AGREGADO " << endl << endl;
		system("PAUSE");
		
		break;
	}		
    case 3:	
	{
		cout << " REPOSTERIA " << endl;
		cout << " ******** "<< endl;
		cout << " 1 - CHEESE CAKE " << endl;
		cout << " 2 - PAsTELITO DE PIÑA  " << endl;
		cout << " 3 - FLAN " << endl;
		cout << endl;
		
		
		cout << " IGRESE UNA OPCION ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
	   {
		     case 1:	
		   	    agregarProducto ("1 - CHEESE CAKE - L 55.00", 1 , 55);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - PAsTELITO DE PIÑA - L 20.00", 1 , 20);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - FLAN - L 25.00", 1 , 55);
                break;
			    default:
		        {
				  cout << " OPCION NO VALIDA ";
			     return;
				 break;
		        }
		}  
		cout << endl;
		cout << " PRODUCTO AGREGADO " << endl << endl;
		system("PAUSE");
			
		break;
				
	}default:
	    break;	
		
		
	

}	

}