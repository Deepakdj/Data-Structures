#include<stdio.h>
#include<conio.h>

char str[100], pat[100], rep[100], ans[100]; int i,j,m,c,k,flag=0;

void read()
{
	printf("Enter a Main string\n");
	scanf("%s",str);
	printf("Enter a Pattern string\n");
	scanf("%s",pat);
	printf("Enter a replacement string\n");
	scanf("%s",rep);
}

void patmatch()
{
	i=m=c=j=0;
	while ( str[c] != '\0')
	{
		if ( str[m] == pat[i] ) // ...... matching
		{
			i++;
			m++;
			if ( pat[i] == '\0')
			{
				//.... copy replace string in answer string .....
				for(k=0; rep[k] != '\0';k++,j++)
					ans[j] = rep[k];
				flag=1;
				i=0;
				c=m;
			}
		}
		else //... mismatch
		{
			ans[j] = str[c];
			j++;
			c++;
			m=c;
			i=0;
		}
	}//end of while

	ans[j]='\0';
	if(flag!=1)
	{
		printf("not success\n");
		return;
	}

	printf("\nThe resultant string is\n%s",ans);
}


int main()
{
	read();
	patmatch();
	getch();
}
