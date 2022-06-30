//out -1	2	3	4	4	3	2	1	

#include<stdio.h>

int main()
{
	int iValue= 0;
	int iCnt =0;

	for(iCnt =1 ;iCnt<=4;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	for(iCnt =4;iCnt>0;iCnt--)
	{
		printf("%d\t",iCnt);
	}
	return 0;
}