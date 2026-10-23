#include<stdio.h>
int main() {
    double num1,num2,num3,result,final_result;
    char operator,operator2;
   
   printf("===============================\n");
   printf("========CALCULATOR=============\n");
   printf("===============================\n");
  
// prompt the user to enter two numbers

   printf("enter the value of num1:");
   scanf("%lf",&num1);

   
   printf("enter the operator(+,-,*,/):");
   scanf(" %c",&operator);
   

   printf("enter the value of num2:");
   scanf("%lf",&num2);
 
   //process the menu choice securely using switch control block
   switch(operator) {
       
      case '+':
      result = num1 + num2;
      printf("%2lf +%2lf = %2lf",num1,num2,result);
      break;

      case '-':
      result =num1-num2;
      printf("%2lf-%2lf = %2lf", num1, num2, result);
      break;

      case '*' :
      result =num1 * num2 ;
      printf("%2lf * %2lf =%2lf", num1, num2, result);
      break;

      // bug hunting safety check intercept divizion by zero crashes manually
      case '/' :
      if(num2 == 0.0)
      {
         printf(" Error: Division by zero is not allowed.");
      }
      else
      {
         result = num1/num2;
         printf("%2lf/%2lf = %2lf", num1, num2, result);

      }
      break;
              // catch allsafety net errors for invalid keystorkes input
        default:
            printf("error invalid operator: please use only +,-,*,/ operators");
            return 1;
   }
   printf("intermediate result(%2lf %c %2lf) = %2lf", num1, operator, num2, result);

            
            

   

   // phase 2:  chaining the calculation to a third value
   printf("enter the value of operator2:");

 scanf(" %c", &operator2);//vital space buffer included

   printf("enter the value of num3:");
   scanf("%lf", &num3);
    
    switch(operator2){
      case '+':final_result = result +num3;
      break;
      case '-':final_result = result - num3;
      break;
      case '*':final_result = result * num3;
      break;
      
      
   
   
   case '/' :

   if (num3 == 0.0)
      {
         printf(" Error: Division by zero is not allowed.");
         return 1;
      }
      final_result =result/num3;
      break;
       default:
       printf("error invalid operaotor: please use only +,-,*,/ operators");
       return 1;
   }
    printf("\n===================================\n");
    printf("FINAL RESULT: %lf\n", final_result);
    printf("===================================\n");

    return 0;
}




   
  
   

