#include<stdio.h>
#include<conio.h>
void main()
{
	int *x,n,i,j,k;
	int count=0;
	printf("Enter a how many elements you required in set A:-");
	scanf("%d",&n);
	printf("\n");
	printf("\n enter the elements: ");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&x[i]);
	}
	printf("\n Enter element you want to check:");
	scanf("%d",&k);
	for(j=0;j<n;j++)
	{
		if(x[j]==k)
		{
		 //  printf("\nMember of set");
		   count++;
		}
	}
	if(count>0){

		printf("Member of set");
	}
	else
	{
		printf("Not A Member of SET");
	}

	getch();
}