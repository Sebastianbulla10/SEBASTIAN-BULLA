#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
void vector1();
void vector2();
void vector3();
void vector4();
void vector5();
void vector6();
void vector7();
void vector8();
void matriz();
void matriz1();
void matriz2();
void matriz3();

void vector1()
{
	int a;
	string vector[]={"Juan","Pedro","Maria","Jose","Petronio","Ancelmo"};
	for (a=0;a<=5;a++)
	{
		cout<<"vector1 en posicion: "<<a<<" es: "<<vector1[a];
		cout<<endl;
	}
}
void vector2()
{
	int b;
	string vector2[3];
		  vector2[0]="Felipe";
		  vector2[2]="Josefa";
		  vector2[1]="Martin";
	for (b=0;b<=2;b++)
	{
		cout<<"vector2 en posicion: "<<b<<" es: "<<vector2[b];
		cout<<endl;
	}
		  
}
void vector3()
{
	int c;
	char vector3[]={'p','r','o','g','r','a','m','a','n','d','o'};
		for (c=0;c<=5;c++)
	{
		cout<<"vector en posicion: "<<c<<" es: "<<vector3[c];
		cout<<endl;
	}
}
void vector4()
{
	int d;
	char vector4[3];
	 	vector4[1]='s';
	 	vector4[2]='q';
	 	vector4[0]='l';
	for (d=0;d<=2;d++)
	{
		cout<<"vector4 en posicion: "<<d<<" es: "<<vector4[d];
		cout<<endl;
	}
}
void vector5()
{
	int e;
	double vector5[]={5.8,6.9,3.5};
		for (e=0;e<=2;e++)
	{
		cout<<"vector5 en posicion: "<<e<<" es: "<<vector5[e];
		cout<<endl;
	}
}
void vector6()
{
	int f;
	double vector6[2];
		  vector6[0]=5.3;
		  vector6[1]=8.0;
	for (f=0;f<=1;f++)
	{
		cout<<"vector6 en posicion: "<<f<<" es: "<<vector6[f];
		cout<<endl;
	}
}
void vector7()
{
	int g;
	int vector7[4]={1,2,5,20000};
	for (g=0;g<=3;g++)
	{
		cout<<"vector7 en posicion: "<<g<<" es: "<<vector7[g];
		cout<<endl;
	}
}
void vector8()
{
	int h;
	int vector8[3];
	    vector8[0]=2500;
	    vector8[2]=1200000;
	for (h=0;h<=2;h++)
	{
		cout<<"vector8 en posicion: "<<h<<" es: "<<vector8[h];
		cout<<endl;
	}
}
void matriz()
{
	int i,j;
	char matriz[4][4]={{'s','a','l'},{'m','a','r'},{'s','o','l'},{'p','a','n'}};
	for (i=0;i<=3;i++)
	{
		cout<<endl;
		for (j=0;j<=3;j++)
		{
			cout<<"Matriz en posicion: "<<i<<","<<j<<" es: "<<matriz[i][j];
			cout<<endl;
		}
	}
}
void matriz1()
{
	int k,l;
	string matriz1[3][3]={{"Pedro","Juan","jose"},{"ana","rocio","pirna"},{"victor","pedro","mila"}};
	for (k=0;k<=2;k++)
	{
		cout<<endl;
		for (l=0;l<=2;l++)
		{
			cout<<"Matriz1 en posicion: "<<k<<","<<l<<" es: "<<matriz1[k][l];
			cout<<endl;
		}
	}
}
void matriz2()
{
	int m,n;
	string matriz2[4][4];
		  matriz2[0][0]="pablo";
		  matriz2[1][0]="Argemiro";
		  matriz2[0][1]="Vilma";
		  matriz2[1][2]="ana";
		  matriz2[2][2]="ismael";
	for (m=0;m<=3;m++)
	{
		cout<<endl;
		for (n=0;n<=3;n++)
		{
			cout<<"Matriz2 en posicion: "<<m<<","<<n<<" es: "<<matriz2[m][n];
			cout<<endl;
		}
	}
	
}
void matriz3()
{
	int o,p;
	char matriz3[3][3];
	 	matriz3[0][3]='p';
	 	matriz3[1][1]='l';
	 	matriz3[2][2]='o';
	for (o=0;o<=3;o++)
	{
		cout<<endl;
		for (p=0;p<=3;p++)
		{
			cout<<"Matriz3 en posicion: "<<o<<","<<p<<" es: "<<matriz3[o][p];
			cout<<endl;
		}
	}
}
main ()
{
	setlocale (LC_CTYPE,"Spanish");
	int x;
	cout<<"Elija una opción\n\n\n";
	cout<<"		Menú";
	cout<<endl;
	cout<<"Ingrese 0 para entrar en vector1\n";
	cout<<"Ingrese 1 para entrar en vector2\n";
	cout<<"Ingrese 2 para entrar en vector3\n";
	cout<<"Ingrese 3 para entrar en vector4\n";
	cout<<"Ingrese 4 para entrar en vector5\n";
	cout<<"Ingrese 5 para entrar en vector6\n";
	cout<<"Ingrese 6 para entrar en vector7\n";
	cout<<"Ingrese 7 para entrar en vector8\n";
	cout<<"Ingrese 8 para entrar en matriz\n";
	cout<<"Ingrese 9 para entrar en matriz1\n";
	cout<<"Ingrese 10 para entrar en matriz2\n";
	cout<<"Ingrese 11 para entrar en matriz3\n\n";
	cin>>x;
	switch(x)
	{
		case 0:
		{
			vector1();
			break;
		}
		case 1:
		{
			vector2();
			break;
		}
		case 2:
		{
			vector3();
			break;
		}
		case 3:
		{
			vector4();
			break;
		}
		case 4:
		{
			vector5();
			break;
		}
		case 5:
		{
			vector6();
			break;
		}
		case 6:
		{
			vector7();
			break;
		}
		case 7:
		{
			vector8();
			break;
		}
		case 8:
		{
			matriz();
			break;
		}
		case 9:
		{
			matriz1();
			break;
		}
		case 10:
		{
			matriz2();
			break;
		}
		case 11:
		{
			matriz3();
			break;
		}
		default:
			{
				cout<<"Opción invalida .-.";
			}
	}
	

}


