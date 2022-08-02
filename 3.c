#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100];
	scanf("%s",s1);
	char s2[100];
	scanf("%s",s2);
	int x=0,y=0,flag;
	for(int i=0;s1[i]!='\0';i++){
		x++;
		}
	for(int i=0;s2[i]!='\0';i++){
		y++;
		}
	if(x!=y){
		printf("strings are not same");
			}
	else{
	for(int j=0;s1[j]!='\0';j++){
		if(s1[j]!=s2[j]){
			flag=0;
			printf("strings are not same");
			break;}
		else{
			flag=1;
			}
		}
	if(flag==1){
		printf("strings are same");}
		}
	int t=strcmp(s1,s2);
	if(t==0){
		printf("\nstrings are same");
		}
	else
		printf("\nstrings are not same");
			
	return 0;
}
