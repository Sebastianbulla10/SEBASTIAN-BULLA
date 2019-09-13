#include<iostream>
#include<locale>
using namespace std;

main ()
{
setlocale (LC_CTYPE,"spanish");
int n,i;

do{
	cout<<"Digite un número "; cin>>n;
  }while ((n<1)||(n>10000000));	
   for (i=1;i<=10;i++)
   cout<<n<<" por "<<i<<" es: "<<n*i<<endl;
}
