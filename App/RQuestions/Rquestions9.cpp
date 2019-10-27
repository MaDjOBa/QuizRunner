#include <iostream>
#include "functions.h"
using namespace std;
int RQuestion9(int yes)
{
	int df;
	char a='1', b='2';
	char answer;
	cout<<"Vopros 9"<<endl<<endl<<"Vyberite variant s pravil'nym udareniem:";
	cout<<endl<<endl<<"1. nAchala"<<endl<<"2. nachalA"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Vvedite otvet (cifru ot 1 do 2): ";
        cin>>answer;
        df = RfuncAnswer(answer, a, b);
        if (df == 1)
        {
        	yes++;
        	break;
		}
		if (df==2)
		{
		    cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 2 zanovo!";
		}
		if (df==0)
		{
		    break;
		}
	}
	return yes;
}

