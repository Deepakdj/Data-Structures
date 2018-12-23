#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int a[100],n,i,pos;

void create()
{
	printf("Enter the no. of elements in array\n");
	scanf("%d",&n);
	printf("Enter %d elements in array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void display()
{
	for(i=0;i<n;i++)
	{
		printf("Element of array a[%d]=%d\n",i,a[i]);
	}
}

void insert()
{
	int ele;
	printf("enter the inserting element and its position\n");
	scanf("%d%d",&ele,&pos);
	for(i=n;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=ele;
	n=n+1;
	printf("\nArray after Insertion\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}


void del()
{
	printf("Enter the position to delete element:\t");
	scanf("%d",&pos);
	if(pos<=n)
	{
		for(i=pos-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
	}
	n=n-1;
	printf("\nArray after Deletion\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter 1 to create element in array:\t");
        printf("\nEnter 2 to display element in array:\t");
		printf("\nEnter 3 to insert element in array:\t");
		printf("\nEnter 4 to delete element from an array:\t");
		printf("\nEnter 5 to Exit:\t"); printf("\n enter the choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
                create();
                
                break;

			case 2:
                if(n!=0)
                {
                    display(); getch();
                }
                break;

			case 3:
                if(n!=0)
                {
                    insert(); getch();
                }
                break;

			case 4:
                if(n!=0)
                {
                    del(); getch();
                }
                break;

			case 5: exit(0);

		}
	}
}
