#include<conio.h>
#define FUNC
#ifndef FUNC
char get_ca(char c[],int n)
{
	char sel;
	while(1)
	{
		sel=_getch();
		for(int i=0;i<n;i++)
		{
			if(sel==c[i])
				return c[i];
		}
	}
}
#endif//FUNC