#include<stdio.h>
int main(){
         printf("---------------Simple Calculator--------------- \n \n");
         printf("1 -> Summation (+) \n");
         printf("2 -> Subtraction (-) \n");
         printf("3 -> Multiplication (X) \n");
         printf("4 -> Division (/) \n \n");
         printf("Option Number : ");
         int num  , a , b ;
         scanf("%d", &num);

         switch (num)
         {
         case 1:
         printf("A = ");
         scanf("%d", &a);
         printf("B = ");
         scanf("%d", &b);
         printf("A + B = %d", a+b);
            break;
             case 2:
               printf("A = ");
         scanf("%d", &a);
         printf("B = ");
         scanf("%d", &b);
         printf("A - B = %d", a-b);
            break;
             case 3:
               printf("A = ");
         scanf("%d", &a);
         printf("B = ");
         scanf("%d", &b);
         printf("A X B = %d", a*b);
            break;
             case 4:
               printf("A = ");
         scanf("%d", &a);
         printf("B = ");
         scanf("%d", &b);
         printf("A / B = %d", a/b);
            break;
         default:
         printf("Oops! Invalid Number");
            break;
         }
         //Bhai sorry code dekhaita parbo na 🙂 ;
         
         
         
         
         
         
         
         
    
}