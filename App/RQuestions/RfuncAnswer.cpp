#include <iostream>
int RfuncAnswer(char answer, char a, char b)
{
	int xx = 0;
    if (answer==a)
    {
        return xx;
	}
	else if (answer==b)
	{
		xx++; 
		return xx;
	}
	else
	{
		xx = 2;
		return xx;
	}
}
