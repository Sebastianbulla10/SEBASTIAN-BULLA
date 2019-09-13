#include <iostream>
using namespace std;
main()
{
int n1,n2,n3;
    cout <<"numeros \n\n";
	cout<<"ingrese 3 numeros";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	if((n1<n2) && (n2<n3))
	{
			
		cout<<"\n123\n";
		cout<<"\n menor\n"<<n1;
		cout<<"\n medio\n"<<n2;
	    cout<<"\nmayor\n"<<n3;
}
	else
	{


		    if((n1<n2) && (n2>n3)&&(n1<n3) )
			{
					
				cout<<"\n132\n";
				cout<<"\n menor\n"<<n1;
		        cout<<"\n medio\n"<<n3;
	            cout<<"\nmayor\n"<<n2;
		}
		
				else
				{	

				
				    if((n1<n2) && (n2>n3))
						{
								
							cout<<"\n231\n";
					        cout<<"\n menor\n"<<n3;
                     		cout<<"\n medio\n"<<n1;
	    					cout<<"\nmayor\n"<<n2;
					}
					else
	                {
	    
					    if((n1>n2) && (n2<n3))
							{
							
							cout<<"\n 312\n";
							cout<<"\n menor\n"<<n2;
							cout<<"\n medio\n"<<n3;
	    					cout<<"\nmayor\n"<<n1;
						
					}
							else
							{
	    
						if((n1>n2) && (n1>n3))
								{
								cout<<"\n321\n";
								cout<<"\n menor\n"<<n3;
								cout<<"\n medio\n"<<n2;
	    						cout<<"\nmayor\n"<<n1;
						}
						else
							    cout<<"\n no \n";
							    
							}
					}
				}
			}
	}
}

