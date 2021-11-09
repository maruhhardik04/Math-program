//compliment of a set union intersection
#include<stdio.h>
#include<conio.h>
#define MAX 30
void Create(int set[]);
void Print(int set[]);
void Union(int set1[],int set2[],int set3[]);
void Interssection(int set1[],int set2[],int set4[]);
void differences(int set1[],int set2[],int set5[]);
int member(int set[],int x);

int main()
{
	int set1[MAX],set2[MAX],set3[MAX];
	int x,op,*tmp;
	
	set1[0]=set2[0]=set3[0]=0;

	printf("---------set operations--------\n");
	printf("\n 1) Create two sets");
	printf("\n 2) Print the sets");
	printf("\n 3)A U B ------A Union B");
	printf("\n 4)A n B ------A Intersection B");
	printf("\n 5)U - A ------ complement B");
	printf("\n 6)Exit from program");

	do
	{
		printf("\n\nEnter your choice:");
		scanf("%d",&op);       //switch case start
		switch(op)
		{
			case 1:
				printf("\nCreate set A:\n");
				Create(set1);
				printf("\nCreate set B:\n");
				Create(set2);
				break;
			case 2:
				printf("\nPrint set A:\n");
				Print(set1);
				printf("\nPrint set B:\n");
				Print(set2);
				break;
			case 3:

				Union(set1,set2,set3);
				Print(set3);
				break;
			case 4:
				Interssection(set1,set2,set3);
				Print(set3);
				break;
			case 5:
				Union(set1,set2,set3);
				tmp=set3;
				differences(tmp,set1,set3);
				Print(set3);
				break;
			case 6:
				exit ();
			default :
				printf("\n Plese Enter your valid choice");
		}//switch.....case over
	}
	while(op!=6); //do...while over
	return 0;
}//main over
void Create(int set[])
{
	int i,n,x;
	set[0]=0;
	printf("\n No. of elements in the set=");
	scanf("%d",&n);
	printf("\nEnter set element:");

	for(i=1;i<=n;i++)
		scanf("%d",&set[i]);

	set[0]=n;
}
void Print(int set[])
{
	int i,n;
	n=set[0];
	printf("\n Member of the set: ");

	for(i=1;i<=n;i++)
	printf("%d   " ,set[i]);
}
void Union(int set1[],int set2[],int set3[])
{
	int i,n;
	set3[0]=0;
	n=set1[0];

	for(i=0;i<=n;i++)
		set3[i]=set1[i];
	n=set2[0];

	for(i=1;i<=n;i++)
		if(!member(set3,set2[i]))
			set3[++set3[0]]=set2[i];
}

int member(int set[],int x)
{
	int i,n;
	n=set[0];
	for(i=1;i<=n;i++)
		if(x==set[i])
			return 1;
	return 0;
}
void Interssection(int set1[],int set2[],int set4[])
{
       int i,n;
       set4[0]=0;
       n=set1[0];

       for(i=1;i<=n;i++)
	if(member(set2,set1[i]))
		set4[++set4[0]]=set1[i];

}
void differences(int set1[],int set2[],int set5[])
{
	int i,n;
	n=set1[0];
	set5[0]=0;
	for(i=1;i<=n;i++)
		if(!member(set2,set1[i]))
			set5[++set5[0]]=set1[i];
}
