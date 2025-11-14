#include<stdio.h>
#include<string.h>
int main(){
char firstname[]="Izzahisourteacher  ";
char lastname[]="Salam";
char fullname[50];
strcpy(fullname,firstname);
strcat(fullname,lastname);
printf("%s",fullname);
return 0;
}

