#include<stdio.h>
#include<conio.h>
#define MAX 30

void Create(int set[])
{
    int n,i;
    set[0]=0;
    printf("\n No. of Elements in set is:");
    scanf("%d",&n);
    printf("\n Enter set Elements are:");

    for(i=1;i<=n;i++)
        scanf("%d",&set[i]);

    set[0]=n;

}
void Print(int set[])
{

    int i,n;
    n=set[0];
    printf("\n Member of the set = ");

    for(i=1;i<=n;i++)
        printf("%d  ",set[i]);


}
void Difference(int set1[],int set2[],int set3[])
{

    int i,n;
    n=set1[0];
    set3[0]=0;
    for(i=1;i<=n;i++)
        if(!member(set2,set1[i]))
            set3[++set3[0]]=set1[i];


}
void SymmetricDifference(int set1[],int set2[],int set3[])
{
        int i,n;
        n=set1[0];
        set3[0]=0;


        for(i=1;i<=n;i++)
            if(!member(set2,set1[i]))
                set3[++set3[0]]=set1[i];

        n=set2[0];
        for(i=1;i<=n;i++)
            if(!member(set1,set2[i]))
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



void main()
{
        int set1[MAX],set2[MAX],set3[MAX];
        int x,op;
        clrscr();
        flushall();
        set1[0]=set2[0]=set3[0]=0;

                printf("\n 1)Create \n 2)Print \n 3)Difference \n 4)Symmetric Difference \n 5)Quit");
        do{
                printf("\n Enter Your Choice:");
                scanf("%d",&op);                

                sitch(op)
                {
                    case 1:
                        printf("\n Create Set A = ");
                        Create(set1);
                        printf("\n Create Set B = ");
                        Create(set2);
                        break;
                    case 2:
                        printf("\n Print Set A = ");
                        Print(set1);
                        printf("\n Print Set B = ");
                        Print(set2);
                        break;
                    case 3:
                        Difference(set1,set2,set3);
                        Print(set3);
                        break;
                    case 4:
                        SymmetricDifference(set1,set2,set3);
                        Print(set3);
                        break;
                    case 5:
                        exit(0);
                    default:
                        printf("\n Please Enter your valid choice \n");
                        break;    
                }
        }while(x!=5)


    getch();
}