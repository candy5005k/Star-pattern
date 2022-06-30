/*OUTPUT

	A	
	B	B	
	C	C	C		
	D	D	D	D
	

*/

#include<stdio.h>

void DisplayStar(int iRow,int iCol)
{
	int i=0;
	int j=0;
	char Ch='\0';

	for ( i = 1,Ch='A'; i <=iRow; i++,Ch++)
	{
		for (j = 1; j <=i;j++)
		{
			printf("%c\t",Ch);
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