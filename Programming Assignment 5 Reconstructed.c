#include <stdio.h>

//Programming 5 Assignement reconstrcuted with functions from assignement 3 By Kevin Gardocki In Lanaguage C.

//Grosspay Function
double computeGrossPay(double hourly_wage, int hours_worked, double multiplier)
{
    double overtime_pay, regular_pay, gross_pay, ot_earnings, overtime_hours, regular_hours;
    if (hours_worked > 40)
    {
        regular_hours = 40;
        overtime_hours = hours_worked - 40;
    }
    else
    {
        regular_hours = hours_worked;
        overtime_hours = 0;
    }

    regular_pay = regular_hours * hourly_wage;

    overtime_pay = hourly_wage * multiplier;
    ot_earnings = overtime_pay * overtime_hours;

    gross_pay = regular_pay + ot_earnings;

    return gross_pay;
}
//TaxMed Function
double computeTaxMed(double gross_pay, double deduction_rate)
{
    double t_and_m = gross_pay * deduction_rate;
    return t_and_m;
}
//Union Dues Function
double computeUnionDues(double hourly_wage)
{
    double union_dues = (hourly_wage * 2.5) / 4;
    return union_dues;
}
//PaycheckAmount Function
double computePaycheckAmount(double gross_pay, double t_and_m, double union_dues)
{
    double paycheck = gross_pay - t_and_m - union_dues;
    return paycheck;
}
//Start of Main
int main()
{
    //Starting Questions and Input
    double hourly_wage, gross_pay, t_and_m, union_dues, paycheck;
    int hours_worked;
    char ch; // for choice yes or no
    printf("Is the employee a welder?> ");
    printf(" ");
    scanf("%c", &ch);
    printf("Enter hourly wage> ");
    printf(" ");
    scanf("%lf", &hourly_wage);
    printf("Enter hours worked> ");
    printf(" ");
    scanf("%d", &hours_worked);
    printf("\n");

    if (ch == 'y' || ch == 'Y')
    {
        gross_pay = computeGrossPay(hourly_wage, hours_worked, 2);
    } // End of 'Y' check
    else if (ch == 'n' || ch == 'N')
    {
        gross_pay = computeGrossPay(hourly_wage, hours_worked, 1.5);
    } // End of 'N' check

    t_and_m = computeTaxMed(gross_pay, 0.30);
    union_dues = computeUnionDues(hourly_wage);

    if (ch == 'y' || ch == 'Y')
    {
        paycheck = computePaycheckAmount(gross_pay, t_and_m, union_dues);
    } // End of 'Y' check
    else if (ch == 'n' || ch == 'N')
    {
        paycheck = computePaycheckAmount(gross_pay, t_and_m, 0); // union dues are 0 for non-welders
    }                                                            // End of 'N' check

    //Print output statements
    printf("Grosspay ");
    printf("$%.2lf\n", gross_pay);

    printf("Taxes/medical ");
    printf("%.2lf\n", t_and_m);

    // union dues are printed only if the employee is a welder
    if (ch == 'y' || ch == 'Y')
    {
        printf("Union dues ");
        printf("%.2lf\n", union_dues);
    }

    printf("Paycheck amount ");
    printf("$%.2lf\n", paycheck);

    return 0;
}
