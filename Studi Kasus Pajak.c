#include <stdio.h>

int main(){
    double monthly_salary;
    double yearly_salary;
    double tax;

    printf("Enter your monthly salary: ");
    scanf("%lf", &monthly_salary);

    yearly_salary = monthly_salary * 12;

    if (monthly_salary <= 4500000)
    {
        tax = 0;
    } else
    {
        if (yearly_salary <= 60000000)
        {
            tax = yearly_salary * 0.05;
        } else if (tax = yearly_salary <= 250000000)
        {
            tax = yearly_salary * 0.15;
        } else if (tax = yearly_salary <= 500000000)
        {
            tax = yearly_salary * 0.25;
        } else if (tax = yearly_salary <= 5000000000)
        {
            tax = yearly_salary * 0.30;
        } else
        {
            tax = yearly_salary  * 0.35;
        }
    }
    printf("Total yearly salary: %.2f\n", yearly_salary);
    printf("Tax amount: %.2f\n", tax);

    return 0;
}