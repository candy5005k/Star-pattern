/*OUTPUT

	A 	B	C 	D
	A 	B	C 	D	
	A 	B	C 	D
	A 	B	C 	D

*/
#include<stdio.h>

void DisplayStar(int iRow ,int iCol)
{
	int i = 0;
	int j = 0; 
	char Ch = '\0';

	for(i = 1;i <=iRow;i++)
	{
		for(j=1,Ch='A';j<=iCol;j++,Ch++)
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

	printf("Enter the Row: ");
	scanf("%d",&iValue1);

	printf("Enter the Columns: ");
	scanf("%d",&iValue2);
	
	DisplayStar(iValue1,iValue2);

	return 0;
}