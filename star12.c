/*
OUTPUT
	*
	*	*
	*	*	*
	*	*	*	*
*/

#include<stdio.h>

void DisplayStar(int iRow,int iCol)
{
	int i = 0;
	int j = 0;

	if(iRow!=iCol)
	{
		printf("Enter the same Row And Columns\n");
		return;
	}

	for(i=1;i<=iRow;i++)
	{
		for(j = 1;j<=iCol;j++)
		{
			if( i==j || i>j)
			{
					printf("*\t");
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter the Rows\n");
	scanf("%d",&iValue1);

	printf("Enter the Columns\n");
	scanf("%d",&iValue2);
	
	DisplayStar(iValue1,iValue2);

	return 0;
}