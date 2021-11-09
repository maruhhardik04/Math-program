#include<stdio.h>
#include<conio.h>
#define SIZE 100
int matrix[SIZE][SIZE],row,col,i,j;
void Create()
{
    for(i=0;i<row;i++)
    {
	for(j=0;j<col;j++)
	{
	    printf("Enter value of matrix[%d][%d]:",i+1,j+1);
	    scanf("%d",&matrix[i][j]);
	}
    }
}

void Print()
{
	for(i=0;i<row;i++)
    {
	for(j=0;j<col;j++)
	{
	    printf("%d ",matrix[i][j]);
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
    printf("Enter a Matrix Elements:\n");
    Create();
    printf("Given Matrix of %d x %d:\n",row,col) ;
    Print();

    getch();
}