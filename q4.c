#include <stdio.h>
#include <string.h>
int main() {
    char text[100], enc[100], dec[100];
    int i;

    printf("Enter your message: ");
    fgets(text, sizeof(text), stdin);

    for(i = 0; text[i] != '\0'; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') {
            enc[i] = ((text[i] - 'A' + 3) % 26) + 'A';
        } else if(text[i] >= 'a' && text[i] <= 'z') {
            enc[i] = ((text[i] - 'a' + 3) % 26) + 'a';
        } else {
            enc[i] = text[i];
        }
    }
    enc[i] = '\0';

    for(i = 0; enc[i] != '\0'; i++) {
        if(enc[i] >= 'A' && enc[i] <= 'Z') {
            dec[i] = ((enc[i] - 'A' - 3 + 26) % 26) + 'A';
        } else if(enc[i] >= 'a' && enc[i] <= 'z') {
            dec[i] = ((enc[i] - 'a' - 3 + 26) % 26) + 'a';
        } else {
            dec[i] = enc[i];
        }
    }
    dec[i] = '\0';

    printf("Encrypted: %s", enc);
    printf("Decrypted: %s", dec);

    return 0;
}

