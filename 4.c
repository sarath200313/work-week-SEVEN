#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100];
	scanf("%s",s1);
	int x,flag;
	for(int i=0;s1[i]!='\0';i++){
		x++;
		}
	for(int i=0;s1[i]!='\0';i++){
	if(s1[i]!=s1[x-1-i]){
		printf("string is not palindrome");
		break;}
	else{
		flag=1;}}
	if(flag==1){
		printf("string is palindrome");
		
		}
	return 0;
}
