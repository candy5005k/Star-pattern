/*OUTPUT

*   *   *   *
*   *   *
*   *
*
*
*	*
*	*	*
*	*	*	*	


*/

#include<stdio.h>

void DisplayStar(int iRow,int iCol)
{
	int i= 0;
	int j= 0;
 

	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
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

	for(i=2;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j ||i==j)
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
	
	printf("Enter the Row\n");
	scanf("%d",&iValue1);

	printf("Enter the Columns\n");
	scanf("%d",&iValue2);

	DisplayStar(iValue1,iValue2);
	
	return 0;
}