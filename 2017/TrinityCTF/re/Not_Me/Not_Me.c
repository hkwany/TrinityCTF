#include<stdio.h>
#include<string.h>
char *c="fk_dwR;XK8?r";
void Ha(int index){
	int i;
	char flag[12]={0};
	if(index!=12){
		for(i=0;i<index;i++){
			flag[i]=c[i]+i;
		}
		printf("%s\n",flag);
	}
	else{
		printf("Ha,Flag is not here!\n");
	}

}
void main(){
	char buf[]={0};
	int index=0;
	do{
		printf("Enter something to get flag!\n");
		scanf("%s",buf);
		if(strlen(buf)==7){
			for(index=0;index<strlen(c);index++);
			Ha(index);
			break;
		}
	}while(1);
}
