#include <stdio.h>


int main() {
  float hourlywage, hoursworked, overtime, overtimepay, regularpay, totalpay, otearnings, overtimehours, tandm, uniondues, paycheck, totalpay2, paycheck2;
  char ch; // for choice yes or no
  printf("Is the employee a welder(Y/N)?>");
  printf(" ");
  scanf("%c", & ch);
  printf("Enter hourly wage>");
  printf(" ");
  scanf("%f", & hourlywage);
  printf("Enter hours worked>");
  printf(" ");
  scanf("%f", & hoursworked);
  printf("\n");

  //Loops or Calculations

    if (ch == 'y' || ch == 'Y') {
        if (hoursworked > 40) {
	        //Calculations
	        overtimehours = (hoursworked - 40);
	        overtimepay = (hourlywage * 2);
	        regularpay = (40 * hourlywage);
	        otearnings = (overtimepay * overtimehours);
	        totalpay = (regularpay + otearnings);
	        tandm = (totalpay * .30);
	        uniondues = (hourlywage * 2.5 / 4);
	        paycheck = (totalpay - tandm - uniondues);

            //Print output statements
            printf("Grosspay         ");
            printf("%.2f\n", totalpay);

            printf("Taxes/medical    ");
            printf("%.2f\n", tandm);

            printf("Union dues       ");
            printf("%.2f\n", uniondues);

            printf("Paycheck         ");
            printf("%.2f\n", paycheck);
        } 
        else if (hoursworked <= 40) {
            //Calculations 
            totalpay2 = (hourlywage * hoursworked);
            tandm = (totalpay2 * .30);
            uniondues = (hourlywage * 2.5 / 4);
            paycheck2 = (totalpay2 - tandm - uniondues);

            //Print output statements
            printf("Grosspay         ");
            printf("%.2f\n", totalpay2);

            printf("Taxes/medical    ");
            printf("%.2f\n", tandm);

            printf("Union dues       ");
            printf("%.2f\n", uniondues);

            printf("Paycheck         ");
            printf("%.2f\n", paycheck2);
        }
    } //End of 'Y' check
    else if (ch == 'n' || ch == 'N') {
        if (hoursworked > 40) {
            //Calculations
            overtimehours = (hoursworked - 40);
            overtimepay = (hourlywage * 1.5);
            regularpay = (40 * hourlywage);
            otearnings = (overtimepay * overtimehours);
            totalpay = (regularpay + otearnings);
            tandm = (totalpay * .30);
            uniondues = (hourlywage * 2.5 / 4);
            paycheck = (totalpay - tandm);

            //Print output statements
            printf("Grosspay         ");
            printf("%.2f\n", totalpay);

            printf("Taxes/medical    ");
            printf("%.2f\n", tandm);

            printf("Paycheck         ");
            printf("%.2f\n", paycheck);
        } 
        else if (hoursworked <= 40) {
            //Calculations
            totalpay2 = (hourlywage * hoursworked);
            tandm = (totalpay2 * .30);
            paycheck2 = (totalpay2 - tandm);

            //Print output statements
            printf("Grosspay         ");
            printf("%.2f\n", totalpay2);

            printf("Taxes/medical    ");
            printf("%.2f\n", tandm);

            printf("Paycheck         ");
            printf("%.2f\n", paycheck2);
        }
    } //End of 'N' check

 
  return (0);

}
