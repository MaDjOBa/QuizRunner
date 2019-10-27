
#include <iostream>
using namespace std;
void RRes(int x)
{
	cout<<"-------------------------------------"<<endl<<"|       Pravil'nye otvety: "<<x<<"        |"<<endl<<"|                                   |"<<endl;
    cout<<"|       Nepravil'nye otvety: "<<10-x<<"      |"<<endl<<"|                                   |";
    if(x==0 || x==1 || x==2 || x==3)
    {
        cout<<endl<<"|       Vash uroven' znanij: "<<"Low"<<"    |"<<endl;
	}
	else if(x==4 || x==5 || x==6 || x==7)
	{
		cout<<endl<<"|       Vash uroven' znanij: "<<"Medium"<<" |"<<endl;
	}
	else
	{
		cout<<endl<<"|       Vash uroven' znanij: "<<"High"<<"   |"<<endl;
	}
	cout<<"-------------------------------------"<<endl;
}

