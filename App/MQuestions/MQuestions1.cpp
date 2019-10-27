#include <iostream>
#include "functions.h"
using namespace std;

int MQuestion1(int yes)
{
	char a='1',b='2', c='3', d='4'; 
	char answer;
	int df=0;
	cout<<"Vopros 1"<<endl<<endl<<"Kilogramm orehov stoit 75 rublej."<<endl<<"Masha kupila 4 kg 400 g orehov."<<endl<<"Skol'ko rublej sdachi ona dolzhna poluchit' s 350 rublej?";
	cout<<endl<<endl<<"1. 10"<<endl<<"2. 20"<<endl<<"3. 30"<<endl<<"4. 40"<<endl;
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
