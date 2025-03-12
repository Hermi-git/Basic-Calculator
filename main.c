#include <stdio.h>
#include <stdlib.h>

int main()
{
   double num1;
   double num2;
   char operat;

   printf("Enter a first number>> ");
   scanf("%lf", &num1);

   printf("Enter an operator>> ");
   scanf(" %c", &operat);

   printf("Enter a second number>> ");
   scanf("%lf", &num2);

   if (operat == '+'){
    printf("%f", num1 + num2);
   }else if (operat == '-'){
    printf("%f", num1 - num2);
   }else if (operat == '/'){
       if (num2 == 0){
        printf("A number can't divisible by zero!");
       }else{printf("%f", num1 / num2);}
       }
    else if (operat == '*'){
      printf("%f", num1 * num2);
    }
    else{
        printf("INVALID OPERATOR. YOU SHOULD ENTER +, -, /, OR *!");
    }

}
