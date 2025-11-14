#include<stdio.h>
#include<string.h>
int main(){
char firstname[]="Rabiya  ";
char lastname[]="Noman  ";
strncat(firstname,lastname,3);
puts(firstname);
return 0;
}

