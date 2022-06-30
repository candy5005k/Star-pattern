/*output

$	*	*	*

*	$	*	*

*	*	$	*

*	*	*	$	

*/

#include<stdio.h>

int main()
{
	int iValue= 0;
	int i =0;
	int j =0;


	for(j =1;j<=4;j++)
	{
		for(i=1;i<=4;i++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else
			{
				printf("*\t");
	
			}
		}
		printf("\n"); 
	}

	return 0;
}