#include<stdio.h>
#include<string.h>
int main(){
char word[4][10]={"Apple","Grapes","Kiwi","Orange"};
for(int i=0;i<4;i++){
	printf("%s\n",word[i]);
	int length= strlen(word[i]);
	for(int j=0;j<length;j++){
		char ch=word[i][j];
		
		if(ch>='a'&& ch<='z'){
			ch=ch-32;
		}
		printf("%c\n",ch);
	}
	printf("\n");
}
return 0;
}

