#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	scanf("%[^\n]s",s);
	int j=0,a,b,m=0,x;
	for(int i=0;i<strlen(s)+1;i++){
		if(s[i]==' '||s[i]=='\0'){
			x=i-j;
		if(x>m){
				m=x;
				a=j;
				b=i;}
			j=i+1;}}
	for(int g=a;g<b;g++){
		printf("%c",s[g]);}
	return 0;
}
