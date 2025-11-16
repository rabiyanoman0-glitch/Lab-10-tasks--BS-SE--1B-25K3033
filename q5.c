#include <stdio.h>
#include <string.h>

int main() {
    char name[5][20];
    int marks[5];
    int i, top = 0;
    float total = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", name[i]);
        printf("Enter marks of %s: ", name[i]);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    for(i = 1; i < 5; i++) {
        if(marks[i] > marks[top]) {
            top = i;
        }
    }

    float average = total / 5;

    printf("\nTop Scorer: %s with %d marks\n", name[top], marks[top]);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

