#include<iostream>
#include<conio.h>
using namespace std;
void resta();
void a();
void b();
void c();
void mensaje();
void e();
void hola();
void g();


void resta ()
{
	float r1,r2,resta;
	cout<<"restar 2 numeros\n";
	cin>>r1;
	cin>>r2;
	resta=r1-r2;
	cout<<"La resta es: "<<resta;
}
void a()
{
	int a,i;
	cout<<"Ingrese un numero: ";
	cin>>a;
	if ((a%2)==0)
	{
		for (i=0;i<=30;i++)
		{
			cout<<i;
			i=i+1;
			cout<<endl;
		}
	}
	else
	{
		for (i=1;i<=10;i++)
		{
			cout<<"Soy Impar";
			cout<<endl;	
		}
	}
}
void b()
{
	char x;
	do
	{
		cout<<"Haga mientras  ";
		cin>>x;
	
	}
	while (x!='N');
}
void c()
{
	int a,b,h,area;
	cout<<"Ingrese un numero: ";
	cin>>a;
	if (a<5)
	{
		for (b=7;b<=37;b++)
		{
			cout<<b;
			b=b+1;	
		}
	}
	else
	{
		do
		{
			cout<<"Ingrese la altura de un triangulo: ";
			cin>>h;
			cout<<"Ingrese la base de un triangulo: ";
			cin>>b;
			area=(h*b)/2;
			cout<<"El area del triangulo es: "<<area;
		}
		while (h<20);
	}
}
void mensaje()
{
	cout<<"Buenas tardes";
}
void e()
{
	int number1,k;
	cout<<"Ingrese un numero: ";
	cin>>number1;
	while (number1!=12)
	{
		for (k=0;k<=15;k++)
		{
			cout<<"Hoy es miercoles \n";
		}
	}
	
}
void hola()
{
	int m,n,p;
	cout<<"Vamos a imprimir las tablas de multiplicar\n";
	for (m=1;m<=10;m++)
	{
		cout<<endl;
		cout<<endl;
		cout<<"La tabla del: "<<m<<endl;
		for (n=1;n<=10;n++)
		{			
			p=m*n;
			cout<<endl;
			cout<<m<<" por "<<n<<" es: "<<p;
		}
	}
}
void g()
{
	cout<<"Estoy saliendo";
}
main()
{
	int f;
	cout<<"Selecciones una de las Siguientes opciones: \n\n\n";
	cout<<"		Menu	\n";
	cout<<"Para ingresar en uno digite 1\n";
	cout<<"Para ingresar en dos digite 2\n";
	cout<<"Para Ingresar en tres,cinco o nueve digite 3,5 o 9\n";
	cout<<"Para ingresar en cuatro digite 4\n";
	cout<<"Para ingresar en seis digite 6\n";
	cout<<"Para ingresar en siete digite 7\n";
	cout<<"Para ingesar en ocho digite 8\n\n";
	cin>>f;
	switch (f)
	{
		case 1: 	
		{
			cout<<"Este es el 1\n";
			resta();
			break;
		}
		case 2:	
		{		
			cout<<"Este es el 2\n";
			a();
			break;
		}
	 case 3:
	 case 5:
	 case 9:
	 	{
			cout<<"Este es el 3, 5 o 9\n";
			b();
	 		break;
		}
	 	case 4:
		{
			cout<<"Este es el 4\n";
			mensaje();
	 		cout<<endl;
	 		mensaje();
	 		break;
	 	}
	 	case 6:
		{
			cout<<"Este es el 6\n";
			c();
	 		break;
		}
	 	case 7: 
		{
			cout<<"Este es el 7\n";
			e();
	 		break;
	 	}
	 	case 8:	
		{ 
		 	cout<<"Este es el 8\n";
			hola();
	 		break;
	 	}
		default:	
		{
			g();
	 		break;
	 	}
	}
}

