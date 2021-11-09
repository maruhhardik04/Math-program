#include<stdio.h>
#include<conio.h>
#define SIZE 10
int matrix[SIZE][SIZE],row,col,i,j,k;
void Print(int n)
{
    for(i=0;i<row;i++)
    {
	for(j=0;j<col;j++)
	{
	    printf("\t %d ",n*matrix[i][j]);
     }
	printf("\n");
    }
}



void main()
{
    clrscr();
    printf("Enter no. of Rows:");
    scanf("%d",&row);
    printf("Enter no. of Columns:");
    scanf("%d",&col);
    printf("Enter a Matrix Elements:\n");
    for(i=0;i<row;i++)
	    for(j=0;j<col;j++)
	{
	    printf("Enter value of matrix[%d][%d]:",i+1,j+1);
	    scanf("%d",&matrix[i][j]);
	    }
    Print(1);
    printf("Enter Any Number to multiply with matrix:");
    scanf("%d",&k);
    Print(k);
    getch();

}