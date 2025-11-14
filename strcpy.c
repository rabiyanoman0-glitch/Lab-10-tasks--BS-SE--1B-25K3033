#include<stdio.h>
#include<string.h>
int main(){
char word[4][10]={"Apple","Grapes","Kiwi","Orange"};
int i;
strcpy(word[1],"Mango");//replaced value
for(i=0;i<4;i++){
	puts(word[i]);
	printf("Length of %s is %d\n",word[i],strlen(word[i]));
	
}
return 0;
}

