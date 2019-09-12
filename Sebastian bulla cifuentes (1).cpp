#include<iostream>
using namespace std;
main()
{
	int numero,pares,sumatoria,numero1,numero2,suma,area,base,altura,impares;
	cout<<"Impresion de numeros pares de 1 hasta 10\n\n";
	cout<<"Ingrese un numero: ";
	cin>>numero;
	sumatoria=0;
	if((numero>=10)&&(numero<=20))
	{
		cout<<"Los numeros pares son: "<<endl;
		for(pares=1;pares<11;pares++)
		{
			pares=pares+1;
			cout<<pares<<endl;
			sumatoria=sumatoria+pares;
		}
			cout<<"\nLa sumatoria es: "<<sumatoria;
	}
	else if(numero==5)
	{
		cout<<"Vamos a sumar";
		cout<<"\n\nEs hora de pedir datos\n\n";
		cout<<"Ingrese los dos numeros de la suma: ";
		cin>>numero1;
		cin>>numero2;
		suma=numero1+numero2;
		cout<<"El resultado de la suma es: "<<suma<<endl;
		 
		 if((numero1==7) or (numero2==7) )
		 {   
		                
              
			    for (impares=11;impares<20;impares++) 
			    {
				
	            cout<<impares<<endl;
	            impares=impares+1;
                 numero1+numero1+1;
                 numero2+numero2+2;
			}
		}
	
	}
	else if(numero!=7)
    {   
        cout<<"vamos a calcular el area de un triangulo";
        cout<<"\n\nEs hora de pedir datos\n\n";
        cout<<"ingrese base: ";
        cin>>base;
        cout<<"ingrese altura: "; 
        cin>>altura;
		area=(base*altura)/2;
		cout<<"El area del triangulo es:"<<area;
		 
	}
 }  
       
	   
