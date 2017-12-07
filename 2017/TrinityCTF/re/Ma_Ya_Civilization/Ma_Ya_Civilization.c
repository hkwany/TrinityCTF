#include<time.h>
#include<stdio.h>
#include<string.h>
void main(){
	char s[20]={0};
	int index=0;
	int temp=0;
	printf("Please Let The World End!\n");
	time_t timer=time(0);
	struct tm *tp=localtime(&timer);
	strftime(s,sizeof(s),"%Y-%m-%d",tp);
	for(index;index<strlen(s);index++){
		temp+=s[index];
	}
	if(temp==485){
		printf("flag{%s}\n",s);
	}		
	


}
