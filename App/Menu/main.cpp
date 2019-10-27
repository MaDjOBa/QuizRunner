#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>
#include "functions.h"



using namespace std;
int main();
int main()
{
	int i, yes = 0, x;
	char num = '0';
	Menu();
    for(;;)
	{
		cout<<endl<<endl<<"Vyberite chislo ot 1 do 2: ";
        cin>>num;
        if(num=='1' || num=='2')
        {
        	if(num=='1')
        	{
        		x = Math(yes);
        		MRes(x);
        		Back();
        		break;
			}
		    else
		    {
        	    x = Russian(yes);
        	    RRes(x);
        	    Back();
        	    break;
            }
        }
        else
        {
        	cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 2 zanovo!";
		}
   }
 return 0;
}
