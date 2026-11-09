#include <stdio.h>

int main()  {
    int num1, num2, result;
    char operator; 

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, _, *, /): ");
    scanf(" %c", &operator);

    printf("Enter secand number: ");
    scanf("%d", &num2);


    if (operator == '+') {    
        result = num1 + num2;
        printf("\nresult: %d + %d = %d\n", num1, num2, result);

    }
    else if (operator == '-') {  
        result = num1 - num2 ;
        printf("\nresult: %d - %d = %d\n", num1, num2, result);
           
    }
    else if (operator == '*') {  
        result = num1 * num2 ;
        printf("\nresult: %d * %d = %d\n", num1, num2, result);
           
    }
    else if (operator == '/') {  
        if (num2 != 0){
        result = num1 / num2 ;
        printf("\nresult: %d / %d = %d\n", num1, num2, result);
           
    } else {
        printf("\nError: Cannot divide by zero!\n");
    }
    }
      else {
        printf("\nError: Invalid operator!\n");

      }

      return 0;
    }