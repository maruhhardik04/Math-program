#include<stdio.h>
#include<conio.h>
int row,i,j;
void create(int **a)
{   
    int n=row;
    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	{
	    printf("Enter value of matrix[%d][%d]:",i+1,j+1);
	    scanf("%d",&a[i][j]);
	    }
}
void Print(int **a)
{
     int n=row;
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	    printf("\t %d ",a[i][j]);
     }
	printf("\n");
    }
}

void Addition(int **a,int **b)
{
     int n=row;
	for(i=0;i<n;i++)
	{
	    for(j=0;i<n;j++)
	    {
		    printf(" %d ",(a[i][j]+b[i][j]));
	    }
	    printf("\n");
	}

}




void main()
{
    int A[10][10],B[10][10];
    printf("Enter a Row And Column Size For Null Matrix:");
    scanf("%d",&row);
    create((int **)A);
    Print((int **)A);

     printf("\nEnter a Row And Column Size For A Matrix:");
    scanf("%d",&row);
    create((int **)B);
    Print((int **)B);

    printf("\n Addtion Of Matrix");
     Addition((int **)A,(int **)B);






    getch();
}