#include <stdio.h>

int main() {
    float basic, da, ta, hra, totalSalary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    totalSalary = basic + da + ta + hra;

    // Output the total salary
    printf("Total Salary: %f\n", totalSalary);

    return 0;
}

