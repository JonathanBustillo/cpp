#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int r,r1,r2,r3,a,b;
	a=0;
	b=0;
	
	cout<<"INGRESE EL VALOR DE A"<<endl;
	cin>>a;
	
	cout<<"INGRESE EL VALOR DE B"<<endl;
	cin>>b;
	
	r=a+b;
	r1=a-b;
	r2=a*b;
	r3=a/b;
	
	cout<<"LA SUMA DE A + B ES:"<<r<<endl;
	cout<<"LA RESTA DE A - B ES:"<<r1<<endl;
	cout<<"LA MULTIPLIACION DE A * B ES:"<<r2<<endl;
	cout<<"LA DIVISION DE A / B ES:"<<r3<<endl;
    return 0;
}
