#include <iostream>
#include "functions.h"
using namespace std;
int MQuestion2(int yes)
{
	char a='1',b='2', c='3', d='4'; 
	char answer;
	int df=0;
	cout<<"Vopros 2"<<endl<<endl<<"ZHeleznodorozhnyj bilet dlya vzroslogo stoit 720 rublej."<<endl<<"Stoimost' bileta dlya shkol'nika sostavlyaet 50% ot stoimosti bileta dlya vzroslogo."<<endl<<"Gruppa sostoit iz 15 shkol'nikov i 2 vzroslyh."<<endl<<"Skol'ko rublej stoyat bilety na vsyu gruppu?";
	cout<<endl<<endl<<"1. 6760"<<endl<<"2. 7020"<<endl<<"3. 6940"<<endl<<"4. 6840"<<endl;
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
