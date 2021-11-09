#include<stdio.h>
#include<conio.h>

int main()
{
    int *x,*A,i,j,n,n1,count=0;


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

       for(i=0;i<n;i++)
       {
		for(j=0;j<n1;j++)
		{
		  if(x[i]==A[j])
		  {
		    count++;
		    break;
		  }
		}
       }

       if(n==count && n1==count)
       {
	printf("Equal Set");
       }
       else
       {
       printf("not Equal Set");
       }
getch();
return 0;
}
