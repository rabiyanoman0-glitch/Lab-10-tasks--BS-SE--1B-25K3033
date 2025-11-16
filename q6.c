#include <stdio.h>

int main() {
    char students[5][20];
    int marks[5];
    int i, top = 0;
    float total = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i]);
        printf("Enter marks of %s: ", students[i]);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    for(i = 1; i < 5; i++) {
        if(marks[i] > marks[top]) {
            top = i;
        }
    }

    float average = total / 5;

    printf("\n%-10s  %-5s\n", "Name", "Marks");
    for(i = 0; i < 5; i++) {
        printf("%-10s  %-5d\n", students[i], marks[i]);
    }

    printf("\nTop Scorer: %s with %d marks\n", students[top], marks[top]);
    printf("Class Average: %.2f\n", average);

    return 0;
}

