#include <iostream>
#include "functions.h"
using namespace std;
int MQuestion3(int yes)
{
	char a='1',b='2', c='4', d='3'; 
	char answer;
	int df=0;
	cout<<"Vopros 3"<<endl<<endl<<"V shkole francuzskij yazyk izuchayut 124 uchashchihsya, chto sostavlyaet 25% ot chisla vsekh uchashchihsya shkoly."<<endl<<"Skol'ko uchashchihsya v shkole?";
	cout<<endl<<endl<<"1. 372"<<endl<<"2. 434"<<endl<<"3. 496"<<endl<<"4. 620"<<endl;
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
