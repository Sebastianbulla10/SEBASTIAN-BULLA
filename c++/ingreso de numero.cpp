#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,d,e,x,y,z;
	double g,h,i;
	cout<<"Ingrese un digito\n";
	cin>>a;
	if ((a>=10)&&(a<=20))
	{
		c=0;
		for (b=0;b<=10;b=b+2)
		c=c+b;
		cout<<"La suma de los numeros pares de 0 a 10 es: "<<c;
		getch();
	}
	else if (a==5)
	{
		cout<<"Ingrese 2 numeros para sumarlos\n";
		cin>>b;
		cin>>c;
		d=b+c;
		cout<<"La suma de los numeros es: "<<d;
		cout<<endl;
			if ((b=7) or (c=7))
			{
				while (x<20)
				{
					x=10;
					for 	(x==10;x<20;x++)
					{
						x=x+1;
						cout<<x;
						cout<<endl;
					}
				}
			}
	getch();
	}

	else if (a!=5)
	{
		cout<<"\n Vamos a calcular el area de un triangulo";
		cout<< endl;
		cout<<"Ingrese la medida de la base del triangulo \n";
		cin>>g;
		cout<<"Ingrese la medida de la altura del triangulo \n";
		cin>>h;
		i=(g*h)/2;
		cout<<"El area del traingulo es: \n"<<i;
		
	}
	getch();
	
	
}
