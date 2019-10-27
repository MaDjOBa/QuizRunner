#include <iostream>
#include "functions.h"
using namespace std;
int MQuestion5(int yes)
{
	char a='3',b='2', c='4', d='1'; 
	char answer;
	int df=0;
	cout<<"Vopros 5"<<endl<<endl<<"Cena na elektricheskij chajnik byla povyshena na 16% i sostavila 3480 rublej."<<endl<<"Skol'ko rublej stoil chajnik do povysheniya ceny?";
	cout<<endl<<endl<<"1. 3000"<<endl<<"2. 3080"<<endl<<"3. 3040"<<endl<<"4. 2960"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Vvedite otvet (cifru ot 1 do 4): ";
        cin>>answer;
        df = funcAnswer(answer, a, b, c, d);
        if (df == 1)
        {
        	yes++;
        	break;
		}
		if (df==2)
		{
		    cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 4 zanovo!";
		}
		if (df==0)
		{
		    break;
		}
	}
	return yes;	
}

