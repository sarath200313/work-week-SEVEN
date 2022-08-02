#include <stdio.h>
#include <string.h>
int main()
{
	char names[3][100];
	int j;
	char temp[100];
	char var[100];
	for(int i=0;i<3;i++)
		scanf("%s",&names[i]);
	for(int i=1;i<3;i++)
	{
		strcpy(var,names[i]);
		for(j=i-1;j>-1;j--)
		{
			if(strcmp(names[j],var)>0)
			{
				strcpy(names[j+1],names[j]);
			}
			else
				break;
		}
		strcpy(names[j+1],var);
	}
	for(int i=0;i<3;i++)
		printf("\n%s",names[i]);
}

