#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100],s2[100],s3[100],s4[100];
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	
	int i,j;
	for(j=0;s1[j]!='\0';j++){
		s4[j]=s1[j];
		}
	printf("%s",strcat(s1,s3));
	for(i=0;s2[i]!='\0';i++){
		s4[j]=s2[i];
		j++;
		}
	s4[j]='\0';
	printf("\n%s",s4);
	
	return 0;
}
