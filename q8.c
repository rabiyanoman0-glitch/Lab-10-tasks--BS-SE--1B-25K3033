#include <stdio.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    char items[3][3][20] = {
        {"SpringRolls", "GarlicBread", "Salad"},
        {"Burger", "Pasta", "GrilledChicken"},
        {"IceCream", "Cake", "FruitSalad"}
    };
    float prices[3][3] = {
        {5.0, 4.5, 6.0},
        {12.0, 10.0, 15.0},
        {3.5, 4.0, 5.5}
    };
    int i, j;

    printf("----- Restaurant Menu -----\n\n");

    for(i = 0; i < 3; i++) {
        printf("%s:\n", categories[i]);
        for(j = 0; j < 3; j++) {
            printf("  %s - $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }

    printf("Budget-Friendly Options (Under $10):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(prices[i][j] < 10) {
                printf("  %s (%s) - $%.2f\n", items[i][j], categories[i], prices[i][j]);
            }
        }
    }

    return 0;
}

