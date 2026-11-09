#include <stdio.h>

int main() {       
     int age; 
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\n--- Result ---\n");
    printf("Hello %s, you are %d years old.\n", name, age);
    printf("Welcome to the world of C programing!\n");

    return 0;


}