#include<stdio.h>
#include<conio.h>
#define SIZE 100
int A[SIZE][SIZE],row,col,i,j;
int B[SIZE][SIZE],row1,col1;

void Create(int **x,int r,int c)
{
    for(i=0;i<r;i++)
    {
	for(j=0;j<c;j++)
	{
	    printf("Enter value of matrix[%d][%d]:",i+1,j+1);
	    scanf("%d",&x[i][j]);
	}
    }
}

void Print(int **x,int r,int c)
{
	for(i=0;i<r;i++)
    {
	for(j=0;j<c;j++)
	{
	    printf("%d ",x[i][j]);
	}
	printf("\n");
    }
}



void main(){

    clrscr();
    printf("Enter no. of Rows:");
    scanf("%d",&row);
    printf("Enter no. of Columns:");
    scanf("%d",&col);
    printf("Enter a of Matrix A Elements:\n");
    Create((int **)A,row,col);
    printf("Given Matrix of %d x %d:\n",row,col) ;
    Print((int **)A,row,col);

     printf("Enter no. of Rows:");
    scanf("%d",&row1);
    printf("Enter no. of Columns:");
    scanf("%d",&col1);
    printf("Enter a Matrix Elements:\n");
    Create((int **)B,row1,col1);
    printf("Given Matrix of %d x %d:\n",row,col) ;
    Print((int **)B,row1,col1);




    getch();
}