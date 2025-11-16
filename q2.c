#include <stdio.h>
#include <string.h>
int main() {
char emails[4][100] = {
"user@gmail.com",
"john.doe@company.org",
"invalid-email",
"admin@university.edu"
};
char *atPos;
char domain[100];
int i;
printf("Email Domain Extraction:\n");
for (i = 0; i < 4; i++) {
atPos = strchr(emails[i], '@');
if (atPos != NULL) {
strcpy(domain, atPos + 1);
printf("Email: %s  ->  Domain: %s\n", emails[i], domain);
} else{
printf("Email: %s  ->  Domain: Invalid email\n", emails[i]);
}
}
return 0;
}

