#include <stdio.h>

int main() {
    int gross_salary, basic_salary;

    printf("Enter Basic Salary:- ");
    scanf("%d", &basic_salary);
    
    
    gross_salary = basic_salary + (basic_salary * 10 / 100) + (basic_salary * 8 / 100) + (basic_salary * 5 / 100);

    printf("Gross Salary is %d", gross_salary);

}

