#include<iostream>
#include<windows.h>
#include<locale>
using namespace std;
main()
{
	setlocale (LC_CTYPE,"Spanish");
	int i;
	char mensaje[]={'P','r','o','g','r','a','m','a','c','i','ó','n',' ',' ','d','e',' ',' ','S','o','f','t','w','a','r','e'};
	for (i=0;i<=25;i++)
	{
		cout<<mensaje[i];
		Sleep(200);
	}
	cout<<"\n\n\n \t\t\t programa finalizado";
}
