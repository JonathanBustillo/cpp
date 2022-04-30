#include<iostream>
using namespace std;
 
double saldo(double retiro,double deposito,double saldot)
{
 
    system("CLEAR");
    saldot=saldot+deposito-retiro;
    return saldot;
     
     
}
 
double deposit(double saldot)
{
     
    double dep=0;
    char sn;
    do
    {
LDeposito:
    system("CLEAR");
    cout<<"INGRESE LA CANTIDAD A DEPOSITAR: ";
    cin>>dep;
     
    while(dep<=0)
    {
        cout<<"DESEA INGRESAR UN VALOR VALIDO s/S n/N: ";
        cin>>sn;
        if(sn=='S'||sn=='s')
            goto LDeposito;
        else
            exit(0);
    }
    saldot=saldo(0,dep,saldot);
    cout<<"DESEA REALIZAR OTRO DEPOSITO s/S n/N: ";cin>>sn;
    }while(sn=='s'||sn=='S');
     
return saldot;
}
 
double retiro(double saldot)
{
    double retir=0;
        char sn;
        system("CLEAR");
        if (saldot==0)
        {cout<<"USTED NO CUENTA CON SALDO DISPONIBLE \n";
            cout<<"DESEA REALIZAR OTRA TRANSACCION s/S n/N: ";cin>>sn;
            if(sn=='S'||sn=='s')
            {
            system("CLEAR");
            }
            else
            exit(0);
         
        }
        do
        {
            LRetir:
            system("CLEAR");
            cout<<"INGRESE LA CANTIDAD A RETIRAR: ";
            cin>>retir;
 
            while(saldot<retir)
            {   
                cout<<"USTED NO CUENTA CON SALDO SUFICIENTE PARA RETIRAR \n";
                goto reintentar;
            }
             
            while(retir<=0)
            {
            reintentar:
                cout<<"DESEA INGRESAR UN VALOR s/S n/N: ";
                cin>>sn;
                if(sn=='S'||sn=='s')
                    goto LRetir;
                else
                    exit(0);    
            }
            saldot=saldo(retir,0,saldot);
            cout<<"DESEA REALIZAR OTRO RETIRO s/S n/N: ";cin>>sn;
        }while(sn=='s'||sn=='S');
     
return saldot;
}
 
 
 
double Option(int option1,double saldot)
{
    switch(option1)
    {
    case 1:saldot=deposit(saldot);break;
    case 2:saldot=retiro(saldot);break;
    case 3: {
            saldot=saldo(0,0,saldot);
            cout<<"USTED CUENTA CON :"<<saldot<<" DOLARES \n";
            }break;
    case 4:{system("CLEAR");cout<<"CERRANDO SISTEMA...";exit(0);}break;
     
    }
 
         
return saldot;
}
 
 
int main()
{
    int opt;
    char sn;
    double saldot=0;
     
    do
    {
    system("CLEAR");
    cout<<"\t\t\tOPERACIONES BANCARIAS \n";
    cout<<"1. DEPOSITO \n";
    cout<<"2. RETIRO \n";
    cout<<"3. SALDO \n";
    cout<<"4. SALIR \n\n";
    cout<<"ELIJA UNA OPCION: ";cin>>opt;
    saldot=Option(opt,saldot);
    cout<<"DESEA CONTINUAR CON OTRA TRANSACCION s/S n/N: ";cin>>sn;
    }while(sn=='s'||sn=='S');
    system("CLEAR");
    cout<<"CERRANDO SISTEMA...\n";exit(0);
    return 0;L
}