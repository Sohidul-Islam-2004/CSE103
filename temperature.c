#include<stdio.h>
int main(){

printf("---------------Temperature Conversion--------------- \n\n");
         printf("1 -> Calcius to  Fahrenheit and kelvin\n");
          printf("2 -> Fahrenheit to  Calcius and kelvin\n");
           printf("3 -> kelvin to  Fahrenheit and Calcius\n\n");
  int num  ; 
  float calcius ,kelvin , fahrenheit ;
         printf("Option Number : "); 
         scanf("%d" , &num );
           switch (num)
           {
           case 1 :
               printf("Enter Calcius scale Value : ");
               scanf("%f" , &calcius);
               kelvin = 273 + calcius;
               fahrenheit =  (  1.8 *   calcius )+ 32  ;
               printf("Kelvin scale = %.2f\n",kelvin);
               printf("Fahrenheit scale = %.2f",fahrenheit);
               break;
             case 2 :
      printf("Enter Fahrenheit scale Value : ");
               scanf("%f" , &fahrenheit);
               calcius = (fahrenheit - 32) * 0.5555 ;
               kelvin =  ( (fahrenheit - 32) *  0.5555  ) + 273 ;
               printf("Kelvin scale = %.2f\n",kelvin);
               printf("Calcius scale = %.2f",calcius);
            break;
             case 3 :
             printf("Enter Kelvin scale Value : ");
               scanf("%f" , &kelvin);
               calcius = kelvin - 273 ;
               fahrenheit = ( (kelvin - 273) * 1.8 )  + 32 ;
               printf("Fahrenheit scale = %.2f\n",fahrenheit);
               printf("Calcius scale = %.2f",calcius);
     
            break;
           
           default:
            printf("Oops! Invalid Number");
            break;
           }
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
        
        



}