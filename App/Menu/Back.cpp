#include <iostream>
#include "functions.h"
using namespace std;
void Back()
{
	char num;
	int x;
	cout<<endl<<"Vernut'sya v glavnoe menyu"<<endl<<endl<<"1. Da"<<endl<<"2. Net"<<endl;
    for(;;)
	{
		cout<<endl<<"Vyberite chislo ot 1 do 2: ";
        cin>>num;
        if(num=='1' || num=='2')
        {
        	if(num=='1')
        	{
        		system("cls");
        		x=main();
        		break;
			}
			else
			{
				system("cls");
				cout<<endl<<"Spasibo za prohozhdenie testa!"<<endl;
				break;
			}
		}
		else
		{
			
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 2 zanovo!"<<endl;
		}
	}
}
