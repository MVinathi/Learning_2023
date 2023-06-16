#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float phymarks, mathmarks, chemarks;
    float total, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf(" %c", name);  // %[^\n] is used to read a string with spaces
    printf("Enter Marks in Physics: ");
    scanf("%f", &phymarks);
    printf("Enter Marks in Math: ");
    scanf("%f", &mathmarks);
    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemarks);

    total = phymarks + mathmarks + chemarks;
    percentage = (total / 300) * 100;

    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", phymarks);
    printf("Math Marks: %.2f\n", mathmarks);
    printf("Chemistry Marks: %.2f\n", chemarks);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
