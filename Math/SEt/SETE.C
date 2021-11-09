
#include<stdio.h>
#include<conio.h>

int isSubset(int x[],int A[],int n,int n1)
{

	int i,j;
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n1;j++)
	  {
		if(x[i]==A[j])
		break;
	  }
	  if(j==n1)
	    return 0;
	}
	return 1;

}

int main()
{
    int *x,*A,i,n,n1;
  
    printf("Enter how many  Element you required for Set X:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("Enter the Element of Set x[%d]:",i);
	scanf("%d",&x[i]);
    }
    printf("\n");

     printf("Enter how many  Element you required for Set A:");
     scanf("%d",&n1);
     for(i=0;i<n1;i++)
     {
	printf("Enter the Element of Set A[%d]:",i);
	scanf("%d",&A[i]);
     }
     if(isSubset(x,A,n,n1))
	printf("X is A subset of A");
     else
	printf("X is Not Subset Of A");


    getch();
    return 0;
}
