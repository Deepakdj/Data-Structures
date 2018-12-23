#include <stdio.h>
#include <stdlib.h>
#define MAX 97
void insert_hash_table(int[], int);
void display (int[]);

int main()
{
    int a[MAX],num,key,i;
    int ans=1;
    printf(" Hash Table demo with collision handling by linear probing : \n");
    for (i=0;i<MAX;i++)
        a[i] = -1;
    do
    {
        printf("\n Enter the data to insert into hash table:");
        scanf("%d", &num);
        insert_hash_table(a,num);
        printf("\n Do you wish to continue ? (1/0) ");
        scanf("%d",&ans);
    } while(ans);
    display(a);
}

void insert_hash_table(int a[MAX], int num)
{
    int  i,key,index;
    key=num%97; //generate key

    if(a[key]== -1)  // check whether the location is free or not
        a[key] = num;
    else
    {
        printf("Collision detected and avoided successfully using LINEAR PROBING\n");
        for(i=0;i<MAX;i++)
        {
            index=(key+i)%MAX;
            if(a[index]==-1) break;
        }

        if(a[index]==-1)
            a[index]=num;
        else
            printf("\n Hash table is full");
    }
}

void display(int a[MAX])
{
    int i,choice;
    while(1)
    {
        printf("\n\n1.Display ALL\n2.Filtered Display\n3.Exit\n");
        scanf("%d",&choice);
        printf("\n the hash table is\n");
        switch(choice)
        {
            case 1: for(i=0; i<MAX; i++)
                    {
                        printf("\n %d	%d ", i, a[i]);
                    }
                    break;

            case 2: for(i=0; i<MAX; i++)
                    {
                        if(a[i]!=-1)
                        {
                            printf("\n %d\t %d ", i, a[i]);
                        }
                    }
                    break;

            default:exit(0);
        }
    }
}
