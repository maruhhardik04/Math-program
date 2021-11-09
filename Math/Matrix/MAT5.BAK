#include<stdio.h>
#include<conio.h>

void main()
{

    int n,i,j,k,null[10][10],unit[10][10],a[10][10],sum=0;
    clrscr();
    printf("Enter value to create null and unit matrix of order n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
		if(i==j)
		{
		    unit[i][j]=1;
		}
		else{
		unit[i][j]=0;
		}
		null[i][j]=0;
	}

    }

    printf("\n NUll Matric:\n");
    for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	{
	    printf(" %d ",null[i][j]);
	}
	printf("\n");
    }


    printf("\n Unit  Matric:\n");
    for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	{
	    printf(" %d ",unit[i][j]);
	}
	printf("\n");
    }

    printf("\nEnter  a Value of MAtrix A:\n");
     for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	{
	//	printf("Enter value of matrix[%d][%d]:",i+1,j+1);
	    scanf("%d",&a[i][j]);
	}

    printf("\nMultiplication of Matrix  A and I:\n");
    for(i=0;i<n;i++)
    {

	    for(j=0;j<n;j++)
	    {
	    for(k=0;k<n;k++)
	    {
		    sum+=a[i][k]*unit[k][j];
	    }
	    printf(" %d ",sum);
	    sum=0;
	    }
	printf("\n");
    }

    getch();
}