#include <iostream>
#include "functions.h"
using namespace std;
int MQuestion4(int yes)
{
	char a='3',b='2', c='4', d='1'; 
	char answer;
	int df=0;
	cout<<"Vopros 4"<<endl<<endl<<"Tetrad' stoit 40 rublej."<<endl<<"Kakoe naibolshee chislo takih tetradej mozhno budet kupit' na 750 rublej posle ponizheniya ceny na 10%?";
	cout<<endl<<endl<<"1. 20"<<endl<<"2. 19"<<endl<<"3. 22"<<endl<<"4. 17"<<endl;
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

