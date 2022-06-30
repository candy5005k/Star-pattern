/*output:

	$	2	3	4
	1	$	3	4
	1	2	$	4
	1	2	3	$

*/
#include<stdio.h>

int main()
{

	int i,j;

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i==j)
			{
			printf("$\t");
			}
			else
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
	}

	return 0;
}