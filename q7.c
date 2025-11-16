#include <stdio.h>
#include <string.h>

int main() {
    char students[5][20] = {"Amna", "Rabiya", "Marium", "Soha", "Bisma"};
    char courses[5][5][20];
    int courseCount[5];
    int i, j;
    char searchCourse[20];

    for(i = 0; i < 5; i++) {
        printf("Enter number of courses for %s: ", students[i]);
        scanf("%d", &courseCount[i]);

        for(j = 0; j < courseCount[i]; j++) {
            printf("Enter course %d for %s: ", j+1, students[i]);
            scanf("%s", courses[i][j]);
        }
    }

    printf("\nStudent Courses:\n");
    for(i = 0; i < 5; i++) {
        printf("%s: ", students[i]);
        for(j = 0; j < courseCount[i]; j++) {
            printf("%s ", courses[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter course to search for: ");
    scanf("%s", searchCourse);

    printf("Students taking %s:\n", searchCourse);
    for(i = 0; i < 5; i++) {
        for(j = 0; j < courseCount[i]; j++) {
            if(strcmp(courses[i][j], searchCourse) == 0) {
                printf("%s\n", students[i]);
                break;
            }
        }
    }

    printf("\nOverloaded Students (more than 3 courses):\n");
    for(i = 0; i < 5; i++) {
        if(courseCount[i] > 3) {
            printf("%s\n", students[i]);
        }
    }

    return 0;
}

