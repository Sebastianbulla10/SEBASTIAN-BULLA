#include<iostream>
#include<windows.h>
#include<locale>
using namespace std;


main()



char asterisco [5][5]={{"* * *"};
                       {" *** "};
                       {"*****"};
                       {" *** "};
                       {"* * *"}};
for (int i=0;i <5;i++){
   for (int j=0;j <5;j++){
      printf ("%c",asterisco[i][j]);
   }
   printf ("\n");
}
