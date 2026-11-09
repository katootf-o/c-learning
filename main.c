#include <stdio.h>

int main() { 
    int grades[5];
    int i;
    int sum = 0;
    float average;

    printf("=== Grade Calculator ===\n");


    for (i = 0; i < 5; i++) { 
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%d", &grades[i]);
        sum = sum + grades[i];
    }

    average = (float)sum / 5;

    printf("\n--- Results ---\n");
    printf("Total sum: %d\n", sum);
    printf("Average: %.2f\n", average);


    return 0;
}