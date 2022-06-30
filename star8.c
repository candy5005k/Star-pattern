/* OUTPUT

	*	*	*	*
	*	&	&	*
	*	&	&	*
	*	*	*	*

*/

#include<stdio.h>

int main()
{
	int i,j;

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
		 
		 if(i == 1 || i == 4 || j == 1 || j == 4)
		 {
		 	printf("*\t");
		 }
		 else
		 {
		 	printf("&\t");
		 }
		
		}
		printf("\n");
	}



	return 0;

}

