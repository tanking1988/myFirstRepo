#include <stdio.h>
int main (int argv,char* argc[])
{
   int i,n=0;
   scanf("%d",&i);
   for(;i>0;i--)
	{
		n *= i;
	}
   printf("\n%d\n",i);
   return 0;
}
