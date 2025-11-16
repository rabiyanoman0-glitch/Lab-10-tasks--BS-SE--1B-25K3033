#include <stdio.h>
#include <string.h>
int main() {
    char text[200] = "Hello Rabiyaa! Programming is fun.";
    int i;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;
    int total = 0;
    for (i = 0; i < strlen(text); i++) {
        if (text[i] == ' ') {
            spaces++;
        }
        else if (text[i] >= '0' && text[i] <= '9') {
            digits++;
        }
        else if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' ||
                 text[i] == 'o' || text[i] == 'u' ||
                 text[i] == 'A' || text[i] == 'E' || text[i] == 'I' ||
                 text[i] == 'O' || text[i] == 'U') {
            vowels++;
        }
        else if ((text[i] >= 'a' && text[i] <= 'z') ||
                 (text[i] >= 'A' && text[i] <= 'Z')) {
            consonants++;
        }
        total++;
    }
    printf("Text: \"%s\"\n\n", text);
    printf("Statistics:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", total);
    return 0;
}

