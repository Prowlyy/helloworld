#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40



int main()
{
 //declare variables
 int hours = 0;
 double grossPay = 0.0;
 double taxes = 0.0;
 double netPay = 0.0;

 //Get hours from user
 printf("Please enter the number of hours you worked this week:\n");
 scanf("%d", &hours);

 // Calculate hours worked in week with payrate

 if (hours <= 40)
     grossPay = hours * PAYRATE;
 else

 {
     grossPay = 40 * PAYRATE;
     double overTimePay = (hours - 40) * (PAYRATE * 1.5);
     grossPay = grossPay + overTimePay;
 }

//cALCULATE TAXES

 if (grossPay <= 300)
 {
     taxes = grossPay * TAXRATE_300;
 }
 else if (grossPay > 300 && grossPay < 450)
 {
     taxes = 300 * TAXRATE_300;
     taxes += (grossPay - 300) * TAXRATE_150;
 }
 else if (grossPay > 450)
 {
     taxes = 300 * TAXRATE_300;
     taxes += 150 * TAXRATE_150;
     taxes += (grossPay - 450) * TAXRATE_REST;
 }


//Calculate net pay

 netPay = grossPay - taxes;

 //Display output

 printf("Your gross pay this week is: %.2f\n", grossPay);
 printf("Your taxes this week is: %.2f\n", taxes);
 printf("Your net pay this week is: %.2f\n", netPay);







// if(hoursWorked > 40)
//    basicPayRate = 18.00;
//    printf("This is how much you receive in over time pay %d:\n", basicPayRate * hoursWorked > 40);









 return 0;

}
