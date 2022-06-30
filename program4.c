//Accept Row and Col from user and Print below Pattern

//input:	Row:6	Col:6
/*output:

			*	*	*	*	*	*
			*	#	#	#	*	*
			*	#	#	*	$	*
			*	#	*	$	$	*
			*	*	$	$	$	*
			*	*	*	*	*	*
			
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=0;
	int k=0;
	
	for(i=1,k=iRow;i<=iRow;i++,k--)
	{
		for(j=1;j<=iCol;j++)	
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(k==j))
			{
				printf("*\t");
			}
			else if(k<j)
			{
				printf("$\t");
			}
			else
			{
				printf("#\t");
			}
			
		}
		printf("\n");
	}
	
	
}
	
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Row:");
	scanf("%d",&iValue1);
	
	printf("Enter Col:");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;

}
