#include<stdio.h>
#include<conio.h>

void main()
{
    int *u,*x,n,un,i,j,k;
    int count=0;
    printf("Enter a how many elements you required in Universal and SET A:-");
    scanf("%d %d",&un,&n);
	printf("\n");

	printf("\n enter the elements of Universal Set: ");
	for(i=0;i<un;i++)
	{
	 scanf("%d",&u[i]);
	}
	printf("\n enter the elements of Set A: ");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&x[i]);
	}
	printf("\nComplement of Set:");
	for(j=0;j<un;j++)
	{
		for(k=0;k<n;k++)
		{
			if(u[j]==x[k])
			{
			     count++;
			     break;
			}
		}
		if(count==0)
		{
			printf("%d ",u[j]);
		}
	}

    getch();
}