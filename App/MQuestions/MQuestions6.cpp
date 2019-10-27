#include <iostream>
#include "functions.h"
using namespace std;
int MQuestion6(int yes)
{
	char a='1',b='2', c='4', d='3'; 
	char answer;
	int df=0;
	cout<<"Vopros 6"<<endl<<endl<<"Pachka slivochnogo masla stoit 60 rublej."<<endl<<"Pensioneram magazin delaet skidku 5%."<<endl<<"Skol'ko rublej zaplatit pensioner za pachku masla?";
	cout<<endl<<endl<<"1. 56"<<endl<<"2. 57.5"<<endl<<"3. 57"<<endl<<"4. 58"<<endl;
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
