#include <iostream>
#include <locale>
using namespace std;
main()
{setlocale(LC_CTYPE,"spanish");
int opcion;
double n1,n2,n3,n4,n5,n6,n8,n9;
cout<<"trabajando con switch-case (caso)\n";
cout<<"generamos el menú";
cout<<"\npara 1 ingrese el numero 1\n";
cout<<"\npara 2 ingrese el numero 2\n";
cout<<"\ningrese el numero de su elección\n";
cin>>opcion;
switch(opcion)
{case 1:
	cout<<"estoy en suma\n";
	int n1,n2,r;
	cout<<"ingrese el primer numero:\n";
	cin>>n1;
	cout<<"ingrese el segundo numero:\n";
	cin>>n2;
	r=n1+n2;
	cout<<"el resultado de la suma es:",
	cout<<r;
	break;
case 4: 
		cout<<"estoy en división\n";
		int n8,n9,resp;
	cout<<"ingrese el primer numero:\n";
	cin>>n9;
	cout<<"ingrese el segundo numero:\n";
	cin>>n8;
	r=n8/n9;
	cout<<"el resultado de la división es:",
	cout<<resp;
	break;
case 2:
		cout<<"estoy en resta\n";
	int n3,n4,re;
	cout<<"ingrese el primer numero:\n";
	cin>>n3;
	cout<<"ingrese el segundo numero:\n";
	cin>>n4;
	r=n3-n4;
	cout<<"el resultado de la suma es:",
	cout<<re;
	break;
case 3:
		cout<<"estoy en multiplicación\n";
	int n5,n6,res;
	cout<<"ingrese el primer numero:\n";
	cin>>n5;
	cout<<"ingrese el segundo numero:\n";
	cin>>n6;
	r=n5*n6;
	cout<<"el resultado de la multiplicacion es:",
	cout<<r;
	break;
default:
		cout<<"no estoy en nada";
	break;
}
}

