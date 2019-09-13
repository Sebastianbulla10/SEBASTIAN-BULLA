# include <iostream>
using namespace std;
void suma();
void mensaje();
void hts();
void resta();
	
	void suma()
{
	double n1,n2,r;
	cout<<"\n es hora de sumar \n";
	cout<<"\n ingrese el primer numero \n";
	cin>>n1;
	cout<<"\n ingrese el segundo numero \n";
	cin>>n2;
	r=n1+n2;
	cout<<"la suma es:\n"<<r;
}
	void mensaje()
{
	cout<<"\n estamos en el mensaje\n";
}
	void hts()
{
	cout<<"\n estamos en hts bro \n";
}
	void resta()
{
	double n3,n4,re;
	cout<<"\n es hora de restar \n";
		cout<<"\n ingrese el primer numero \n";
	cin>>n3;
		cout<<"\n ingrese el segundo numero \n";
	cin>>n4;
	re=n3-n4;
	cout<<"la resta es:\n"<<re;
}
	
	
main()
{
resta();
suma();
mensaje();
hts();
}
